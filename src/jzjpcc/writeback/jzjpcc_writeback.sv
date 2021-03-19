interface jzjpcc_writeback_if
();

logic [4:0] rdAddr;
logic rdWriteEnable;
logic rdSource;//0 = aluResult_writeback, 1 = memoryOut_writeback
logic [31:0] memoryOut;//Raw from memory (no endianness conversion whatsoever)
logic [31:0] aluResult;
logic [2:0] funct3;//For memory load mux
logic [3:0] memByteMask;//For memory load mux

modport memory
(
	output rdAddr, rdWriteEnable, rdSource, memoryOut, aluResult, funct3, memByteMask
);

modport writeback
(
	input rdAddr, rdWriteEnable, rdSource, memoryOut, aluResult, funct3, memByteMask
);

endinterface

import jzjpcc_endianness_functions::toBigEndian32;
import jzjpcc_endianness_functions::toBigEndian16;

module jzjpcc_writeback
(
	//Input from memory stage
	jzjpcc_writeback_if.writeback writebackIF,
	
	//Output to register file
	output logic [4:0] rdAddr_writebackEnd,
	output logic [31:0] rd_writebackEnd,//Data to write
	output logic rdWriteEnable_writebackEnd
);

assign rdWriteEnable_writebackEnd = writebackIF.rdWriteEnable;//No processing needed
assign rdAddr_writebackEnd = writebackIF.rdAddr;//No processing needed

//Memory output processing
logic [31:0] processedMemoryOut;

logic [15:0] memoryHalfword;
logic [7:0] memoryByte;

//Funct3 mux logic and sign extension
always_comb
begin
	unique case (writebackIF.funct3)
		3'b000://lb
		begin
			processedMemoryOut = {{24{memoryByte[7]}}, memoryByte};
		end
		3'b001://lh
		begin
			processedMemoryOut = {{16{memoryHalfword[5]}}, memoryHalfword};
		end
		3'b010://lw
		begin
			processedMemoryOut = toBigEndian32(writebackIF.memoryOut);
		end
		3'b100://lbu
		begin
			processedMemoryOut = {24'h0, memoryByte};
		end
		3'b101://lhu
		begin
			processedMemoryOut = {16'h0, memoryHalfword};
		end
		default: processedMemoryOut = 'x;
	endcase
end

//Internal processing logic
always_comb
begin
	//memoryByte processing
	unique case (writebackIF.memByteMask)
		4'b0001: memoryByte = writebackIF.memoryOut[31:24];
		4'b0010: memoryByte = writebackIF.memoryOut[23:16];
		4'b0100: memoryByte = writebackIF.memoryOut[15:8];
		4'b1000: memoryByte = writebackIF.memoryOut[7:0];
		default: memoryByte = 'x;
	endcase
	
	//memoryHalfword processing
	unique case (writebackIF.memByteMask)
		4'b0001: memoryHalfword = writebackIF.memoryOut[31:16];
		4'b0100: memoryHalfword = writebackIF.memoryOut[15:0];
		default: memoryHalfword = 'x;
	endcase
end

//TODO memory out needs additional processing based on funct3 and memByteMask
//assign processedMemoryOut = writebackIF.memoryOut;

//Multiplex RD source
assign rd_writebackEnd = writebackIF.rdSource ? processedMemoryOut : writebackIF.aluResult;

endmodule
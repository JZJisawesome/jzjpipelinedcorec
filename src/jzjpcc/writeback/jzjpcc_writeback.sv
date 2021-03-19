interface jzjpcc_writeback_if
();

logic [4:0] rdAddr;
logic rdWriteEnable;
logic rdSource;//0 = aluResult_writeback, 1 = memoryOut_writeback
logic [31:0] memoryOut;
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

module jzjpcc_writeback
(
	//Input from memory stage
	jzjpcc_writeback_if.writeback writebackIF,
	/*
	input logic [4:0] rdAddr_writeback,
	input logic rdWriteEnable_writeback,
	input logic rdSource_writeback,//0 = aluResult_writeback, 1 = memoryOut_writeback
	input logic [31:0] memoryOut_writeback,
	input logic [31:0] aluResult_writeback,
	*/
	
	//Output to register file
	output logic [4:0] rdAddr_writebackEnd,
	output logic [31:0] rd_writebackEnd,//Data to write
	output logic rdWriteEnable_writebackEnd
);

assign rdWriteEnable_writebackEnd = writebackIF.rdWriteEnable;//No processing needed
assign rdAddr_writebackEnd = writebackIF.rdAddr;//No processing needed

//Multiplex RD source
//TODO memory out needs additional muxing based on funct3
assign rd_writebackEnd = writebackIF.rdSource ? writebackIF.memoryOut : writebackIF.aluResult;

endmodule
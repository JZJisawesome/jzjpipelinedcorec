module jzjpcc_writeback
(
	//Input from memory stage
	input logic [4:0] rdAddr_writeback,
	input logic rdWriteEnable_writeback,
	input logic rdSource_writeback,//0 = aluResult_writeback, 1 = memoryOut_writeback
	input logic [31:0] memoryOut_writeback,
	input logic [31:0] aluResult_writeback,
	
	//Output to register file
	output logic [4:0] rdAddr_writebackEnd,
	output logic [31:0] rd_writebackEnd,//Data to write
	output logic rdWriteEnable_writebackEnd
);

assign rdWriteEnable_writebackEnd = rdWriteEnable_writeback;//No processing needed
assign rdAddr_writebackEnd = rdAddr_writeback;//No processing needed

//Multiplex RD source
//TODO memory out needs additional muxing based on funct3
assign rd_writebackEnd = rdSource_writeback ? memoryOut_writeback : aluResult_writeback;

endmodule
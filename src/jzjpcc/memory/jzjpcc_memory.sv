//TODO I dont think the pc is needed here
module jzjpcc_memory
(
	input logic clock,
	input logic reset,
	
	//Inputs from execute
	jzjpcc_memory_if.memory memoryIF,
	/*
	input logic [31:2] memAddress_execute,//For latching by memory address register (combinational)
	input logic [31:0] memDataToWrite_execute,//Combinational
	input logic [3:0] memByteMask_execute,//Combinational
	
	input logic [31:0] aluResult_memory,//Sequential (for writing to reg file)
	input logic rdWriteEnable_memory,//Sequential
	input logic [4:0] rdAddr_memory,//Sequential
	*/
	
	//Outputs to writeback
	output logic [4:0] rdAddr_writeback,
	output logic rdWriteEnable_writeback,
	output logic rdSource_writeback,//0 = aluResult_writeback, 1 = memoryOut_writeback
	output logic [31:0] memoryOut_writeback,
	output logic [31:0] aluResult_writeback,
	//todo memDataRead_writeback
	
	//I/O from/to memory
	output logic [31:2] memAddress_execute_frommemory,
	output logic [31:0] memDataToWrite_execute_frommemory,
	output logic [3:0] memByteMask_execute_frommemory,
	input logic [31:0] memDataRead_memory
);

assign memAddress_execute_frommemory = memoryIF.memAddress;
assign memDataToWrite_execute_frommemory = memoryIF.memDataToWrite;
assign memByteMask_execute_frommemory = memoryIF.memByteMask;

//Writeback output logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		rdWriteEnable_writeback <= 1'b0;
	end
	else if (clock)
	begin
		rdAddr_writeback <= memoryIF.rdAddr;
		rdWriteEnable_writeback <= memoryIF.rdWriteEnable;
		//rdSource_writeback//TODO
		//memoryOut_writeback
		aluResult_writeback <= memoryIF.aluResult;
	end
end

endmodule
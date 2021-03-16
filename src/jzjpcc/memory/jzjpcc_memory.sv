//TODO I dont think the pc is needed here
module jzjpcc_memory
#(
	parameter int RAM_A_WIDTH,
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from execute
	input logic [RAM_A_WIDTH - 1:0] memAddress_execute,//For latching by memory address register (combinational)
	input logic [31:0] aluResult_memory,//Sequential (for writing to reg file)
	input logic [PC_MAX_B:2] currentPC_memory,//Sequential//TODO I dont think the pc is needed
	input logic [31:0] memDataToWrite_execute,//Combinational
	input logic [3:0] memByteMask_execute,//Combinational
	input logic rdWriteEnable_memory,//Sequential
	input logic [4:0] rdAddr_memory,//Sequential
	
	//Outputs to writeback
	output logic [4:0] rdAddr_writeback,
	output logic rdWriteEnable_writeback,
	output logic rdSource_writeback,//0 = aluResult_writeback, 1 = memoryOut_writeback
	output logic [31:0] memoryOut_writeback,
	output logic [31:0] aluResult_writeback,
	
	//I/O from/to memory
	output logic [31:2] memAddress_execute_frommemory,
	output logic [31:0] memDataToWrite_execute_frommemory,
	output logic [3:0] memByteMask_execute_frommemory
);

assign memAddress_execute_frommemory = memAddress_execute;
assign memDataToWrite_execute_frommemory = memDataToWrite_execute;
assign memByteMask_execute_frommemory = memByteMask_execute;

//Writeback output logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		rdWriteEnable_writeback <= 1'b0;
	end
	else if (clock)
	begin
		rdAddr_writeback <= rdAddr_memory;
		rdWriteEnable_writeback <= rdWriteEnable_memory;
		//rdSource_writeback//TODO
		//memoryOut_writeback
		aluResult_writeback <= aluResult_memory;
	end
end

endmodule
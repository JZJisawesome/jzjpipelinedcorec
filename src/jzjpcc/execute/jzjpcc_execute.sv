module jzjpcc_execute
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from decode
	jzjpcc_execute_if.execute executeIF,
	/*
	input logic [31:0] immediate_execute,
	input logic [31:0] rs1_execute,
	input logic [31:0] rs2_execute,
	input logic [PC_MAX_B:2] currentPC_execute,
	input logic [4:0] rdAddr_execute,
	//TODO also control logic
	input logic [2:0] aluOperation_execute,
	input logic aluMod_execute,
	input logic [1:0] aluMuxMode_execute,
	input logic rdWriteEnable_execute,
	*/
	
	//Outputs to memory stage
	output logic [31:2] memAddress_execute,//For latching by memory address register (combinational)
	output logic [31:0] memDataToWrite_execute,//Combinational
	output logic [3:0] memByteMask_execute,//Combinational
	//output logic memWriteEnable_execute,
	
	output logic [31:0] aluResult_memory,//Sequential (for writing to reg file)
	output logic rdWriteEnable_memory,//Sequential
	output logic [4:0] rdAddr_memory//Sequential
	
);
logic [31:0] aluOperandA;
logic [31:0] aluOperandB;
logic [31:0] aluResult_execute;

//Logic stuffs
assign memAddress_execute = aluResult_execute[31:2];//Offset handled by byte mask logic

always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		aluResult_memory <= 32'h0;
		rdWriteEnable_memory <= 1'b0;
	end
	else if (clock)
	begin
		aluResult_memory <= aluResult_execute;
		rdWriteEnable_memory <= executeIF.rdWriteEnable;
		rdAddr_memory <= executeIF.rdAddr;
	end
end

/* Modules */
jzjpcc_alu alu (.*);
jzjpcc_alumux #(.PC_MAX_B(PC_MAX_B)) aluMultiplexer (.*);
jzjpcc_mem_processor memOperandProcessor (.*);

endmodule
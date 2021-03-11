module jzjpcc_execute
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from decode
	input logic [31:0] immediate_execute,
	input logic [31:0] rs1_execute,
	input logic [31:0] rs2_execute,
	input logic [PC_MAX_B:2] currentPC_execute,
	input logic [4:0] rdAddr_execute,//TODO might need flushing
	//TODO also control logic
	input logic [2:0] aluOperation_execute,
	input logic aluMod_execute,
	input logic [1:0] aluMuxMode_execute,
	input logic rdWriteEnable_execute
);
logic [31:0] aluOperandA;
logic [31:0] aluOperandB;
logic [31:0] aluResult_execute;

/* Modules */
jzjpcc_alu alu (.*);
jzjpcc_alumux #(.PC_MAX_B(PC_MAX_B)) aluMultiplexer (.*);

endmodule
//TODO will tie everything the in the decode stage together
module jzjpcc_decode
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from fetch stage
	input logic [31:2] instruction_decode,
	input logic [PC_MAX_B:2] currentPC_decode,
	
	//Outputs to execute stage
	output logic [31:0] immediate_execute
);
logic [31:0] immediate;
logic [31:0] immediateI;
logic [31:0] immediateB;
logic [31:0] immediateJ;

/* Modules */
jzjpcc_immediateFormer immediateFormer (.*);

endmodule
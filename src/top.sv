module top
(
	input clock,
	input not_reset,
	
	input logic [31:2] instruction,//test
	output logic [31:0] immediate,
	input logic test
);
logic reset;
assign reset = !not_reset;

//jzjpcc_immediateFormer (.instruction, .immediate);//Test
jzjpcc_regfile(.clock, .reset, .rdAddr(instruction), .rd(instruction), .rdWriteEn(test), .rs1Addr(instruction), .rs1(immediate));//Test

jzjpcc_pc();//Test

endmodule 

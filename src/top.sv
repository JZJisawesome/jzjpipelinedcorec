module top
(
	input clock,
	input not_reset,
	
	//input logic [31:2] instruction,//test
	input logic [31:0] instruction,//test
	output logic [31:0] immediate,
	input logic test
);
logic reset;
assign reset = !not_reset;

//jzjpcc_immediateFormer (.instruction, .immediate);//Test
//jzjpcc_regfile(.clock, .reset, .rdAddr(instruction), .rd(instruction), .rdWriteEn(test), .rs1Addr(instruction), .rs1(immediate));//Test

//jzjpcc_fetch();//Test

jzjpcc_inferred_sram(.clock(clock), .readB(immediate[15:0]), .addressB(instruction[15:0]),
.writeEnableB(test), .readA(immediate[31:16]), .addressA(instruction[31:16]), .writeEnableA(!test));

endmodule 

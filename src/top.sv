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

//Testing
logic [31:0] register31Value;

logic [31:0] mmioInputs [8];
logic [31:0] mmioOutputs [8];

assign immediate = register31Value;
assign mmioInputs[0] = instruction;

jzjpcc #(.INITIAL_MEM_CONTENTS("/tmp/test.hex")) (.*);

//jzjpcc_immediateFormer (.instruction, .immediate);//Test
//jzjpcc_regfile(.clock, .reset, .rdAddr(instruction), .rd(instruction), .rdWriteEn(test), .rs1Addr(instruction), .rs1(immediate));//Test

//jzjpcc_fetch();//Test

//jzjpcc_inferred_sram(.clock(clock), .readB(immediate[15:0]), .addressB(instruction[15:0]),
//.writeEnableB(test), .readA(immediate[31:16]), .addressA(instruction[31:16]), .writeEnableA(!test),
//.byteWriteMaskA(immediate), .byteWriteMaskB(immediate));//Test

endmodule 

module jzjpcc_memory_backend
(
	input logic clock,
	input logic reset,
	
	//Instruction fetch
	output logic [31:0] instruction_fetch,//Big endian
	input logic [31:2] instructionAddressToLatch
	
	//Memory stage//TODO
);


endmodule
//The PC register and the address register withing the Cyclone IV SRAM hardware block are part of the fetch stage
//The instruction_decode and currentPC_decode are part of the decode stage (register leading into the decode stage)

module jzjpcc_fetch
(
	input logic clock,
	input logic reset,
	
	//Outputs to decode stage
	output logic [31:0] instruction_decode,//This is big endian
	output logic [31:2] currentPC_decode,
	
	//Inputs (from decode for jal/jalr/branches)
	input logic pcCTWriteEnable,//Whether controlTransferNewPC or the next sequential pc must be latched
	input logic [31:2] controlTransferNewPC,
	
	//Hazard control
	input logic stall_fetch,//New pc won't be latched
	input logic flush_decode//Flushes instruction_decode to be a nop on the next posedge instead of fetching a new instruction
);
//From program counter
logic [31:2] currentPC_fetch;
logic [31:2] nextPC;

//From/for instruction memory
logic [31:2] instructionAddressToLatch;
assign instructionAddressToLatch = nextPC;

/* Modules */

jzjpcc_pc programCounter(.*);

endmodule
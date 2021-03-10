import jzjpcc_endianness_functions::toBigEndian32;

module jzjpcc_memory_backend
#(
	parameter INITIAL_MEM_CONTENTS,
	parameter int RAM_A_WIDTH,
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Instruction fetch
	output logic [31:0] instruction_fetch,//Big endian
	//input logic [31:2] instructionAddressToLatch
	input logic [PC_MAX_B:2] instructionAddressToLatch
	
	//Memory stage//TODO
);
logic [31:0] littleEndianInstruction;
assign instruction_fetch = toBigEndian32(littleEndianInstruction);

/* Modules */

jzjpcc_inferred_sram #(.INITIAL_MEM_CONTENTS(INITIAL_MEM_CONTENTS), .RAM_A_WIDTH(RAM_A_WIDTH)) sram 
							(.addressA(instructionAddressToLatch), .readA(littleEndianInstruction), .writeEnableA(0), .byteWriteMaskA(4'b0), .writeA(32'h0));
							//TODO Feed port b to address decoder for use in memory stage of pipeline

endmodule
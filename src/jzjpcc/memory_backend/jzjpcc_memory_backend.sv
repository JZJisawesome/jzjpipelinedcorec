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
	output logic [31:2] instruction_fetch,//Big endian
	input logic [PC_MAX_B:2] instructionAddressToLatch,
	
	//Memory stage (Combinational execute output is latched by the memory stage)
	input logic [31:2] memAddress_execute_frommemory,
	input logic [31:0] memDataToWrite_execute_frommemory,
	input logic [3:0] memByteMask_execute_frommemory,
	
	//MMIO Output
	input logic [31:0] mmioInputs [8],
	output logic [31:0] mmioOutputs [8]
);
//Instruction Fetch Logic
logic [31:0] littleEndianInstruction;
assign instruction_fetch = toBigEndian32(littleEndianInstruction) >> 2;//Discard lower 2 bits

//Data Read/Write Logic

/* Modules */

jzjpcc_inferred_sram #(.INITIAL_MEM_CONTENTS(INITIAL_MEM_CONTENTS), .RAM_A_WIDTH(RAM_A_WIDTH)) sram 
							(.addressA(instructionAddressToLatch), .readA(littleEndianInstruction), .writeEnableA(0), .byteWriteMaskA(4'b0), .writeA(32'h0));
							//TODO Feed port b to address decoder for use in memory stage of pipeline

endmodule
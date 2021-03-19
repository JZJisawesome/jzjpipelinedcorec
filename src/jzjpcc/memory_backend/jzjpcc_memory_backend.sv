interface jzjpcc_memory_backend_data_if
();

//Connections
//In execute stage (latched by Cyclone address registers/bytemask registers/data in registers)
logic memWriteEnable;
logic [31:2] memAddress;
logic [31:0] memDataToWrite;
logic [3:0] memByteMask;
//In memory stage
logic [31:0] memDataRead;

modport backend
(
	input memWriteEnable, memAddress, memDataToWrite, memByteMask,
	output memDataRead
);

modport stage
(
	input memDataRead,
	output memWriteEnable, memAddress, memDataToWrite, memByteMask
);

endinterface

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
	
	//Memory stage
	jzjpcc_memory_backend_data_if.backend memDataBackendIF,
	
	//MMIO Output
	input logic [31:0] mmioInputs [8],
	output logic [31:0] mmioOutputs [8]
);
//Instruction Fetch Logic
logic [31:0] littleEndianInstruction;
assign instruction_fetch = 30'(toBigEndian32(littleEndianInstruction) >> 2);//Discard lower 2 bits

//Data Read/Write Logic

/* Modules */

jzjpcc_inferred_sram #(.INITIAL_MEM_CONTENTS(INITIAL_MEM_CONTENTS), .RAM_A_WIDTH(RAM_A_WIDTH)) sram (.clock,
							.addressA(instructionAddressToLatch), .readA(littleEndianInstruction), .writeEnableA(0), .byteWriteMaskA(4'b0), .writeA(32'h0),
							//TODO implement address decoder instead of just feeding everything to sram
							.addressB(memDataBackendIF.memAddress), .readB(memDataBackendIF.memDataRead), .writeEnableB(memDataBackendIF.memWriteEnable),
							.byteWriteMaskB(memDataBackendIF.memByteMask), .writeB(memDataBackendIF.memDataToWrite));

endmodule
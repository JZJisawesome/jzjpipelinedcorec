module jzjpcc
#(
	parameter INITIAL_MEM_CONTENTS = "initialRam.hex",//File containing initial ram contents (32 bit words)
	parameter int RAM_A_WIDTH = 12//Number of addresses for code/ram (not memory mapped io); 2^RAM_A_WIDTH words = 2^RAM_A_WIDTH * 4 bytes//; maximum of 29
	//parameter logic [31:0] RESET_VECTOR = 32'h00000000,//Address for execution to begin at (must be within RAM)
	//parameter bit RV32I = 1//1 for a RV32IZifencei implementation, 0 for a RV32EZifencei implementation
)
(
	input logic clock,
	input logic reset,//Asynchronous
	
	output logic [31:0] register31Value//For testing
);
localparam int PC_MAX_B = RAM_A_WIDTH + 1;//The program counter is always [RAM_A_WIDTH + 1:2] to cover all word addresses of SRAM

/* Connections */
//Stages
//Fetch
logic pcCTWriteEnable;//From decode
logic [PC_MAX_B:2] controlTransferNewPC;//From decode
logic stall_fetch;
logic flush_decode;

//Decode
logic [31:2] instruction_decode;
logic [PC_MAX_B:2] currentPC_decode;

//Common modules
//Memory backend
logic [31:2] instruction_fetch;
logic [PC_MAX_B:2] instructionAddressToLatch;

/* Modules */
//Stages
jzjpcc_fetch #(.PC_MAX_B(PC_MAX_B)) fetch (.*);//TODO

//Common modules

jzjpcc_memory_backend #(.INITIAL_MEM_CONTENTS(INITIAL_MEM_CONTENTS), .RAM_A_WIDTH(RAM_A_WIDTH), .PC_MAX_B(PC_MAX_B)) memoryBackend (.*);//TODO

endmodule
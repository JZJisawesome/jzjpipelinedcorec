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
	
	//Memory Mapped Ports
	//Must be read/written a whole word at a time
	//Reads from the address read from mmioInputs, writes write to mmioOutputs
	//mmioInputs [7:0] and mmioOutputs [7:0] are at byte-wise memory addresses [FFFFFFE0:FFFFFFFC] (each are 4 bytes (1 word) wide)
	input logic [31:0] mmioInputs [8],
	output logic [31:0] mmioOutputs [8],
	//For tristate ports, an additional port's outputs can be designated as a direction register externally, which can be used by an external module to allow/disalow writing
	//If feedback is desired, then inputs should be connected to their respective output register
	//MAKE SURE INPUTS AND OUTPUTS ARE SYNCHRONIZED IF THEY ARE FROM/TO ANOTHER CLOCK DOMAIN
	
	//Output for legacy asembly test programs that output to register 31; for new software use memory mapped io instead
	//Used for testing things before memory mapped io was implemented
	output logic [31:0] register31Value
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
logic flush_execute;

//Execute
logic [2:0] aluOperation_execute;
logic aluMod_execute;
logic [1:0] aluMuxMode_execute;
logic rdWriteEnable_execute;
logic [31:0] immediate_execute;
logic [31:0] rs1_execute;
logic [31:0] rs2_execute;
logic [PC_MAX_B:2] currentPC_execute;
logic [4:0] rdAddr_execute;

//Common modules
//Memory backend
logic [31:2] instruction_fetch;
logic [PC_MAX_B:2] instructionAddressToLatch;
//Register file
logic [4:0] rs1Addr_decode;
logic [4:0] rs2Addr_decode;
logic [31:0] rs1_decode;
logic [31:0] rs2_decode;
logic [4:0] rdAddr_writebackEnd;
logic [31:0] rd_writebackEnd;//Written on negative edge
logic rdWriteEnable_writebackEnd;

/* Modules */
//Stages
jzjpcc_fetch #(.PC_MAX_B(PC_MAX_B)) fetch (.*);
jzjpcc_decode #(.PC_MAX_B(PC_MAX_B)) decode (.*);
jzjpcc_execute #(.PC_MAX_B(PC_MAX_B)) execute (.*);

//Common modules
jzjpcc_memory_backend #(.INITIAL_MEM_CONTENTS(INITIAL_MEM_CONTENTS), .RAM_A_WIDTH(RAM_A_WIDTH), .PC_MAX_B(PC_MAX_B)) memoryBackend (.*);
jzjpcc_regfile registerFile (.*);

endmodule
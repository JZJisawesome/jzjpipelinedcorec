 
module jzjpcc_branch_unit
(
	//Instruction input
	input logic [31:2] instruction_decode,
	
	//Immediate inputs
	input logic [31:0] immediateI,
	input logic [31:0] immediateB,
	input logic [31:0] immediateJ,
	
	//Operands for branch comparison and new address calculation
	input logic [31:0] realRS1,
	input logic [31:0] realRS2,
	input logic [PC_MAX_B:2] currentPC_decode,
	
	//Outputs to fetch stage
	output logic pcCTWriteEnable,//Whether controlTransferNewPC or the next sequential pc must be latched
	output logic [PC_MAX_B:2] controlTransferNewPC
);

typedef enum logic[4:0]
{
	LOAD = 5'b00000, MISC_MEM = 5'b00011, OP_IMM = 5'b00100, AUIPC = 5'b00101,
	STORE = 5'b01000, OP = 5'b01100, LUI = 5'b01101, BRANCH = 5'b11000,
	JALR = 5'b11001, JAL = 5'b11011, SYSTEM = 5'b11100
} opcode_t;

opcode_t opcode;
assign opcode = opcode_t'(instruction_decode[6:2]);

endmodule
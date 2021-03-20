module jzjpcc_immediateFormer
(
	input logic [31:2] instruction_decode,
	
	//Output for next pc logic
	output logic [31:0] immediateI,//For JALR (and next stage multiplexer)
	output logic [31:0] immediateB,//For BRANCH
	output logic [31:0] immediateJ,//For JAL
	
	//Output for next stage (multiplexed immediate based on opcode)
	//Will only ever output an I, U, or S immediate
	output logic [31:0] immediate
);
logic signBit;
assign signBit = instruction_decode[31];

//Individual immediate logic
logic [31:0] immediateS;
logic [31:0] immediateU;

assign immediateI = {{21{signBit}}, instruction_decode[30:20]};
assign immediateS = {{21{signBit}}, instruction_decode[30:25], instruction_decode[11:7]};
assign immediateB = {{20{signBit}}, instruction_decode[7], instruction_decode[30:25], instruction_decode[11:8], 1'b0};
assign immediateU = {signBit, instruction_decode[30:12], 12'b0};
assign immediateJ = {{12{signBit}}, instruction_decode[19:12], instruction_decode[20], instruction_decode[30:21], 1'b0};

//Next stage multiplexer
//Note: synthesis will optimize things a ton

typedef enum logic[4:0]
{
	LOAD = 5'b00000, MISC_MEM = 5'b00011, OP_IMM = 5'b00100, AUIPC = 5'b00101,
	STORE = 5'b01000, OP = 5'b01100, LUI = 5'b01101, BRANCH = 5'b11000,
	JALR = 5'b11001, JAL = 5'b11011, SYSTEM = 5'b11100
} opcode_t;

opcode_t opcode;
assign opcode = opcode_t'(instruction_decode[6:2]);

always_comb
begin
	unique case (opcode)
		OP_IMM, LOAD: immediate = immediateI;//OP-IMM and LOAD
		LUI, AUIPC: immediate = immediateU;//LUI and AUPIC
		STORE: immediate = immediateS;//STORE
		default: immediate = 'x;//Opcode is either invalid, does not use an immediate, or is handled within decode (jalr, branches, jal)
	endcase
end

endmodule
module jzjpcc_immediateFormer
(
	input logic [31:2] instruction,
	
	//Output for next pc logic
	output logic [31:0] immediateI,//For JALR (and next stage multiplexer)
	output logic [31:0] immediateB,//For BRANCH
	output logic [31:0] immediateJ,//For JAL
	
	//Output for next stage (multiplexed immediate based on opcode)
	//Will only ever output an I, U, or S immediate
	output logic [31:0] immediate
);
logic signBit;
assign signBit = instruction[31];

//Individual immediate logic
logic [31:0] immediateS;
logic [31:0] immediateU;

assign immediateI = {{21{signBit}}, instruction[30:20]};
assign immediateS = {{21{signBit}}, instruction[30:25], instruction[11:7]};
assign immediateB = {{20{signBit}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0};
assign immediateU = {signBit, instruction[30:12], 12'b0};
assign immediateJ = {{12{signBit}}, instruction[19:12], instruction[20], instruction[30:21]};

//Next stage multiplexer
//Note: synthesis will optimize things a ton

logic [4:0] opcode;
assign opcode = instruction[6:2];

always_comb
begin
	unique case (opcode)
		5'b00100, 5'b00000: immediate = immediateI;//OP-IMM and LOAD
		5'b01101, 5'b00101: immediate = immediateU;//LUI and AUPIC
		5'b01000: immediate = immediateS;//STORE
		default: immediate = 'x;//Opcode is either invalid, does not use an immediate, or is handled within decode (jalr, branches, jal)
	endcase
end

endmodule
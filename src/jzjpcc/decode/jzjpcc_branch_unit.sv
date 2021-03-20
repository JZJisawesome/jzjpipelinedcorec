 
module jzjpcc_branch_unit
#(
	parameter int PC_MAX_B
)
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
typedef enum logic[4:0] {BRANCH = 5'b11000, JALR = 5'b11001, JAL = 5'b11011} opcode_t;

opcode_t opcode;
logic [2:0] funct3;
assign opcode = opcode_t'(instruction_decode[6:2]);
assign funct3 = instruction_decode[14:12];

//Branch logic
always_comb
begin
	unique case (opcode)
		BRANCH:
		begin
			unique case (funct3)
				3'b000: pcCTWriteEnable = realRS1 == realRS2;//beq
				3'b001: pcCTWriteEnable = realRS1 != realRS2;//bne
				3'b100: pcCTWriteEnable = $signed(realRS1) < $signed(realRS2);//blt
				3'b101: pcCTWriteEnable = $signed(realRS1) >= $signed(realRS2);//bge
				3'b110: pcCTWriteEnable = realRS1 < realRS2;//bltu
				3'b111: pcCTWriteEnable = realRS1 >= realRS2;//bgeu
			endcase
		end
		JALR: pcCTWriteEnable = 1'b1;
		JAL: pcCTWriteEnable = 1'b1;
		default: pcCTWriteEnable = 1'b0;
	endcase
end

//New pc address logic
localparam PC_BITS = PC_MAX_B - 1;

always_comb
begin
	unique case (opcode)
		BRANCH: controlTransferNewPC = currentPC_decode + PC_BITS'(immediateB >> 2);
		JALR: controlTransferNewPC = PC_BITS'((realRS1 + immediateI) >> 2);
		JAL: controlTransferNewPC = currentPC_decode + PC_BITS'(immediateJ >> 2);
		default: controlTransferNewPC = 'x;
	endcase
end

endmodule
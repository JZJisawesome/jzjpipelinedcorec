module jzjpcc_alumux
#(
	parameter int PC_MAX_B
)
(
	//Selection lines
	input logic [1:0] aluMuxMode,//2'b00 for rs1 and rs2, 2'b01 for rs1 and immediate, 2'b10 for pc and constant 4, 2'b11 for pc and immediate
	
	//Inputs
	//For operand a
	input logic [31:0] rs1,
	input logic [PC_MAX_B:2] currentPC,
	//For operand b
	input logic [31:0] rs2,
	input logic [31:0] immediate,
	
	//Inputs from hazard unit
	input logic [31:0] bypassValueRS1_execute,
	input logic [31:0] bypassValueRS2_execute,
	input logic bypassRS1_execute,
	input logic bypassRS2_execute,
	
	//Outputs
	output logic [31:0] aluOperandA,//RS1 or the PC
	output logic [31:0] aluOperandB//RS2, immediate value, or the constant 4
);
logic [31:0] realRS1, realRS2;
assign realRS1 = bypassRS1_execute ? bypassValueRS1_execute : rs1;
assign realRS2 = bypassRS2_execute ? bypassValueRS2_execute : rs2;

//Logic
always_comb//TODO what about LUI?
begin
	unique case (aluMuxMode)
		2'b00://For register-register operations
		begin
			aluOperandA = realRS1;
			aluOperandB = realRS2;
		end
		2'b01://For register-immediate operations
		begin
			aluOperandA = realRS1;
			aluOperandB = immediate;
		end
		2'b10://For jal and jalr
		begin
			aluOperandA = 32'(currentPC);
			aluOperandB = 4;
		end
		2'b11://For auipc
		begin
			aluOperandA = currentPC;
			aluOperandB = immediate;
		end
	endcase
end

endmodule
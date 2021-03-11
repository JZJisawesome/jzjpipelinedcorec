module jzjpcc_alumux
#(
	parameter int PC_MAX_B
)
(
	//Selection lines
	input logic [1:0] aluMuxMode_execute,//2'b00 for rs1 and rs2, 2'b01 for rs1 and immediate, 2'b10 for pc and constant 4, 2'b11 for pc and immediate
	
	//Inputs
	//For operand a
	input logic [31:0] rs1_execute,
	input logic [PC_MAX_B:2] currentPC_execute,
	//For operand b
	input logic [31:0] rs2_execute,
	input logic [31:0] immediate_execute,
	
	//Outputs
	output logic [31:0] aluOperandA,//RS1 or the PC
	output logic [31:0] aluOperandB//RS2, immediate value, or the constant 4
);

//Logic
always_comb
begin
	unique case (aluMuxMode_execute)
		2'b00:
		begin
			aluOperandA = rs1_execute;
			aluOperandB = rs2_execute;
		end
		2'b01:
		begin
			aluOperandA = rs1_execute;
			aluOperandB = immediate_execute;
		end
		2'b10:
		begin
			aluOperandA = currentPC_execute;
			aluOperandB = 4;
		end
		2'b11:
		begin
			aluOperandA = currentPC_execute;
			aluOperandB = immediate_execute;
		end
	endcase
end

endmodule
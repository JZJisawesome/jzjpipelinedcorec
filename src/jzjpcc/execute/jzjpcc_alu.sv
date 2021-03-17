module jzjpcc_alu
(
	//Control signals
	jzjpcc_execute_if.execute executeIF,//TODO just pass needed ports to submodules like this
	/*
	input logic [2:0] aluOperation_execute,//Same encoding as funct 3
	input logic aluMod_execute,//If 1, will sub instead of add and will sra instead of srl
	*/
	
	//I/O
	input logic [31:0] aluOperandA,//RS1 or the PC
	input logic [31:0] aluOperandB,//RS2, immediate value, or the constant 4
	output logic [31:0] aluResult_execute
);
logic [31:0] a;
logic [31:0] b;
assign a = aluOperandA;
assign b = aluOperandB;

always_comb
begin
	unique case (executeIF.aluOperation)
		3'b000: aluResult_execute = a + (executeIF.aluMod ? (~b) : b) + 32'(executeIF.aluMod);//addi/add/sub
		3'b001: aluResult_execute = a << b[4:0];//slli/sll
		3'b010: aluResult_execute = (signed'(a) < signed'(b)) ? 32'd1 : 32'd0;//slti/slt
		3'b011: aluResult_execute = (a < b) ? 32'd1 : 32'd0;//sltiu/sltu
		3'b100: aluResult_execute = a ^ b;//xori/xor
		3'b101: aluResult_execute = executeIF.aluMod ? unsigned'(signed'(a) >>> b[4:0]) : (a >> b[4:0]);//srli/srai/srl/sra
		3'b110: aluResult_execute = a | b;
		3'b111: aluResult_execute = a & b;
	endcase
end

endmodule
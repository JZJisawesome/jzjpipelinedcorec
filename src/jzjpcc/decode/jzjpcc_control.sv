module jzjpcc_control
(
	input logic [31:2] instruction_decode,
	
	//Control outputs for stages after decode
	output logic [2:0] aluOperation_decode,
	output logic aluMod_decode,
	output logic rdWriteEnable_decode
);

logic [2:0] funct3;
logic [6:0] funct7;
assign funct3 = instruction_decode[14:12];
assign funct7 = instruction_decode[31:25];

typedef enum logic[4:0]
{
	LOAD = 5'b00000, MISC_MEM = 5'b00011, OP_IMM = 5'b00100, AUIPC = 5'b00101,
	STORE = 5'b01000, OP = 5'b01100, LUI = 5'b01101, BRANCH = 5'b11000,
	JALR = 5'b11001, JAL = 5'b11011, SYSTEM = 5'b11100
} opcode_t;

opcode_t opcode;
assign opcode = opcode_t'(instruction_decode[6:2]);

//Control logic
always_comb
begin
	unique case (opcode)
		/*LOAD:
		begin
		
		end
		MISC_MEM:
		begin
		
		end*/
		OP_IMM:
		begin
			aluOperation_decode = funct3;
			if (funct3 == 3'b101)//srai
				aluMod_decode = funct7[5];
			else
				aluMod_decode = 1'b0;
			
			rdWriteEnable_decode = 1;
			//TODO finish
		end
		AUIPC:
		begin
			aluOperation_decode = 3'b000;//Adding
			aluMod_decode = 0;
			rdWriteEnable_decode = 1;
			//TODO finish
		end
		STORE:
		begin
			aluOperation_decode = 3'b000;//Adding
			aluMod_decode = 0;
			rdWriteEnable_decode = 1;
			//TODO finish
		end
		OP:
		begin
			aluOperation_decode = funct3;
			aluMod_decode = funct7[5];
			rdWriteEnable_decode = 1;
			//TODO finish
		end
		LUI:
		begin
			aluOperation_decode = 3'b000;//Adding
			aluMod_decode = 0;
			rdWriteEnable_decode = 1;
			//TODO finish
		end
		BRANCH:
		begin
			aluOperation_decode = 3'bxxx;
			aluMod_decode = 1'bx;
			rdWriteEnable_decode = 0;
			//TODO finish
		end
		/*
		JALR:
		begin
		
		end
		JAL:
		begin
		
		end
		SYSTEM:
		begin
		
		end
		default:
		begin
		
		end*/
	endcase
end


endmodule 

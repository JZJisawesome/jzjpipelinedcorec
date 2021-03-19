module jzjpcc_mem_processor
(
	//Inputs
	input logic [2:0] funct3,
	input logic [31:0] rs2,
	//Used for dedicated adder
	input logic [31:0] rs1,
	input logic [31:0] immediateI,
	
	//Outputs
	output logic [31:0] memDataToWrite_execute,
	output logic [31:2] memAddress_execute,
	output logic [3:0] memByteMask_execute
);
logic [31:0] bytewiseAddress;
assign bytewiseAddress = rs1 + immediateI;
assign memAddress_execute = bytewiseAddress[31:2];

logic [1:0] byteOffset;
assign byteOffset = bytewiseAddress[1:0];

//Byte Mask Logic
always_comb
begin
	unique case (funct3[1:0])//Bit 2 is used to indicate if signed/unsigned; does not matter here
		2'b00://Byte access
		begin
			unique case (byteOffset)
				2'b00: memByteMask_execute = 4'b0001;//Byte 0
				2'b01: memByteMask_execute = 4'b0010;//Byte 1
				2'b10: memByteMask_execute = 4'b0100;//Byte 2
				2'b11: memByteMask_execute = 4'b1000;//Byte 3
			endcase
		end
		2'b01://Halfword access
		begin
			memByteMask_execute = byteOffset[1] ? 4'b1100 : 4'b0011;//Look at halfword offset
		end
		2'b10:
		begin
			memByteMask_execute = 4'b1111;//Write/load everything
		end
		default:
		begin
			memByteMask_execute = 4'bxxxx;
		end
	endcase
end

//Data to write logic
always_comb
begin
	unique case (funct3[1:0])//Bit 2 is used to indicate if signed/unsigned; does not matter here
		2'b00://Byte access
		begin
			unique case (byteOffset)
				2'b00: memDataToWrite_execute = {24'h0, rs2[7:0]};//Byte 0
				2'b01: memDataToWrite_execute = {16'h0, rs2[7:0], 8'h0};//Byte 1
				2'b10: memDataToWrite_execute = {8'h0, rs2[7:0], 16'h0};//Byte 2
				2'b11: memDataToWrite_execute = {rs2[7:0], 24'h0};//Byte 3
			endcase
		end
		2'b01://Halfword access
		begin
			memDataToWrite_execute = byteOffset[1] ? {rs2[15:0], 16'h0} : {16'h0, rs2[15:0]};//Look at halfword offset
		end
		2'b10:
		begin
			memDataToWrite_execute = rs2;//Don't do anything to rs2
		end
		default:
		begin
			memDataToWrite_execute = 'x;
		end
	endcase
end

endmodule
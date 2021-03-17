module jzjpcc_mem_processor
(
	//Inputs
	//TODO needs funct3
	input logic [31:0] aluResult_execute,
	input logic [31:0] rs2_execute,
	
	//Outputs
	output logic [31:0] memDataToWrite_execute,
	output logic [3:0] memByteMask_execute
);

logic [1:0] byteOffset;
assign byteOffset = aluResult_execute[1:0];

//Byte Mask Logic
always_comb
begin
	//if ()//TODO funct 3
end


//Data to write logic
always_comb
begin

end
//TODO

endmodule
module jzjpcc_execute
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from decode
	jzjpcc_execute_if.execute executeIF,
	
	//Outputs to memory stage
	jzjpcc_memory_if.execute memoryIF
);
//Latched by sram register, not here
assign memoryIF.memoryWriteEnable = executeIF.memoryWriteEnable;

logic [31:0] aluOperandA;
logic [31:0] aluOperandB;
logic [31:0] aluResult_execute;

//Logic stuffs
assign memAddress_execute = aluResult_execute[31:2];//Offset handled by byte mask logic

always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		memoryIF.rdWriteEnable <= 1'b0;
	end
	else if (clock)
	begin
		memoryIF.aluResult <= aluResult_execute;
		
		//Passthrough things for later stages
		memoryIF.rdAddr <= executeIF.rdAddr;
		memoryIF.rdSource <= executeIF.rdSource;
		memoryIF.rdWriteEnable <= executeIF.rdWriteEnable;
	end
end

/* Modules */
jzjpcc_alu alu (.*, .aluOperation(executeIF.aluOperation), .aluMod(executeIF.aluMod));

jzjpcc_alumux #(.PC_MAX_B(PC_MAX_B)) aluMultiplexer 	(.*, .aluMuxMode(executeIF.aluMuxMode), .rs1(executeIF.rs1), .currentPC(executeIF.currentPC),
																		.rs2(executeIF.rs2), .immediate(executeIF.immediate));

jzjpcc_mem_processor memOperandProcessor (.*, .funct3(executeIF.funct3), .rs2(executeIF.rs2), .memDataToWrite_execute(memoryIF.memDataToWrite),
														.memByteMask_execute(memoryIF.memByteMask));

endmodule
//Interface for input to execute stage 
interface jzjpcc_execute_if
#(
	parameter int PC_MAX_B
)
();

//Data
logic [31:0] immediate;
logic [31:0] rs1;
logic [31:0] rs2;
logic [PC_MAX_B:2] currentPC;
logic [4:0] rdAddr;//Not used until writeback (other than for hazards)

//Control lines for execute stage
logic [2:0] aluOperation;
logic aluMod;
logic [1:0] aluMuxMode;
logic [2:0] funct3;

//Control lines for other stages
logic memoryWriteEnable;//TODO use
logic rdSource;//0 = aluResult_writeback, 1 = memoryOut_writeback
logic rdWriteEnable;

modport decode
(
	output immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, funct3, memoryWriteEnable, rdSource, rdWriteEnable//Does not play nice with RTL viewer
);

modport execute
(
	input immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, funct3, memoryWriteEnable, rdSource, rdWriteEnable//Does not play nice with RTL viewer
);

endinterface

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
logic [31:2] memAddress_execute;
assign memoryIF.memoryWriteEnable = executeIF.memoryWriteEnable;
assign memoryIF.memAddress = memAddress_execute;

logic [31:0] aluOperandA;
logic [31:0] aluOperandB;
logic [31:0] aluResult_execute;

//Logic stuffs
//assign memAddress_execute = aluResult_execute[31:2];//Offset handled by byte mask logic

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
		memoryIF.funct3 <= executeIF.funct3;
	end
end

/* Modules */
jzjpcc_alu alu (.*, .aluOperation(executeIF.aluOperation), .aluMod(executeIF.aluMod));

jzjpcc_alumux #(.PC_MAX_B(PC_MAX_B)) aluMultiplexer 	(.*, .aluMuxMode(executeIF.aluMuxMode), .rs1(executeIF.rs1), .currentPC(executeIF.currentPC),
																		.rs2(executeIF.rs2), .immediate(executeIF.immediate));

jzjpcc_mem_processor memOperandProcessor (.*, .funct3(executeIF.funct3), .rs2(executeIF.rs2), .rs1(executeIF.rs1), .immediateI(executeIF.immediate),
														.memDataToWrite_execute(memoryIF.memDataToWrite), .memByteMask_execute(memoryIF.memByteMask));

endmodule
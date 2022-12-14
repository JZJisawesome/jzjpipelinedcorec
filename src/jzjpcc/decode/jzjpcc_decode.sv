module jzjpcc_decode
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Inputs from fetch stage
	input logic [31:2] instruction_decode,
	input logic [PC_MAX_B:2] currentPC_decode,
	
	//Outputs to execute stage
	jzjpcc_execute_if.decode executeIF,
	
	//I/O from/to register file
	output logic [4:0] rs1Addr_decode,//Also used by hazard unit
	output logic [4:0] rs2Addr_decode,//Also used by hazard unit
	input logic [31:0] rs1_decode,
	input logic [31:0] rs2_decode,
	
	//Control of fetch stage for deciding next pc
	output logic pcCTWriteEnable,//Whether controlTransferNewPC or the next sequential pc must be latched
	output logic [PC_MAX_B:2] controlTransferNewPC,
	
	//Hazard control
	input logic flush_execute,
	
	//Inputs from hazard unit
	input logic [31:0] bypassValueRS1_decode,
	input logic [31:0] bypassValueRS2_decode,
	input logic bypassRS1_decode,
	input logic bypassRS2_decode
);
//rs1 and rs2 bypass logic
logic [31:0] realRS1, realRS2;
assign realRS1 = bypassRS1_decode ? bypassValueRS1_decode : rs1_decode;
assign realRS2 = bypassRS2_decode ? bypassValueRS2_decode : rs2_decode;

//Immediates
logic [31:0] immediate;
logic [31:0] immediateI;
logic [31:0] immediateB;
logic [31:0] immediateJ;

//RS1 and RS2 addressing
assign rs1Addr_decode = instruction_decode[19:15];
assign rs2Addr_decode = instruction_decode[24:20];

//Control lines
logic [2:0] aluOperation_decode;
logic aluMod_decode;
logic [1:0] aluMuxMode_decode;//TODO expand to allow for lui support
logic memoryWriteEnable_decode;
logic rdSource_decode;
logic rdWriteEnable_decode;

//Execute stage output logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		executeIF.rdWriteEnable <= 1'b0;
		executeIF.memoryWriteEnable <= 1'b0;
	end
	else if (clock)
	begin
		if (flush_execute)
		begin
			executeIF.rdWriteEnable <= 1'b0;
			executeIF.memoryWriteEnable <= 1'b0;
		end
		else
		begin
			//Else pass control
			executeIF.rdWriteEnable <= rdWriteEnable_decode;
			executeIF.memoryWriteEnable <= memoryWriteEnable_decode;
		end
		
		//Things that don't need to be flushed
		executeIF.aluOperation <= aluOperation_decode;
		executeIF.aluMod <= aluMod_decode;
		executeIF.aluMuxMode <= aluMuxMode_decode;
		executeIF.rdSource <= rdSource_decode;

		executeIF.rdAddr <= instruction_decode[11:7];
		executeIF.funct3 <= instruction_decode[14:12];
		
		executeIF.immediate <= immediate;
		executeIF.currentPC <= currentPC_decode;
		executeIF.rs1 <= realRS1;
		executeIF.rs2 <= realRS2;
		
		//Used by hazard unit
		executeIF.rs1Addr <= rs1Addr_decode;
		executeIF.rs2Addr <= rs2Addr_decode;
	end
end

/* Modules */
jzjpcc_immediateFormer immediateFormer (.*);
jzjpcc_control control (.*);
jzjpcc_branch_unit #(.PC_MAX_B(PC_MAX_B)) branchUnit (.*);//TODO improve branch logic: this reducse the fmax by 40 mhz when not commented out

endmodule
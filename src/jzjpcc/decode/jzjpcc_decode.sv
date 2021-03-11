//TODO will tie everything the in the decode stage together
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
	output logic [31:0] immediate_execute,
	output logic [31:0] rs1_execute,
	output logic [31:0] rs2_execute,
	output logic [PC_MAX_B:2] currentPC_execute,
	output logic [4:0] rdAddr_execute,//TODO might need flushing
	//TODO also control logic
	output logic [2:0] aluOperation_execute,
	output logic aluMod_execute,
	output logic rdWriteEnable_execute,
	
	
	//I/O from/to register file
	output logic [4:0] rs1Addr_decode,
	output logic [4:0] rs2Addr_decode,
	input logic [31:0] rs1_decode,
	input logic [31:0] rs2_decode,
	
	//Control of fetch stage for deciding next pc
	input logic pcCTWriteEnable,//Whether controlTransferNewPC or the next sequential pc must be latched
	input logic [PC_MAX_B:2] controlTransferNewPC,
	
	//Hazard control
	input logic flush_execute
);
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
logic rdWriteEnable_decode;

//Execute stage output logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		//TODO reset control to make into a nop
		rdAddr_execute <= 5'b00000;
	end
	else if (clock)
	begin
		//TODO maybe move this to control?
		if (flush_execute)
		begin
			//TODO flush control to make into a nop
			rdAddr_execute <= 5'b00000;//Nop is "addi x0, x0, 0"
		end
		else
		begin
			//Else pass control
			aluOperation_execute <= aluOperation_decode;
			aluMod_execute <= aluMod_decode;
			rdWriteEnable_execute <= rdWriteEnable_decode;
			
			rdAddr_execute <= instruction_decode[11:7];
		end
		
		//Things that don't need to be flushed
		
		immediate_execute <= immediate;
		currentPC_execute <= currentPC_decode;
		rs1_execute <= rs1_decode;//TODO may need bypassing
		rs2_execute <= rs2_decode;//TODO may need bypassing
	end
end

/* Modules */
jzjpcc_immediateFormer immediateFormer (.*);
jzjpcc_control control (.*);

endmodule
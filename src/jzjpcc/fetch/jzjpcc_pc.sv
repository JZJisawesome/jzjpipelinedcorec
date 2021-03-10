module jzjpcc_pc//Program counter
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	input logic stall_fetch,//New pc (either controlTransferNewPC or nextSequentialPC) won't be latched
	input logic pcCTWriteEnable,//If disabled, PC will be incremented by 1 instead (assuming stall is 0)
	input logic [PC_MAX_B:2] controlTransferNewPC,
	
	//Output for rest of fetch stage
	output logic [PC_MAX_B:2] currentPC_fetch,//Lower bits not needed because instructions are always aligned to words
	output logic [PC_MAX_B:2] nextPC//Combinational, allowing PC to be latched by instruction memory address register at same time (due to Cyclone IV SRAM artececture)
);

logic [PC_MAX_B:2] nextSequentialPC;
assign nextSequentialPC = currentPC_fetch + 1;//Starts at bit 2, so this really adds 4

assign nextPC = pcCTWriteEnable ? controlTransferNewPC : nextSequentialPC;

//Writing logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		currentPC_fetch <= 0;//Reset vector is 32'h00000000
	end
	else if (clock)
	begin
		if (!stall_fetch)
		begin
			currentPC_fetch <= nextPC;
		end//Else currentPC will hold its last state
	end
end

endmodule 

module jzjpcc_pc//Program counter
(
	input logic clock,
	input logic reset,
	
	input logic stall,//New pc (either newPC or nextSequentialPC) won't be latched
	input logic pcWriteEnable,//If disabled, PC will be incremented by 1 instead (assuming stall is 0)
	input logic [31:2] newPC,
	
	//Output for rest of fetch stage
	output logic [31:2] currentPC//Lower bits not needed because instructions are always aligned to words
);

logic [31:2] nextSequentialPC;
assign nextSequentialPC = currentPC + 30'd1;//1 is really bit 2, so this adds 4

//Writing logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		currentPC <= 30'd0;
	end
	else if (clock)
	begin
		if (!stall)
		begin
			currentPC <= pcWriteEnable ? newPC : nextSequentialPC;
		end//Else currentPC will hold its last state
	end
end

endmodule 

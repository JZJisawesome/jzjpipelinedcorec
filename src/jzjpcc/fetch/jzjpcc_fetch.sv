//The PC register and the address register withing the Cyclone IV SRAM hardware block are part of the fetch stage
//The instruction_decode and currentPC_decode are part of the decode stage (register leading into the decode stage)

module jzjpcc_fetch
#(
	parameter int PC_MAX_B
)
(
	input logic clock,
	input logic reset,
	
	//Outputs to decode stage
	output logic [31:0] instruction_decode,//Big endian
	output logic [PC_MAX_B:2] currentPC_decode,
	
	//Inputs (from decode for jal/jalr/branches)
	input logic pcCTWriteEnable,//Whether controlTransferNewPC or the next sequential pc must be latched
	input logic [PC_MAX_B:2] controlTransferNewPC,
	
	//I/O from/to memory module
	input logic [31:0] instruction_fetch,//Big endian
	output logic [PC_MAX_B:2] instructionAddressToLatch,
	
	//Hazard control
	input logic stall_fetch,//New pc won't be latched
	input logic flush_decode//Flushes instruction_decode to be a nop on the next posedge instead of fetching a new instruction
);
//From program counter
logic [PC_MAX_B:2] currentPC_fetch;
logic [PC_MAX_B:2] nextPC;

//For instruction memory
assign instructionAddressToLatch = nextPC;

//Sequential logic
always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		instruction_decode <= 32'h00000013;//Reset to nop
		//Value of currentPC_decode does not matter because instruction_decode is nop
	end
	else if (clock)
	begin
		if (flush_decode)
		begin
			instruction_decode <= 32'h00000013;//Flush to nop
		end
		else
		begin
			instruction_decode <= instruction_fetch;//Bring instruction combinationally fetched from SRAM to decode stage
		end
		
		//Bring currentPC value along to decode stage
		//If flush_decode is 1, the value doesn't matter because instruction_decode is nop
		currentPC_decode <= currentPC_fetch;
	end
end

/* Modules */

jzjpcc_pc #(.PC_MAX_B(PC_MAX_B)) programCounter (.*);

endmodule
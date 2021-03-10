//Inferred SRAM module for a Cyclone IV FPGA, 32 bits wide
//Thank you Recommended HDL Coding Styles doc
module jzjpcc_inferred_sram
#(
	parameter INITIAL_MEM_CONTENTS = "/tmp/test.hex",
	parameter int RAM_A_WIDTH = 12
)
(
	//Addresses and data to be written are latched  
	//on positive edges, but reads are combinational
	input logic clock,
	
	//Port A
	input logic [A_MAX:0] addressA,
	input logic writeEnableA,
	input logic [31:0] writeA,
	output logic [31:0] readA,
	
	//Port B
	input logic [A_MAX:0] addressB,
	input logic writeEnableB,
	input logic [31:0] writeB,
	output logic [31:0] readB
);
//Processing of RAM_A_WIDTH parameter
localparam int A_MAX = RAM_A_WIDTH - 1;
localparam int NUM_ADDR = 2 ** RAM_A_WIDTH;
localparam int NUM_ADDR_MAX = NUM_ADDR - 1;

//Inferred SRAM
logic [31:0] inferredSRAM [63:0];//[NUM_ADDR_MAX:0];

//Address latching and read/write logic for ports A and B

//Note: It is misleading, but when mapped to SRAM blocks
//by Quartus, the address register and data to write are latched on
//the positive edges. The readA and readB statements actually happen
//combinationally.
//Check out the chip planner for the sram block.

//Port A
always_ff @(posedge clock)
begin
	if (writeEnableA)
		inferredSRAM[addressA] <= writeA;
		
	readA <= inferredSRAM[addressA];
end

//Port B
always_ff @(posedge clock)
begin
	if (writeEnableB)
		inferredSRAM[addressB] <= writeB;
	
	readB <= inferredSRAM[addressB];
end

//Initialize SRAM
initial $readmemh(INITIAL_MEM_CONTENTS, inferredSRAM);

endmodule
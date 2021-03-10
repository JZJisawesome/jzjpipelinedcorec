//Inferred SRAM module for a Cyclone IV FPGA, 32 bits wide
//Thank you Recommended HDL Coding Styles doc

//Note: If byteWriteMask[0] is set, then the low byte of the word
//(which is the most significant byte in little-endian) will be written to
//Here what bits correspond to which bytes:
//byteWriteMask[3:0] = 4'babcd;
//writeA[31:0]: 32'bddddddddccccccccbbbbbbbbaaaaaaaa
//a is the most significant little-endian byte, but the least significant
//physically
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
	//Common
	input logic [A_MAX:0] addressA,
	//Reading
	output logic [31:0] readA,
	//Writing
	input logic writeEnableA,
	input logic [3:0] byteWriteMaskA,
	input logic [31:0] writeA,
	
	//Port B
	//Common
	input logic [A_MAX:0] addressB,
	//Reading
	output logic [31:0] readB,
	//Writing
	input logic writeEnableB,
	input logic [3:0] byteWriteMaskB,
	input logic [31:0] writeB
);
//Processing of RAM_A_WIDTH parameter
localparam int A_MAX = RAM_A_WIDTH - 1;
localparam int NUM_ADDR = 2 ** RAM_A_WIDTH;
localparam int NUM_ADDR_MAX = NUM_ADDR - 1;

//Inferred SRAM
logic [3:0][7:0] inferredSRAM [NUM_ADDR_MAX:0];

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
	begin
		//Only write bytes that are not masked out
		if (byteWriteMaskA[0]) inferredSRAM[addressA][0] <= writeA[7:0];
		if (byteWriteMaskA[1]) inferredSRAM[addressA][1] <= writeA[15:8];
		if (byteWriteMaskA[2]) inferredSRAM[addressA][2] <= writeA[23:16];
		if (byteWriteMaskA[3]) inferredSRAM[addressA][3] <= writeA[31:24];
	end
		
	readA <= inferredSRAM[addressA];
end

//Port B
always_ff @(posedge clock)
begin
	if (writeEnableB)
	begin
		//Only write bytes that are not masked out
		if (byteWriteMaskB[0]) inferredSRAM[addressB][0] <= writeB[7:0];
		if (byteWriteMaskB[1]) inferredSRAM[addressB][1] <= writeB[15:8];
		if (byteWriteMaskB[2]) inferredSRAM[addressB][2] <= writeB[23:16];
		if (byteWriteMaskB[3]) inferredSRAM[addressB][3] <= writeB[31:24];
	end
	
	readB <= inferredSRAM[addressB];
end

//Initialize SRAM
initial $readmemh(INITIAL_MEM_CONTENTS, inferredSRAM);

endmodule
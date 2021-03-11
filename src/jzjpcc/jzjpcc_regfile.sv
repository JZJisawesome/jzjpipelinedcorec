module jzjpcc_regfile
(
	//Registers are written on the negative edge, and read combinationally
	input logic clock,
	input logic reset,
	
	//Read ports (combinational)
	input logic [4:0] rs1Addr_decode,
	input logic [4:0] rs2Addr_decode,
	output logic [31:0] rs1_decode,
	output logic [31:0] rs2_decode,
	
	//Write port (negedge)
	input logic [4:0] rdAddr_writebackEnd,
	input logic [31:0] rd_writebackEnd,//Data to write
	input logic rdWriteEnable_writebackEnd,
	
	//For testing
	output logic [31:0] register31Value
);
logic [31:0] registerFile [31:1];//31 actual registers

assign register31Value = registerFile[31];//testing

//Read logic (x0 is always 0)
assign rs1_decode = (rs1Addr_decode == 0) ? 0 : registerFile[rs1Addr_decode];
assign rs2_decode = (rs2Addr_decode == 0) ? 0 : registerFile[rs2Addr_decode];

//Write logic
always_ff @(negedge clock, posedge reset)
begin
	if (reset)
	begin
		//Reset registers
		for (int i = 1; i < 32; ++i)
		begin
			registerFile[i] = 0;
		end
	end
	else if (!clock)
	begin
		if (rdWriteEnable_writebackEnd)
			registerFile[rdAddr_writebackEnd] <= rd_writebackEnd;//Write data to register
	end
end

endmodule
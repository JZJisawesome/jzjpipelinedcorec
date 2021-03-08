module jzjpcc_regfile
(
	//Registers are written on the negative edge, and read combinationally
	input logic clock,
	input logic reset,
	
	//Read ports (combinational)
	input logic [4:0] rs1Addr,
	input logic [4:0] rs2Addr,
	output logic [31:0] rs1,
	output logic [31:0] rs2,
	
	//Write port (negedge)
	input logic [4:0] rdAddr,
	input logic [31:0] rd,//Data to write
	input logic rdWriteEn,
	
	//For testing
	output logic [31:0] register31Value
);
logic [31:0] registerFile [31:1];//31 actual registers

assign register31Value = registerFile[31];//testing

//Read logic (x0 is always 0)
assign rs1 = (rs1Addr == 0) ? 0 : registerFile[rs1Addr];
assign rs2 = (rs2Addr == 0) ? 0 : registerFile[rs2Addr];

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
		if (rdWriteEn)
			registerFile[rdAddr] <= rd;//Write data to register
	end
end

endmodule
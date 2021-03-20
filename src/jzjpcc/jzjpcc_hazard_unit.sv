module jzjpcc_hazard_unit
(
	//Data hazard detection
	input logic [4:0] rs1Addr_decode,
	input logic [4:0] rs1Addr_execute,
	
	input logic [4:0] rs2Addr_decode,
	input logic [4:0] rs2Addr_execute,
	/*
	input logic [4:0] rdAddr_execute,
	input logic [4:0] rdAddr_memory,
	input logic [4:0] rdAddr_writeback,
	*/
	
	//Control hazard detection
	//TODO
	
	//Stall/flush lines
	output logic stall_fetch,
	output logic flush_decode,
	output logic flush_execute
	
	//Bypass values in
	//TODO
	
	//Bypass values out
	//TODO
);

endmodule
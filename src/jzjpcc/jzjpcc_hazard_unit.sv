module jzjpcc_hazard_unit
(
	//Data hazard detection
	input logic [4:0] rs1Addr_decode,
	input logic [4:0] rs1Addr_execute,
	
	input logic [4:0] rs2Addr_decode,
	input logic [4:0] rs2Addr_execute,
	
	//input logic [4:0] rdAddr_execute,//Not sure if this will be needed
	input logic [4:0] rdAddr_memory,
	input logic [4:0] rdAddr_writeback,
	
	input logic rdWriteEnable_memory,
	input logic rdWriteEnable_writeback,
	
	//Control hazard detection
	//TODO
	
	//Stall/flush lines
	output logic stall_fetch,
	output logic flush_decode,
	output logic flush_execute,
	
	//Bypass values in
	input logic [31:0] aluResult_memory,
	input logic [31:0] rd_writebackEnd,
	
	//Bypass values out
	output logic [31:0] bypassValueRS1_decode,
	output logic [31:0] bypassValueRS1_execute,
	output logic [31:0] bypassValueRS2_decode,
	output logic [31:0] bypassValueRS2_execute,
	
	//Bypass control lines
	output logic bypassRS1_decode,
	output logic bypassRS1_execute,
	output logic bypassRS2_decode,
	output logic bypassRS2_execute
);
//Bypass logic for execute stage
always_comb
begin
	//rs1
	if ((rs1Addr_execute != 0) && (rs1Addr_execute == rdAddr_memory) && rdWriteEnable_memory)
	begin
		bypassValueRS1_execute = aluResult_memory;
		bypassRS1_execute = 1'b1;
	end
	else if ((rs1Addr_execute != 0) && (rs1Addr_execute == rdAddr_writeback) && rdWriteEnable_writeback)
	begin
		bypassValueRS1_execute = rd_writebackEnd;
		bypassRS1_execute = 1'b1;
	end
	else
	begin
		bypassValueRS1_execute = 'x;
		bypassRS1_execute = 1'b0;
	end
	
	//rs2
	if ((rs2Addr_execute != 0) && (rs2Addr_execute == rdAddr_memory) && rdWriteEnable_memory)
	begin
		bypassValueRS2_execute = aluResult_memory;
		bypassRS2_execute = 1'b1;
	end
	else if ((rs2Addr_execute != 0) && (rs2Addr_execute == rdAddr_writeback) && rdWriteEnable_writeback)
	begin
		bypassValueRS2_execute = rd_writebackEnd;
		bypassRS2_execute = 1'b1;
	end
	else
	begin
		bypassValueRS2_execute = 'x;
		bypassRS2_execute = 1'b0;
	end
end

//Bypass logic for decode stage

endmodule
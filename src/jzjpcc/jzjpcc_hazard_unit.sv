module jzjpcc_hazard_unit
(
	//Data hazard detection
	input logic [4:0] rs1Addr_decode,
	input logic [4:0] rs1Addr_execute,
	
	input logic [4:0] rs2Addr_decode,
	input logic [4:0] rs2Addr_execute,
	
	input logic [4:0] rdAddr_execute,
	input logic [4:0] rdAddr_memory,
	input logic [4:0] rdAddr_writeback,
	
	input logic rdWriteEnable_execute,
	input logic rdWriteEnable_memory,
	input logic rdWriteEnable_writeback,
	
	input logic rdSource_execute,
	
	//Control hazard detection
	//TODO
	
	//Stall/flush lines
	output logic stall_fetch,
	output logic stall_decode,
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
logic memoryStall;//Due to a memory access
logic controlStall;//Due to a branch or unconditional jump instruction

assign stall_fetch = memoryStall | controlStall;
assign stall_decode = memoryStall | controlStall;
assign flush_execute = memoryStall | controlStall;

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

//Stall logic for memory accesses
//If there is a memory read pending in the execute stage and we won't be able to bypass it until writeback
assign memoryStall = (((rs1Addr_decode != 0) && (rs1Addr_decode == rdAddr_execute)) ||
							((rs1Addr_decode != 0) && (rs2Addr_decode == rdAddr_execute)))
							&& rdSource_execute && rdWriteEnable_execute;

//Stall logic for control instructions
//assign controlStall = 

endmodule
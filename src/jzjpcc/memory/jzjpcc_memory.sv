//TODO I dont think the pc is needed here
module jzjpcc_memory
(
	input logic clock,
	input logic reset,
	
	//Inputs from execute
	jzjpcc_memory_if.memory memoryIF,
	
	//Outputs to writeback
	jzjpcc_writeback_if.memory writebackIF,
	/*
	output logic [4:0] rdAddr_writeback,
	output logic rdWriteEnable_writeback,
	output logic rdSource_writeback,//0 = aluResult_writeback, 1 = memoryOut_writeback
	output logic [31:0] memoryOut_writeback,
	output logic [31:0] aluResult_writeback,
	*/
	//todo funct 3 and offset to select halfword/byte to store to register*******************************************************************************
	
	//I/O from/to memory
	jzjpcc_memory_backend_data_if.stage memDataBackendIF
);

assign memDataBackendIF.memWriteEnable = memoryIF.memoryWriteEnable;
assign memDataBackendIF.memAddress = memoryIF.memAddress;
assign memDataBackendIF.memDataToWrite = memoryIF.memDataToWrite;
assign memDataBackendIF.memByteMask = memoryIF.memByteMask;

//Writeback output logic
logic [3:0] memByteMaskSync;//Because memoryIF.memByteMask by itself is in the execute stage

always_ff @(posedge clock, posedge reset)
begin
	if (reset)
	begin
		writebackIF.rdWriteEnable <= 1'b0;
	end
	else if (clock)
	begin
		writebackIF.rdAddr <= memoryIF.rdAddr;
		writebackIF.rdWriteEnable <= memoryIF.rdWriteEnable;
		writebackIF.rdSource <= memoryIF.rdSource;
		writebackIF.memoryOut <= memDataBackendIF.memDataRead;
		writebackIF.aluResult <= memoryIF.aluResult;
		//writebackIF.funct3 <= ;//TODO
		
		memByteMaskSync <= memoryIF.memByteMask;
		writebackIF.memByteMask <= memByteMaskSync;
	end
end

endmodule
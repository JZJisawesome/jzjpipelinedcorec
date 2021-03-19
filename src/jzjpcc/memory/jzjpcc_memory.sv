//TODO I dont think the pc is needed here
module jzjpcc_memory
(
	input logic clock,
	input logic reset,
	
	//Inputs from execute
	jzjpcc_memory_if.memory memoryIF,
	
	//Outputs to writeback
	jzjpcc_writeback_if.memory writebackIF,
	
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
		writebackIF.funct3 <= memoryIF.funct3;
		
		memByteMaskSync <= memoryIF.memByteMask;
		writebackIF.memByteMask <= memByteMaskSync;
	end
end

endmodule
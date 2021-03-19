interface jzjpcc_memory_if
();

//Data (combinational)
logic [31:2] memAddress;//For latching by memory address register
logic [31:0] memDataToWrite;

//Data (sequential)
logic [31:0] aluResult;//For writing to reg file
logic [4:0] rdAddr;

//Control logic for memory stage (combinational)
logic [3:0] memByteMask;
logic memoryWriteEnable;

//Control lines for other stages (sequential)
logic rdSource;//0 = aluResult_writeback, 1 = memoryOut_writeback
logic rdWriteEnable;//Sequential
logic [2:0] funct3;

modport execute
(
	output memAddress, memDataToWrite, memByteMask, aluResult, rdAddr, memoryWriteEnable, rdSource, rdWriteEnable, funct3//Does not play nice with RTL viewer
);

modport memory
(
	input memAddress, memDataToWrite, memByteMask, aluResult, rdAddr, memoryWriteEnable, rdSource, rdWriteEnable, funct3//Does not play nice with RTL viewer
);

endinterface
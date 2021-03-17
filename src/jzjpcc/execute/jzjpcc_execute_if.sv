//Interface for input to execute stage 
interface jzjpcc_execute_if
#(
	parameter int PC_MAX_B
)
();

//Data
logic [31:0] immediate;
logic [31:0] rs1;
logic [31:0] rs2;
logic [PC_MAX_B:2] currentPC;
logic [4:0] rdAddr;//Not used until writeback (other than for hazards)

//Control lines for execute stage
logic [2:0] aluOperation;
logic aluMod;
logic [1:0] aluMuxMode;

//Control lines for other stages
logic memoryWriteEnable;//TODO use
logic rdSource;//0 = aluResult_writeback, 1 = memoryOut_writeback
logic rdWriteEnable;

modport decode
(
	output immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, memoryWriteEnable, rdSource, rdWriteEnable//Does not play nice with RTL viewer
);

modport execute
(
	input immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, memoryWriteEnable, rdSource, rdWriteEnable//Does not play nice with RTL viewer
);

endinterface
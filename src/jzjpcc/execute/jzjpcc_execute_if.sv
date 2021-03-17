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

//Control logic for execute stage
logic [2:0] aluOperation;
logic aluMod;
logic [1:0] aluMuxMode;

//Control logic for other stages
//TODO
//logic memoryWriteEnable;
logic rdWriteEnable;

modport decode
(
	inout immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, rdWriteEnable
	//output immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, rdWriteEnable//Does not play nice with RTL viewer
);

modport execute
(
	inout immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, rdWriteEnable
	//input immediate, rs1, rs2, currentPC, rdAddr, aluOperation, aluMod, aluMuxMode, rdWriteEnable//Does not play nice with RTL viewer
);

endinterface
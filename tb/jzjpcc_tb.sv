//`timescale 1ns/1ps//if this was here, verilator would require all other modules have it and I don't know what values make sense/it's a pain to put that in each file
module jzjpcc_tb
(
    input logic clock//toggled by verilator
);

//Toggling the clock internally workes with Iverilog, but not with verilator
//reg clock = 1'b0;

logic [31:0] register31Value;
logic [31:0] mmioInputs [8];
logic [31:0] mmioOutputs [8];

assign mmioInputs = mmioOutputs;//Feedback for mmio

jzjpcc #(.INITIAL_MEM_CONTENTS("/tmp/test.hex")) coreTest (.*, .reset(1'b0));
//JZJCoreF #(.INITIAL_MEM_CONTENTS("/home/jzj/Data/workingData/V2.0.0/computerStuff/engineering/newOrganizationScheme/2020/jzjcore/jzjcoresoftware/programs/c/allemuroutinestest.hex")) coreTest (.*, .reset(1'b0));

//Toggling the clock internally works with Iverilog, but not with verilator
/*
always
begin
    #10;
    clock = ~clock;
end
*/

//Dump waveforms
initial
begin
    $dumpfile("/tmp/jzjpcc.vcd");
    $dumpvars(0,jzjpcc_tb);
end

endmodule

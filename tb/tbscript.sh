#Settings
#Can be a decimal
SIM_RUN_TIME="10"

FILES_TO_INCLUDE="-I ../src/jzjpcc/memory_backend/jzjpcc_endianness_functions.sv -I ../src/jzjpcc/jzjpcc.sv -I ../src/jzjpcc/jzjpcc_regfile.sv -I ../src/jzjpcc/fetch/jzjpcc_fetch.sv -I ../src/jzjpcc/fetch/jzjpcc_pc.sv -I ../src/jzjpcc/decode/jzjpcc_control.sv -I ../src/jzjpcc/decode/jzjpcc_decode.sv -I ../src/jzjpcc/decode/jzjpcc_immediateFormer.sv -I ../src/jzjpcc/execute/jzjpcc_alu.sv -I ../src/jzjpcc/execute/jzjpcc_alumux.sv -I ../src/jzjpcc/execute/jzjpcc_execute.sv -I ../src/jzjpcc/execute/jzjpcc_mem_processor.sv -I ../src/jzjpcc/memory/jzjpcc_memory.sv -I ../src/jzjpcc/writeback/jzjpcc_writeback.sv -I ../src/jzjpcc/memory_backend/jzjpcc_inferred_sram.sv -I ../src/jzjpcc/memory_backend/jzjpcc_memory_backend.sv"

#Verilate the testbench and jzjpcc SystemVerilog files//todo split into multiple commands
verilator $FILES_TO_INCLUDE -Wall -Wno-fatal -sv -cc jzjpcc_tb.sv --exe --trace-fst --top-module jzjpcc_tb +1800-2017ext+sv --build main.cpp
#Run the simulation (creates /tmp/jzjpcc.vcd)
timeout $SIM_RUN_TIME ./obj_dir/Vjzjpcc_tb
#Open in waveform viewer
gtkwave /tmp/jzjpcc.vcd
#Delete files
rm -rf ./obj_dir
rm /tmp/jzjpcc.vcd

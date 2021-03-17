// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjzjpcc_tb.h for the primary calling header

#include "Vjzjpcc_tb_jzjpcc_execute_if__Pd.h"
#include "Vjzjpcc_tb__Syms.h"

//==========

VL_CTOR_IMP(Vjzjpcc_tb_jzjpcc_execute_if__Pd) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjzjpcc_tb_jzjpcc_execute_if__Pd::__Vconfigure(Vjzjpcc_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vjzjpcc_tb_jzjpcc_execute_if__Pd::~Vjzjpcc_tb_jzjpcc_execute_if__Pd() {
}

void Vjzjpcc_tb_jzjpcc_execute_if__Pd::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vjzjpcc_tb_jzjpcc_execute_if__Pd::_ctor_var_reset\n"); );
    // Body
    immediate = VL_RAND_RESET_I(32);
    rs1 = VL_RAND_RESET_I(32);
    rs2 = VL_RAND_RESET_I(32);
    currentPC = VL_RAND_RESET_I(12);
    rdAddr = VL_RAND_RESET_I(5);
    aluOperation = VL_RAND_RESET_I(3);
    aluMod = VL_RAND_RESET_I(1);
    aluMuxMode = VL_RAND_RESET_I(2);
    rdWriteEnable = VL_RAND_RESET_I(1);
}

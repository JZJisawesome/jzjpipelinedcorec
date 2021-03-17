// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjzjpcc_tb.h for the primary calling header

#ifndef _VJZJPCC_TB_JZJPCC_EXECUTE_IF__PD_H_
#define _VJZJPCC_TB_JZJPCC_EXECUTE_IF__PD_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjzjpcc_tb__Syms;
class Vjzjpcc_tb_VerilatedFst;


//----------

VL_MODULE(Vjzjpcc_tb_jzjpcc_execute_if__Pd) {
  public:
    
    // LOCAL SIGNALS
    CData/*4:0*/ rdAddr;
    CData/*2:0*/ aluOperation;
    CData/*0:0*/ aluMod;
    CData/*1:0*/ aluMuxMode;
    CData/*0:0*/ rdWriteEnable;
    SData/*11:0*/ currentPC;
    IData/*31:0*/ immediate;
    IData/*31:0*/ rs1;
    IData/*31:0*/ rs2;
    
    // INTERNAL VARIABLES
  private:
    Vjzjpcc_tb__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjzjpcc_tb_jzjpcc_execute_if__Pd);  ///< Copying not allowed
  public:
    Vjzjpcc_tb_jzjpcc_execute_if__Pd(const char* name = "TOP");
    ~Vjzjpcc_tb_jzjpcc_execute_if__Pd();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjzjpcc_tb__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

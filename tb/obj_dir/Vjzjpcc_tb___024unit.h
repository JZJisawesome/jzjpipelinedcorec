// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjzjpcc_tb.h for the primary calling header

#ifndef _VJZJPCC_TB___024UNIT_H_
#define _VJZJPCC_TB___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjzjpcc_tb__Syms;
class Vjzjpcc_tb_VerilatedFst;


//----------

VL_MODULE(Vjzjpcc_tb___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vjzjpcc_tb__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjzjpcc_tb___024unit);  ///< Copying not allowed
  public:
    Vjzjpcc_tb___024unit(const char* name = "TOP");
    ~Vjzjpcc_tb___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjzjpcc_tb__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

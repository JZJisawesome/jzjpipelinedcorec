// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VJZJPCC_TB__SYMS_H_
#define _VJZJPCC_TB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vjzjpcc_tb.h"
#include "Vjzjpcc_tb___024unit.h"
#include "Vjzjpcc_tb_jzjpcc_execute_if__Pd.h"

// SYMS CLASS
class Vjzjpcc_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_dumping;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedFstC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex);  /// Trace class for $dump*
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vjzjpcc_tb*                    TOPp;
    Vjzjpcc_tb_jzjpcc_execute_if__Pd TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF;
    
    // CREATORS
    Vjzjpcc_tb__Syms(Vjzjpcc_tb* topp, const char* namep);
    ~Vjzjpcc_tb__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

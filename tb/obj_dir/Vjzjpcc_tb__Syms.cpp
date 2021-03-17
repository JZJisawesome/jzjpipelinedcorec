// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjzjpcc_tb__Syms.h"
#include "Vjzjpcc_tb.h"
#include "Vjzjpcc_tb___024unit.h"
#include "Vjzjpcc_tb_jzjpcc_execute_if__Pd.h"



// FUNCTIONS
Vjzjpcc_tb__Syms::~Vjzjpcc_tb__Syms()
{
}

Vjzjpcc_tb__Syms::Vjzjpcc_tb__Syms(Vjzjpcc_tb* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_dumping(false)
    , __Vm_dumperp(nullptr)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF(Verilated::catName(topp->name(), "jzjpcc_tb.coreTest.executeIF"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__jzjpcc_tb__DOT__coreTest__DOT__executeIF = &TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.__Vconfigure(this, true);
}

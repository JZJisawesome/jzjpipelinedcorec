// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VJZJPCC_TB_H_
#define _VJZJPCC_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vjzjpcc_tb__Syms;
class Vjzjpcc_tb_VerilatedFst;
class Vjzjpcc_tb_jzjpcc_execute_if__Pd;


//----------

VL_MODULE(Vjzjpcc_tb) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vjzjpcc_tb_jzjpcc_execute_if__Pd* __PVT__jzjpcc_tb__DOT__coreTest__DOT__executeIF;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__pcCTWriteEnable;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__stall_fetch;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__flush_decode;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__flush_execute;
    CData/*3:0*/ jzjpcc_tb__DOT__coreTest__DOT__memByteMask_execute;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory;
    CData/*4:0*/ jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory;
    CData/*4:0*/ jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback;
    CData/*2:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode;
    CData/*1:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode;
    CData/*0:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeEnableB;
    CData/*3:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB;
    SData/*11:0*/ jzjpcc_tb__DOT__coreTest__DOT__controlTransferNewPC;
    SData/*11:0*/ jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode;
    SData/*11:0*/ jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch;
    SData/*11:0*/ jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC;
    SData/*11:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB;
    IData/*29:0*/ jzjpcc_tb__DOT__coreTest__DOT__instruction_decode;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memDataToWrite_execute;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback;
    IData/*29:0*/ jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memDataRead_memory;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__readB;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ jzjpcc_tb__DOT__mmioInputs[8];
    IData/*31:0*/ jzjpcc_tb__DOT__mmioOutputs[8];
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[4096];
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[31];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT____Vlvbound2;
    IData/*31:0*/ __Vfunc_toBigEndian32__0__Vfuncout;
    IData/*31:0*/ __Vfunc_toBigEndian32__0__littleEndianData;
    IData/*31:0*/ __Vfunc_swapEndianness32__1__Vfuncout;
    IData/*31:0*/ __Vfunc_swapEndianness32__1__data;
    IData/*31:0*/ jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[8];
    IData/*31:0*/ jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[8];
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[8];
    IData/*31:0*/ jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[8];
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vjzjpcc_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjzjpcc_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vjzjpcc_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vjzjpcc_tb();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vjzjpcc_tb__Syms* __restrict vlSymsp);
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
    void __Vconfigure(Vjzjpcc_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vjzjpcc_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vjzjpcc_tb__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vjzjpcc_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vjzjpcc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vjzjpcc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vjzjpcc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vjzjpcc_tb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vjzjpcc_tb__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vjzjpcc_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedFst* tracep, const char* scopep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjzjpcc_tb.h for the primary calling header

#include "Vjzjpcc_tb.h"
#include "Vjzjpcc_tb__Syms.h"

//==========

void Vjzjpcc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjzjpcc_tb::eval\n"); );
    Vjzjpcc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jzjpcc_tb.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vjzjpcc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vjzjpcc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    Vjzjpcc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) _traceDump();
#endif  // VM_TRACE
}

void Vjzjpcc_tb::_eval_initial_loop(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("jzjpcc_tb.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vjzjpcc_tb::_sequent__TOP__3(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_sequent__TOP__3\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0;
    CData/*7:0*/ __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0;
    CData/*0:0*/ __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0;
    CData/*4:0*/ __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1;
    CData/*7:0*/ __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1;
    CData/*0:0*/ __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1;
    CData/*4:0*/ __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2;
    CData/*7:0*/ __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2;
    CData/*0:0*/ __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2;
    CData/*4:0*/ __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3;
    CData/*7:0*/ __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3;
    CData/*0:0*/ __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3;
    SData/*11:0*/ __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0;
    SData/*11:0*/ __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1;
    SData/*11:0*/ __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2;
    SData/*11:0*/ __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3;
    // Body
    __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0 = 0U;
    __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1 = 0U;
    __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2 = 0U;
    __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3 = 0U;
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__readB 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
        [vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB];
    if (vlTOPp->clock) {
        if ((1U & (~ (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute)))) {
            vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode;
        }
    }
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
        [vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC];
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback 
            = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory;
    }
    if (vlTOPp->clock) {
        vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.currentPC 
            = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode;
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback 
            = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory;
    }
    if (vlTOPp->clock) {
        vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs2 
            = ((0U == (0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                >> 0x12U))) ? 0U : 
               ((0x1eU >= (0x1fU & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                     >> 0x12U) - (IData)(1U))))
                 ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                [(0x1fU & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                            >> 0x12U) - (IData)(1U)))]
                 : 0U));
    }
    if (vlTOPp->clock) {
        vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs1 
            = ((0U == (0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                >> 0xdU))) ? 0U : (
                                                   (0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                         >> 0xdU) 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                                                   [
                                                   (0x1fU 
                                                    & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                        >> 0xdU) 
                                                       - (IData)(1U)))]
                                                    : 0U));
    }
    if (vlTOPp->clock) {
        vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.immediate 
            = ((0x10U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                ? 0U : ((8U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                         ? ((4U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                             ? ((2U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                 ? 0U : ((1U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                          ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU
                                          : 0U)) : 
                            ((2U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                              ? 0U : ((1U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                       ? 0U : ((0xfffff800U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                                  >> 0x1dU)))) 
                                                   << 0xbU)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                      >> 0x12U)) 
                                                  | (0x1fU 
                                                     & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                        >> 5U)))))))
                         : ((4U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                             ? ((2U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                 ? 0U : ((1U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                          ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU
                                          : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI))
                             : ((2U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                 ? 0U : ((1U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                          ? 0U : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI)))));
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback 
            = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory;
    }
    if (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeEnableB) {
        if ((1U & (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB))) {
            __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0 
                = (0xffU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB);
            __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0 = 1U;
            __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0 = 0U;
            __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB;
        }
        if ((2U & (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB))) {
            __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1 
                = (0xffU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB 
                            >> 8U));
            __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1 = 1U;
            __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1 = 8U;
            __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB;
        }
        if ((4U & (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB))) {
            __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2 
                = (0xffU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB 
                            >> 0x10U));
            __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2 = 1U;
            __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2 = 0x10U;
            __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB;
        }
        if ((8U & (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB))) {
            __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3 
                = (0xffU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB 
                            >> 0x18U));
            __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3 = 1U;
            __Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3 = 0x18U;
            __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB;
        }
    }
    if (__Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0))) 
                & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
                [__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0]) 
               | ((IData)(__Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0) 
                  << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v0)));
    }
    if (__Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1))) 
                & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
                [__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1]) 
               | ((IData)(__Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1) 
                  << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v1)));
    }
    if (__Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2))) 
                & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
                [__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2]) 
               | ((IData)(__Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2) 
                  << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v2)));
    }
    if (__Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3))) 
                & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
                [__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3]) 
               | ((IData)(__Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3) 
                  << (IData)(__Vdlyvlsb__jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM__v3)));
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory 
            = vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdWriteEnable;
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode 
            = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch;
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory 
            = ((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                ? ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                    ? ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                        ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                           & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                        : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                           | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                    : ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                        ? ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                            ? VL_SHIFTRS_III(32,32,5, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, 
                                             (0x1fU 
                                              & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                            : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                               >> (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                        : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                           ^ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                : ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                    ? ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                        ? ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                            < vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                            ? 1U : 0U) : (VL_LTS_III(1,32,32, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                        ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                           << (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                        : ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                            + ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                ? (~ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)) 
                           + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)))));
    }
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory 
            = vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdAddr;
    }
    if ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode))) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
            = vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.currentPC;
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB 
            = ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode))
                ? vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.immediate
                : 4U);
    } else {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
            = vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs1;
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB 
            = ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode))
                ? vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.immediate
                : vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs2);
    }
    if (vlTOPp->clock) {
        if ((1U & (~ (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute)))) {
            vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdWriteEnable 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode;
        }
    }
    if (vlTOPp->clock) {
        if ((1U & (~ (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__stall_fetch)))) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC;
        }
    }
    if (vlTOPp->clock) {
        if ((1U & (~ (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute)))) {
            vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode;
        }
    }
    if (vlTOPp->clock) {
        if ((1U & (~ (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute)))) {
            vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod 
                = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode;
        }
    }
    if (vlTOPp->clock) {
        vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdAddr 
            = ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute)
                ? 0U : (0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                 >> 5U)));
    }
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC 
        = (0xfffU & ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__pcCTWriteEnable)
                      ? (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__controlTransferNewPC)
                      : ((IData)(1U) + (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch))));
    if (vlTOPp->clock) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
            = ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_decode)
                ? 4U : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch);
    }
    vlTOPp->__Vfunc_toBigEndian32__0__littleEndianData 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction;
    vlTOPp->__Vfunc_swapEndianness32__1__data = vlTOPp->__Vfunc_toBigEndian32__0__littleEndianData;
    vlTOPp->__Vfunc_swapEndianness32__1__Vfuncout = 
        ((0xff000000U & (vlTOPp->__Vfunc_swapEndianness32__1__data 
                         << 0x18U)) | ((0xff0000U & 
                                        (vlTOPp->__Vfunc_swapEndianness32__1__data 
                                         << 8U)) | 
                                       ((0xff00U & 
                                         (vlTOPp->__Vfunc_swapEndianness32__1__data 
                                          >> 8U)) | 
                                        (0xffU & (vlTOPp->__Vfunc_swapEndianness32__1__data 
                                                  >> 0x18U)))));
    vlTOPp->__Vfunc_toBigEndian32__0__Vfuncout = vlTOPp->__Vfunc_swapEndianness32__1__Vfuncout;
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch 
        = (0x3fffffffU & (vlTOPp->__Vfunc_toBigEndian32__0__Vfuncout 
                          >> 2U));
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI 
        = ((0xfffff800U & ((- (IData)((1U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0x1dU)))) 
                           << 0xbU)) | (0x7ffU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                  >> 0x12U)));
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU 
        = ((0x80000000U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                           << 2U)) | (0x7ffff000U & 
                                      (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                       << 2U)));
    if ((4U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode 
            = (7U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                     >> 0xaU));
    } else {
        if ((5U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode = 0U;
        } else {
            if ((8U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode = 0U;
            } else {
                if ((0xcU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode 
                        = (7U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                 >> 0xaU));
                } else {
                    if ((0xdU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode = 0U;
                    } else {
                        if ((0x18U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((4U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode 
            = ((5U == (7U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                             >> 0xaU))) & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                           >> 0x1cU));
    } else {
        if ((5U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode = 0U;
        } else {
            if ((8U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode = 0U;
            } else {
                if ((0xcU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode 
                        = (1U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                 >> 0x1cU));
                } else {
                    if ((0xdU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode = 0U;
                    } else {
                        if ((0x18U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((4U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 1U;
    } else {
        if ((5U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 3U;
        } else {
            if ((8U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 1U;
            } else {
                if ((0xcU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 0U;
                } else {
                    if ((0xdU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 1U;
                    } else {
                        if ((0x18U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((4U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 1U;
    } else {
        if ((5U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 1U;
        } else {
            if ((8U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 1U;
            } else {
                if ((0xcU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 1U;
                } else {
                    if ((0xdU == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 1U;
                    } else {
                        if ((0x18U == (0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode))) {
                            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = 0U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vjzjpcc_tb::_sequent__TOP__4(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_sequent__TOP__4\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0;
    CData/*0:0*/ __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0;
    IData/*31:0*/ __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0;
    // Body
    __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->clock)))) {
        if (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback) {
            vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT____Vlvbound2 
                = ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback)
                    ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback
                    : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback);
            if ((0x1eU >= (0x1fU & ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback) 
                                    - (IData)(1U))))) {
                __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0 
                    = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT____Vlvbound2;
                __Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0 = 1U;
                __Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0 
                    = (0x1fU & ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback) 
                                - (IData)(1U)));
            }
        }
    }
    if (__Vdlyvset__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0) {
        vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[__Vdlyvdim0__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0] 
            = __Vdlyvval__jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile__v0;
    }
}

void Vjzjpcc_tb::_eval(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_eval\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlTOPp->clock)) & (IData)(vlTOPp->__Vclklast__TOP__clock))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData Vjzjpcc_tb::_change_request(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_change_request\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vjzjpcc_tb::_change_request_1(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_change_request_1\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjzjpcc_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
}
#endif  // VL_DEBUG

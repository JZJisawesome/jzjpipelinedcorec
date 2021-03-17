// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjzjpcc_tb.h for the primary calling header

#include "Vjzjpcc_tb.h"
#include "Vjzjpcc_tb__Syms.h"

//==========

VL_CTOR_IMP(Vjzjpcc_tb) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vjzjpcc_tb__Syms(this, name());
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__jzjpcc_tb__DOT__coreTest__DOT__executeIF, Vjzjpcc_tb_jzjpcc_execute_if__Pd);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vjzjpcc_tb::__Vconfigure(Vjzjpcc_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vjzjpcc_tb::~Vjzjpcc_tb() {
#ifdef VM_TRACE
    if (VL_UNLIKELY(__VlSymsp->__Vm_dumping)) _traceDumpClose();
#endif  // VM_TRACE
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vjzjpcc_tb::_initial__TOP__1(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_initial__TOP__1\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x6a706363U;
    __Vtemp1[2U] = 0x702f6a7aU;
    __Vtemp1[3U] = 0x2f746dU;
    vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(4, __Vtemp1));
    vlSymsp->TOPp->_traceDumpOpen();
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x74657374U;
    __Vtemp2[2U] = 0x746d702fU;
    __Vtemp2[3U] = 0x2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 , vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM
                 , 0, ~0ULL);
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch = 0U;
}

void Vjzjpcc_tb::_settle__TOP__2(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_settle__TOP__2\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[0U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[1U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[2U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[3U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[4U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[5U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[6U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[7U] 
        = vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs
        [7U];
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
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC 
        = (0xfffU & ((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__pcCTWriteEnable)
                      ? (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__controlTransferNewPC)
                      : ((IData)(1U) + (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch))));
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[0U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[1U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[2U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[3U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[4U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[5U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[6U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[7U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [7U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[0U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[1U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[2U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[3U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[4U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[5U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[6U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__mmioOutputs[7U] = vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs
        [7U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[0U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[1U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[2U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[3U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[4U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[5U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[6U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[7U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [7U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[0U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[1U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[2U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[3U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[4U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[5U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[6U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__mmioInputs[7U] = vlTOPp->jzjpcc_tb__DOT__mmioOutputs
        [7U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[0U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[0U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[1U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[1U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[2U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[2U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[3U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[3U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[4U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[4U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[5U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[5U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[6U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[6U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[7U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[7U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[0U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[0U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[1U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[1U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[2U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[2U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[3U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[3U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[4U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[4U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[5U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[5U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[6U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[6U];
    vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[7U] 
        = vlTOPp->jzjpcc_tb__DOT__mmioInputs[7U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[0U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[1U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[2U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[3U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[4U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[5U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[6U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[7U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [7U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[0U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [0U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[1U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [1U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[2U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [2U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[3U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [3U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[4U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [4U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[5U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [5U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[6U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [6U];
    vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[7U] 
        = vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs
        [7U];
}

void Vjzjpcc_tb::_eval_initial(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_eval_initial\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void Vjzjpcc_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::final\n"); );
    // Variables
    Vjzjpcc_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vjzjpcc_tb::_eval_settle(Vjzjpcc_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_eval_settle\n"); );
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vjzjpcc_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjzjpcc_tb::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT__mmioInputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT__mmioOutputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    jzjpcc_tb__DOT__coreTest__DOT__pcCTWriteEnable = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__controlTransferNewPC = VL_RAND_RESET_I(12);
    jzjpcc_tb__DOT__coreTest__DOT__stall_fetch = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__flush_decode = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__instruction_decode = VL_RAND_RESET_I(30);
    jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode = VL_RAND_RESET_I(12);
    jzjpcc_tb__DOT__coreTest__DOT__flush_execute = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__memDataToWrite_execute = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__memByteMask_execute = VL_RAND_RESET_I(4);
    jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory = VL_RAND_RESET_I(5);
    jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback = VL_RAND_RESET_I(5);
    jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch = VL_RAND_RESET_I(30);
    jzjpcc_tb__DOT__coreTest__DOT__memDataRead_memory = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[__Vi0] = VL_RAND_RESET_I(32);
    }
    jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch = VL_RAND_RESET_I(12);
    jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC = VL_RAND_RESET_I(12);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode = VL_RAND_RESET_I(3);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode = VL_RAND_RESET_I(2);
    jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB = VL_RAND_RESET_I(12);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__readB = VL_RAND_RESET_I(32);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeEnableB = VL_RAND_RESET_I(1);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB = VL_RAND_RESET_I(4);
    jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__inferredSRAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__unnamedblk1__DOT__i = 0;
    jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    __Vfunc_toBigEndian32__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_toBigEndian32__0__littleEndianData = VL_RAND_RESET_I(32);
    __Vfunc_swapEndianness32__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_swapEndianness32__1__data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

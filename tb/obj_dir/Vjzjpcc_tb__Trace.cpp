// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vjzjpcc_tb__Syms.h"


void Vjzjpcc_tb::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vjzjpcc_tb::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[3]),32);
            tracep->chgIData(oldp+4,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[4]),32);
            tracep->chgIData(oldp+5,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[5]),32);
            tracep->chgIData(oldp+6,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[6]),32);
            tracep->chgIData(oldp+7,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[7]),32);
            tracep->chgIData(oldp+8,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[0]),32);
            tracep->chgIData(oldp+9,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[1]),32);
            tracep->chgIData(oldp+10,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[2]),32);
            tracep->chgIData(oldp+11,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[3]),32);
            tracep->chgIData(oldp+12,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[4]),32);
            tracep->chgIData(oldp+13,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[5]),32);
            tracep->chgIData(oldp+14,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[6]),32);
            tracep->chgIData(oldp+15,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[7]),32);
            tracep->chgIData(oldp+16,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[0]),32);
            tracep->chgIData(oldp+17,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[1]),32);
            tracep->chgIData(oldp+18,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[2]),32);
            tracep->chgIData(oldp+19,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[3]),32);
            tracep->chgIData(oldp+20,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[4]),32);
            tracep->chgIData(oldp+21,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[5]),32);
            tracep->chgIData(oldp+22,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[6]),32);
            tracep->chgIData(oldp+23,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[7]),32);
            tracep->chgIData(oldp+24,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[0]),32);
            tracep->chgIData(oldp+25,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[1]),32);
            tracep->chgIData(oldp+26,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[2]),32);
            tracep->chgIData(oldp+27,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[3]),32);
            tracep->chgIData(oldp+28,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[4]),32);
            tracep->chgIData(oldp+29,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[5]),32);
            tracep->chgIData(oldp+30,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[6]),32);
            tracep->chgIData(oldp+31,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[7]),32);
            tracep->chgIData(oldp+32,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[0]),32);
            tracep->chgIData(oldp+33,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[1]),32);
            tracep->chgIData(oldp+34,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[2]),32);
            tracep->chgIData(oldp+35,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[3]),32);
            tracep->chgIData(oldp+36,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[4]),32);
            tracep->chgIData(oldp+37,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[5]),32);
            tracep->chgIData(oldp+38,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[6]),32);
            tracep->chgIData(oldp+39,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[7]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+40,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode),30);
            tracep->chgSData(oldp+41,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode),12);
            tracep->chgIData(oldp+42,((0x3fffffffU 
                                       & (((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                    ? 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                    : 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, 
                                                                   (0x1fU 
                                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                     : 
                                                    (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                     >> 
                                                     (0x1fU 
                                                      & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                                    : 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    ^ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                    ? 
                                                   ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                     < vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(1,32,32, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                    ? 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                    : 
                                                   ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                       ? 
                                                      (~ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                       : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)) 
                                                    + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod))))) 
                                          >> 2U))),30);
            tracep->chgIData(oldp+43,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory),32);
            tracep->chgBit(oldp+44,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory));
            tracep->chgCData(oldp+45,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory),5);
            tracep->chgCData(oldp+46,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback),5);
            tracep->chgBit(oldp+47,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback));
            tracep->chgIData(oldp+48,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback),32);
            tracep->chgIData(oldp+49,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch),30);
            tracep->chgSData(oldp+50,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC),12);
            tracep->chgCData(oldp+51,((0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                >> 0xdU))),5);
            tracep->chgCData(oldp+52,((0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                >> 0x12U))),5);
            tracep->chgIData(oldp+53,(((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback)
                                        ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback
                                        : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback)),32);
            tracep->chgSData(oldp+54,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch),12);
            tracep->chgSData(oldp+55,((0xfffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch)))),12);
            tracep->chgIData(oldp+56,(((0x10U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                        ? 0U : ((8U 
                                                 & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                 ? 
                                                ((4U 
                                                  & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                  ? 
                                                 ((2U 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                    ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                    ? 0U
                                                    : 
                                                   ((0xfffff800U 
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
                                                 : 
                                                ((4U 
                                                  & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                  ? 
                                                 ((2U 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                    ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU
                                                    : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI))
                                                  : 
                                                 ((2U 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                                    ? 0U
                                                    : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI)))))),32);
            tracep->chgIData(oldp+57,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI),32);
            tracep->chgIData(oldp+58,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                          >> 0x1dU)))) 
                                           << 0xcU)) 
                                       | ((0x800U & 
                                           (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                            << 6U)) 
                                          | ((0x7e0U 
                                              & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                 >> 0x12U)) 
                                             | (0x1eU 
                                                & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                   >> 5U)))))),32);
            tracep->chgIData(oldp+59,(((0x7ff80000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                          >> 0x1dU)))) 
                                           << 0x13U)) 
                                       | ((0x7f800U 
                                           & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                              << 1U)) 
                                          | ((0x400U 
                                              & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                 >> 8U)) 
                                             | (0x3ffU 
                                                & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                   >> 0x13U)))))),32);
            tracep->chgCData(oldp+60,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode),3);
            tracep->chgBit(oldp+61,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode));
            tracep->chgBit(oldp+62,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode));
            tracep->chgCData(oldp+63,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode),2);
            tracep->chgBit(oldp+64,((1U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                           >> 0x1dU))));
            tracep->chgIData(oldp+65,(((0xfffff800U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                          >> 0x1dU)))) 
                                           << 0xbU)) 
                                       | ((0x7e0U & 
                                           (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                            >> 0x12U)) 
                                          | (0x1fU 
                                             & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                >> 5U))))),32);
            tracep->chgIData(oldp+66,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU),32);
            tracep->chgCData(oldp+67,((0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)),5);
            tracep->chgCData(oldp+68,((7U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0xaU))),3);
            tracep->chgCData(oldp+69,((0x7fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                >> 0x17U))),7);
            tracep->chgIData(oldp+70,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA),32);
            tracep->chgIData(oldp+71,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB),32);
            tracep->chgIData(oldp+72,(((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                        ? ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, 
                                                                  (0x1fU 
                                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                    : 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                                : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   ^ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                        : ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? (
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    < vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   VL_LTS_III(1,32,32, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                    ? 1U
                                                    : 0U))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                : (
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                      ? 
                                                     (~ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                      : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)) 
                                                   + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)))))),32);
            tracep->chgCData(oldp+73,((3U & ((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                   ? 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                   : 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, 
                                                                  (0x1fU 
                                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                    : 
                                                   (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                                   : 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   ^ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                   ? 
                                                  ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    < vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(1,32,32, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                   ? 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                                   : 
                                                  ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                      ? 
                                                     (~ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                      : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)) 
                                                   + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod))))))),2);
            tracep->chgIData(oldp+74,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction),32);
            tracep->chgIData(oldp+75,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__readB),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.immediate),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs1),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs2),32);
            tracep->chgSData(oldp+79,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.currentPC),12);
            tracep->chgCData(oldp+80,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdAddr),5);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation),3);
            tracep->chgBit(oldp+82,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod));
            tracep->chgCData(oldp+83,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode),2);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdWriteEnable));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+85,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                                      [0x1eU]),32);
            tracep->chgIData(oldp+86,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[0]),32);
            tracep->chgIData(oldp+87,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[1]),32);
            tracep->chgIData(oldp+88,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[2]),32);
            tracep->chgIData(oldp+89,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[3]),32);
            tracep->chgIData(oldp+90,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[4]),32);
            tracep->chgIData(oldp+91,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[5]),32);
            tracep->chgIData(oldp+92,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[6]),32);
            tracep->chgIData(oldp+93,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[7]),32);
            tracep->chgIData(oldp+94,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[8]),32);
            tracep->chgIData(oldp+95,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[9]),32);
            tracep->chgIData(oldp+96,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[10]),32);
            tracep->chgIData(oldp+97,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[11]),32);
            tracep->chgIData(oldp+98,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[12]),32);
            tracep->chgIData(oldp+99,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[13]),32);
            tracep->chgIData(oldp+100,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[14]),32);
            tracep->chgIData(oldp+101,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[15]),32);
            tracep->chgIData(oldp+102,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[16]),32);
            tracep->chgIData(oldp+103,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[17]),32);
            tracep->chgIData(oldp+104,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[18]),32);
            tracep->chgIData(oldp+105,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[19]),32);
            tracep->chgIData(oldp+106,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[20]),32);
            tracep->chgIData(oldp+107,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[21]),32);
            tracep->chgIData(oldp+108,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[22]),32);
            tracep->chgIData(oldp+109,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[23]),32);
            tracep->chgIData(oldp+110,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[24]),32);
            tracep->chgIData(oldp+111,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[25]),32);
            tracep->chgIData(oldp+112,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[26]),32);
            tracep->chgIData(oldp+113,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[27]),32);
            tracep->chgIData(oldp+114,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[28]),32);
            tracep->chgIData(oldp+115,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[29]),32);
            tracep->chgIData(oldp+116,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[30]),32);
        }
        tracep->chgBit(oldp+117,(vlTOPp->clock));
        tracep->chgIData(oldp+118,(((0U == (0x1fU & 
                                            (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0xdU)))
                                     ? 0U : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                      >> 0xdU) 
                                                     - (IData)(1U))))
                                              ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                                             [(0x1fU 
                                               & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                   >> 0xdU) 
                                                  - (IData)(1U)))]
                                              : 0U))),32);
        tracep->chgIData(oldp+119,(((0U == (0x1fU & 
                                            (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0x12U)))
                                     ? 0U : ((0x1eU 
                                              >= (0x1fU 
                                                  & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                      >> 0x12U) 
                                                     - (IData)(1U))))
                                              ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                                             [(0x1fU 
                                               & ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                   >> 0x12U) 
                                                  - (IData)(1U)))]
                                              : 0U))),32);
    }
}

void Vjzjpcc_tb::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}

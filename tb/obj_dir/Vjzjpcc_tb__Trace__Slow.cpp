// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vjzjpcc_tb__Syms.h"


//======================

void Vjzjpcc_tb::_traceDump() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumperp->dump(VL_TIME_Q());
}
void Vjzjpcc_tb::_traceDumpOpen() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    if (VL_UNLIKELY(!__VlSymsp->__Vm_dumperp)) {
        __VlSymsp->__Vm_dumperp = new VerilatedFstC();
        const char* cp = vl_dumpctl_filenamep();
        trace(__VlSymsp->__Vm_dumperp, 0, 0);
        __VlSymsp->__Vm_dumperp->open(vl_dumpctl_filenamep());
        __VlSymsp->__Vm_dumperp->changeThread();
        __VlSymsp->__Vm_dumping = true;
    }
}
void Vjzjpcc_tb::_traceDumpClose() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumping = false;
    VL_DO_CLEAR(delete __VlSymsp->__Vm_dumperp, __VlSymsp->__Vm_dumperp = nullptr);
}
void Vjzjpcc_tb::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vjzjpcc_tb::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vjzjpcc_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vjzjpcc_tb::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vjzjpcc_tb::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+118,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"jzjpcc_tb clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+86,"jzjpcc_tb register31Value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"jzjpcc_tb mmioInputs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"jzjpcc_tb mmioOutputs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declArray(c+121,"jzjpcc_tb coreTest INITIAL_MEM_CONTENTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 103,0);
        tracep->declBus(c+125,"jzjpcc_tb coreTest RAM_A_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+17+i*1,"jzjpcc_tb coreTest mmioInputs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+25+i*1,"jzjpcc_tb coreTest mmioOutputs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        tracep->declBus(c+86,"jzjpcc_tb coreTest register31Value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+127,"jzjpcc_tb coreTest PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+128,"jzjpcc_tb coreTest pcCTWriteEnable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+129,"jzjpcc_tb coreTest controlTransferNewPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBit(c+130,"jzjpcc_tb coreTest stall_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+131,"jzjpcc_tb coreTest flush_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+41,"jzjpcc_tb coreTest instruction_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,2);
        tracep->declBus(c+42,"jzjpcc_tb coreTest currentPC_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBit(c+132,"jzjpcc_tb coreTest flush_execute",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+43,"jzjpcc_tb coreTest memAddress_execute",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest memDataToWrite_execute",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest memByteMask_execute",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+44,"jzjpcc_tb coreTest aluResult_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+45,"jzjpcc_tb coreTest rdWriteEnable_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+46,"jzjpcc_tb coreTest rdAddr_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest rdAddr_writeback",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest rdWriteEnable_writeback",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+135,"jzjpcc_tb coreTest rdSource_writeback",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+136,"jzjpcc_tb coreTest memoryOut_writeback",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+49,"jzjpcc_tb coreTest aluResult_writeback",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+50,"jzjpcc_tb coreTest instruction_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,2);
        tracep->declBus(c+51,"jzjpcc_tb coreTest instructionAddressToLatch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBus(c+43,"jzjpcc_tb coreTest memAddress_execute_frommemory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest memDataToWrite_execute_frommemory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest memByteMask_execute_frommemory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+137,"jzjpcc_tb coreTest memDataRead_memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+52,"jzjpcc_tb coreTest rs1Addr_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+53,"jzjpcc_tb coreTest rs2Addr_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+119,"jzjpcc_tb coreTest rs1_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+120,"jzjpcc_tb coreTest rs2_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest rdAddr_writebackEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+54,"jzjpcc_tb coreTest rd_writebackEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest rdWriteEnable_writebackEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+127,"jzjpcc_tb coreTest fetchStage PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest fetchStage clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest fetchStage reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+41,"jzjpcc_tb coreTest fetchStage instruction_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+42,"jzjpcc_tb coreTest fetchStage currentPC_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBit(c+128,"jzjpcc_tb coreTest fetchStage pcCTWriteEnable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"jzjpcc_tb coreTest fetchStage controlTransferNewPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+50,"jzjpcc_tb coreTest fetchStage instruction_fetch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+51,"jzjpcc_tb coreTest fetchStage instructionAddressToLatch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBit(c+130,"jzjpcc_tb coreTest fetchStage stall_fetch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+131,"jzjpcc_tb coreTest fetchStage flush_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+55,"jzjpcc_tb coreTest fetchStage currentPC_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBus(c+51,"jzjpcc_tb coreTest fetchStage nextPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBus(c+127,"jzjpcc_tb coreTest fetchStage programCounter PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest fetchStage programCounter clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest fetchStage programCounter reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+130,"jzjpcc_tb coreTest fetchStage programCounter stall_fetch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"jzjpcc_tb coreTest fetchStage programCounter pcCTWriteEnable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"jzjpcc_tb coreTest fetchStage programCounter controlTransferNewPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+55,"jzjpcc_tb coreTest fetchStage programCounter currentPC_fetch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+51,"jzjpcc_tb coreTest fetchStage programCounter nextPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+56,"jzjpcc_tb coreTest fetchStage programCounter nextSequentialPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBus(c+127,"jzjpcc_tb coreTest decodeStage PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest decodeStage clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest decodeStage reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+41,"jzjpcc_tb coreTest decodeStage instruction_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+42,"jzjpcc_tb coreTest decodeStage currentPC_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+52,"jzjpcc_tb coreTest decodeStage rs1Addr_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+53,"jzjpcc_tb coreTest decodeStage rs2Addr_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+119,"jzjpcc_tb coreTest decodeStage rs1_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+120,"jzjpcc_tb coreTest decodeStage rs2_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+128,"jzjpcc_tb coreTest decodeStage pcCTWriteEnable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+129,"jzjpcc_tb coreTest decodeStage controlTransferNewPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBit(c+132,"jzjpcc_tb coreTest decodeStage flush_execute",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"jzjpcc_tb coreTest decodeStage immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+58,"jzjpcc_tb coreTest decodeStage immediateI",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+59,"jzjpcc_tb coreTest decodeStage immediateB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+60,"jzjpcc_tb coreTest decodeStage immediateJ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+61,"jzjpcc_tb coreTest decodeStage aluOperation_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+62,"jzjpcc_tb coreTest decodeStage aluMod_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+63,"jzjpcc_tb coreTest decodeStage rdWriteEnable_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+64,"jzjpcc_tb coreTest decodeStage aluMuxMode_decode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+41,"jzjpcc_tb coreTest decodeStage immediateFormer instruction_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+58,"jzjpcc_tb coreTest decodeStage immediateFormer immediateI",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+59,"jzjpcc_tb coreTest decodeStage immediateFormer immediateB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+60,"jzjpcc_tb coreTest decodeStage immediateFormer immediateJ",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"jzjpcc_tb coreTest decodeStage immediateFormer immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+65,"jzjpcc_tb coreTest decodeStage immediateFormer signBit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+66,"jzjpcc_tb coreTest decodeStage immediateFormer immediateS",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+67,"jzjpcc_tb coreTest decodeStage immediateFormer immediateU",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"LOAD", "MISC_MEM", "OP_IMM", "AUIPC", 
                                                "STORE", 
                                                "OP", 
                                                "LUI", 
                                                "BRANCH", 
                                                "JALR", 
                                                "JAL", 
                                                "SYSTEM"};
            const char* __VenumItemValues[]
            = {"0", "11", "100", "101", "1000", "1100", 
                                                "1101", 
                                                "11000", 
                                                "11001", 
                                                "11011", 
                                                "11100"};
            tracep->declDTypeEnum(1, "jzjpcc_immediateFormer.opcode_t", 11, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+68,"jzjpcc_tb coreTest decodeStage immediateFormer opcode",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+41,"jzjpcc_tb coreTest decodeStage control instruction_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+61,"jzjpcc_tb coreTest decodeStage control aluOperation_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+62,"jzjpcc_tb coreTest decodeStage control aluMod_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+64,"jzjpcc_tb coreTest decodeStage control aluMuxMode_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+63,"jzjpcc_tb coreTest decodeStage control rdWriteEnable_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+69,"jzjpcc_tb coreTest decodeStage control funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+70,"jzjpcc_tb coreTest decodeStage control funct7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        {
            const char* __VenumItemNames[]
            = {"LOAD", "MISC_MEM", "OP_IMM", "AUIPC", 
                                                "STORE", 
                                                "OP", 
                                                "LUI", 
                                                "BRANCH", 
                                                "JALR", 
                                                "JAL", 
                                                "SYSTEM"};
            const char* __VenumItemValues[]
            = {"0", "11", "100", "101", "1000", "1100", 
                                                "1101", 
                                                "11000", 
                                                "11001", 
                                                "11011", 
                                                "11100"};
            tracep->declDTypeEnum(2, "jzjpcc_control.opcode_t", 11, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+68,"jzjpcc_tb coreTest decodeStage control opcode",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+127,"jzjpcc_tb coreTest executeStage PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest executeStage clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest executeStage reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+43,"jzjpcc_tb coreTest executeStage memAddress_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest executeStage memDataToWrite_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest executeStage memByteMask_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+44,"jzjpcc_tb coreTest executeStage aluResult_memory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+45,"jzjpcc_tb coreTest executeStage rdWriteEnable_memory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+46,"jzjpcc_tb coreTest executeStage rdAddr_memory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+71,"jzjpcc_tb coreTest executeStage aluOperandA",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+72,"jzjpcc_tb coreTest executeStage aluOperandB",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+73,"jzjpcc_tb coreTest executeStage aluResult_execute",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+71,"jzjpcc_tb coreTest executeStage alu aluOperandA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+72,"jzjpcc_tb coreTest executeStage alu aluOperandB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+73,"jzjpcc_tb coreTest executeStage alu aluResult_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+71,"jzjpcc_tb coreTest executeStage alu a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+72,"jzjpcc_tb coreTest executeStage alu b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+127,"jzjpcc_tb coreTest executeStage aluMultiplexer PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+71,"jzjpcc_tb coreTest executeStage aluMultiplexer aluOperandA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+72,"jzjpcc_tb coreTest executeStage aluMultiplexer aluOperandB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+73,"jzjpcc_tb coreTest executeStage memOperandProcessor aluResult_execute",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+133,"jzjpcc_tb coreTest executeStage memOperandProcessor memDataToWrite_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest executeStage memOperandProcessor memByteMask_execute",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+74,"jzjpcc_tb coreTest executeStage memOperandProcessor byteOffset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest memoryStage clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest memoryStage reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+43,"jzjpcc_tb coreTest memoryStage memAddress_execute",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest memoryStage memDataToWrite_execute",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest memoryStage memByteMask_execute",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+44,"jzjpcc_tb coreTest memoryStage aluResult_memory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+45,"jzjpcc_tb coreTest memoryStage rdWriteEnable_memory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+46,"jzjpcc_tb coreTest memoryStage rdAddr_memory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest memoryStage rdAddr_writeback",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest memoryStage rdWriteEnable_writeback",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+135,"jzjpcc_tb coreTest memoryStage rdSource_writeback",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+136,"jzjpcc_tb coreTest memoryStage memoryOut_writeback",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+49,"jzjpcc_tb coreTest memoryStage aluResult_writeback",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+43,"jzjpcc_tb coreTest memoryStage memAddress_execute_frommemory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest memoryStage memDataToWrite_execute_frommemory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest memoryStage memByteMask_execute_frommemory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+137,"jzjpcc_tb coreTest memoryStage memDataRead_memory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest writebackStage rdAddr_writeback",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest writebackStage rdWriteEnable_writeback",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+135,"jzjpcc_tb coreTest writebackStage rdSource_writeback",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+136,"jzjpcc_tb coreTest writebackStage memoryOut_writeback",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+49,"jzjpcc_tb coreTest writebackStage aluResult_writeback",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest writebackStage rdAddr_writebackEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+54,"jzjpcc_tb coreTest writebackStage rd_writebackEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest writebackStage rdWriteEnable_writebackEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+121,"jzjpcc_tb coreTest memoryBackend INITIAL_MEM_CONTENTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 103,0);
        tracep->declBus(c+125,"jzjpcc_tb coreTest memoryBackend RAM_A_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+127,"jzjpcc_tb coreTest memoryBackend PC_MAX_B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest memoryBackend clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest memoryBackend reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+50,"jzjpcc_tb coreTest memoryBackend instruction_fetch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+51,"jzjpcc_tb coreTest memoryBackend instructionAddressToLatch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,2);
        tracep->declBus(c+43,"jzjpcc_tb coreTest memoryBackend memAddress_execute_frommemory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,2);
        tracep->declBus(c+133,"jzjpcc_tb coreTest memoryBackend memDataToWrite_execute_frommemory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+134,"jzjpcc_tb coreTest memoryBackend memByteMask_execute_frommemory",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+137,"jzjpcc_tb coreTest memoryBackend memDataRead_memory",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+33+i*1,"jzjpcc_tb coreTest memoryBackend mmioInputs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+138+i*1,"jzjpcc_tb coreTest memoryBackend mmioOutputs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        tracep->declBus(c+75,"jzjpcc_tb coreTest memoryBackend littleEndianInstruction",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declArray(c+121,"jzjpcc_tb coreTest memoryBackend sram INITIAL_MEM_CONTENTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 103,0);
        tracep->declBus(c+125,"jzjpcc_tb coreTest memoryBackend sram RAM_A_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest memoryBackend sram clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+51,"jzjpcc_tb coreTest memoryBackend sram addressA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+75,"jzjpcc_tb coreTest memoryBackend sram readA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+126,"jzjpcc_tb coreTest memoryBackend sram writeEnableA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+146,"jzjpcc_tb coreTest memoryBackend sram byteWriteMaskA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+147,"jzjpcc_tb coreTest memoryBackend sram writeA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+148,"jzjpcc_tb coreTest memoryBackend sram addressB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
        tracep->declBus(c+76,"jzjpcc_tb coreTest memoryBackend sram readB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+149,"jzjpcc_tb coreTest memoryBackend sram writeEnableB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+150,"jzjpcc_tb coreTest memoryBackend sram byteWriteMaskB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+151,"jzjpcc_tb coreTest memoryBackend sram writeB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+152,"jzjpcc_tb coreTest memoryBackend sram A_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+153,"jzjpcc_tb coreTest memoryBackend sram NUM_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+154,"jzjpcc_tb coreTest memoryBackend sram NUM_ADDR_MAX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+118,"jzjpcc_tb coreTest registerFile clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+126,"jzjpcc_tb coreTest registerFile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+52,"jzjpcc_tb coreTest registerFile rs1Addr_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+53,"jzjpcc_tb coreTest registerFile rs2Addr_decode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+119,"jzjpcc_tb coreTest registerFile rs1_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+120,"jzjpcc_tb coreTest registerFile rs2_decode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+47,"jzjpcc_tb coreTest registerFile rdAddr_writebackEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+54,"jzjpcc_tb coreTest registerFile rd_writebackEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+48,"jzjpcc_tb coreTest registerFile rdWriteEnable_writebackEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+86,"jzjpcc_tb coreTest registerFile register31Value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+87+i*1,"jzjpcc_tb coreTest registerFile registerFile",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);}}
        tracep->declBus(c+155,"jzjpcc_tb coreTest registerFile unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest executeIF");
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest decodeStage executeIF");
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest executeStage executeIF");
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest executeStage alu executeIF");
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest executeStage aluMultiplexer executeIF");
        vlTOPp->traceInitSub1(userp, tracep, "jzjpcc_tb coreTest executeStage memOperandProcessor executeIF");
    }
}

void Vjzjpcc_tb::traceInitSub1(void* userp, VerilatedFst* tracep, const char* scopep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+127,Verilated::catName(scopep,"PC_MAX_B"," "),-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+77,Verilated::catName(scopep,"immediate"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+78,Verilated::catName(scopep,"rs1"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+79,Verilated::catName(scopep,"rs2"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+80,Verilated::catName(scopep,"currentPC"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,2);
        tracep->declBus(c+81,Verilated::catName(scopep,"rdAddr"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+82,Verilated::catName(scopep,"aluOperation"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+83,Verilated::catName(scopep,"aluMod"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+84,Verilated::catName(scopep,"aluMuxMode"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+85,Verilated::catName(scopep,"rdWriteEnable"," "),-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void Vjzjpcc_tb::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vjzjpcc_tb::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vjzjpcc_tb::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vjzjpcc_tb__Syms* __restrict vlSymsp = static_cast<Vjzjpcc_tb__Syms*>(userp);
    Vjzjpcc_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*127:0*/ __Vtemp3[4];
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[0]),32);
        tracep->fullIData(oldp+2,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[1]),32);
        tracep->fullIData(oldp+3,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[2]),32);
        tracep->fullIData(oldp+4,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[3]),32);
        tracep->fullIData(oldp+5,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[4]),32);
        tracep->fullIData(oldp+6,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[5]),32);
        tracep->fullIData(oldp+7,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[6]),32);
        tracep->fullIData(oldp+8,(vlTOPp->jzjpcc_tb__DOT__mmioInputs[7]),32);
        tracep->fullIData(oldp+9,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[0]),32);
        tracep->fullIData(oldp+10,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[1]),32);
        tracep->fullIData(oldp+11,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[2]),32);
        tracep->fullIData(oldp+12,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[3]),32);
        tracep->fullIData(oldp+13,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[4]),32);
        tracep->fullIData(oldp+14,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[5]),32);
        tracep->fullIData(oldp+15,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[6]),32);
        tracep->fullIData(oldp+16,(vlTOPp->jzjpcc_tb__DOT__mmioOutputs[7]),32);
        tracep->fullIData(oldp+17,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[0]),32);
        tracep->fullIData(oldp+18,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[1]),32);
        tracep->fullIData(oldp+19,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[2]),32);
        tracep->fullIData(oldp+20,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[3]),32);
        tracep->fullIData(oldp+21,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[4]),32);
        tracep->fullIData(oldp+22,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[5]),32);
        tracep->fullIData(oldp+23,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[6]),32);
        tracep->fullIData(oldp+24,(vlTOPp->jzjpcc_tb__DOT____Vcellinp__coreTest__mmioInputs[7]),32);
        tracep->fullIData(oldp+25,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[0]),32);
        tracep->fullIData(oldp+26,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[1]),32);
        tracep->fullIData(oldp+27,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[2]),32);
        tracep->fullIData(oldp+28,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[3]),32);
        tracep->fullIData(oldp+29,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[4]),32);
        tracep->fullIData(oldp+30,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[5]),32);
        tracep->fullIData(oldp+31,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[6]),32);
        tracep->fullIData(oldp+32,(vlTOPp->jzjpcc_tb__DOT____Vcellout__coreTest__mmioOutputs[7]),32);
        tracep->fullIData(oldp+33,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[0]),32);
        tracep->fullIData(oldp+34,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[1]),32);
        tracep->fullIData(oldp+35,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[2]),32);
        tracep->fullIData(oldp+36,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[3]),32);
        tracep->fullIData(oldp+37,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[4]),32);
        tracep->fullIData(oldp+38,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[5]),32);
        tracep->fullIData(oldp+39,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[6]),32);
        tracep->fullIData(oldp+40,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellinp__memoryBackend__mmioInputs[7]),32);
        tracep->fullIData(oldp+41,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode),30);
        tracep->fullSData(oldp+42,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__currentPC_decode),12);
        tracep->fullIData(oldp+43,((0x3fffffffU & (
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                     ? 
                                                    ((2U 
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
                                                     : 
                                                    ((2U 
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
                                                       + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod))))) 
                                                   >> 2U))),30);
        tracep->fullIData(oldp+44,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_memory),32);
        tracep->fullBit(oldp+45,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_memory));
        tracep->fullCData(oldp+46,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_memory),5);
        tracep->fullCData(oldp+47,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdAddr_writeback),5);
        tracep->fullBit(oldp+48,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdWriteEnable_writeback));
        tracep->fullIData(oldp+49,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback),32);
        tracep->fullIData(oldp+50,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_fetch),30);
        tracep->fullSData(oldp+51,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__nextPC),12);
        tracep->fullCData(oldp+52,((0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0xdU))),5);
        tracep->fullCData(oldp+53,((0x1fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0x12U))),5);
        tracep->fullIData(oldp+54,(((IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback)
                                     ? vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback
                                     : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__aluResult_writeback)),32);
        tracep->fullSData(oldp+55,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch),12);
        tracep->fullSData(oldp+56,((0xfffU & ((IData)(1U) 
                                              + (IData)(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__fetchStage__DOT__currentPC_fetch)))),12);
        tracep->fullIData(oldp+57,(((0x10U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                     ? 0U : ((8U & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)
                                              ? ((4U 
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
                                              : ((4U 
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
        tracep->fullIData(oldp+58,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateI),32);
        tracep->fullIData(oldp+59,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                     >> 0x1dU)))) 
                                      << 0xcU)) | (
                                                   (0x800U 
                                                    & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                       << 6U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                          >> 0x12U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                            >> 5U)))))),32);
        tracep->fullIData(oldp+60,(((0x7ff80000U & 
                                     ((- (IData)((1U 
                                                  & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                     >> 0x1dU)))) 
                                      << 0x13U)) | 
                                    ((0x7f800U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                  << 1U)) 
                                     | ((0x400U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                   >> 8U)) 
                                        | (0x3ffU & 
                                           (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                            >> 0x13U)))))),32);
        tracep->fullCData(oldp+61,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluOperation_decode),3);
        tracep->fullBit(oldp+62,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMod_decode));
        tracep->fullBit(oldp+63,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__rdWriteEnable_decode));
        tracep->fullCData(oldp+64,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__aluMuxMode_decode),2);
        tracep->fullBit(oldp+65,((1U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                        >> 0x1dU))));
        tracep->fullIData(oldp+66,(((0xfffff800U & 
                                     ((- (IData)((1U 
                                                  & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                     >> 0x1dU)))) 
                                      << 0xbU)) | (
                                                   (0x7e0U 
                                                    & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                       >> 0x12U)) 
                                                   | (0x1fU 
                                                      & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                                         >> 5U))))),32);
        tracep->fullIData(oldp+67,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__decodeStage__DOT__immediateFormer__DOT__immediateU),32);
        tracep->fullCData(oldp+68,((0x1fU & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode)),5);
        tracep->fullCData(oldp+69,((7U & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                          >> 0xaU))),3);
        tracep->fullCData(oldp+70,((0x7fU & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
                                             >> 0x17U))),7);
        tracep->fullIData(oldp+71,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA),32);
        tracep->fullIData(oldp+72,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB),32);
        tracep->fullIData(oldp+73,(((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                     ? ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                         ? ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                             ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                             : (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                         : ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
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
                                         ? ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                             ? ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                 < vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                 ? 1U
                                                 : 0U)
                                             : (VL_LTS_III(1,32,32, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA, vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                 ? 1U
                                                 : 0U))
                                         : ((1U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                             ? (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                << 
                                                (0x1fU 
                                                 & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                             : ((vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)
                                                   ? 
                                                  (~ vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                   : vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)) 
                                                + (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod)))))),32);
        tracep->fullCData(oldp+74,((3U & ((4U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                           ? ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                                   ? 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   & vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB)
                                                   : 
                                                  (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandA 
                                                   | vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__executeStage__DOT__aluOperandB))
                                               : ((1U 
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
                                           : ((2U & (IData)(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation))
                                               ? ((1U 
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
                                               : ((1U 
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
        tracep->fullIData(oldp+75,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__littleEndianInstruction),32);
        tracep->fullIData(oldp+76,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__readB),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.immediate),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs1),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rs2),32);
        tracep->fullSData(oldp+80,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.currentPC),12);
        tracep->fullCData(oldp+81,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdAddr),5);
        tracep->fullCData(oldp+82,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluOperation),3);
        tracep->fullBit(oldp+83,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMod));
        tracep->fullCData(oldp+84,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.aluMuxMode),2);
        tracep->fullBit(oldp+85,(vlSymsp->TOP__jzjpcc_tb__DOT__coreTest__DOT__executeIF.rdWriteEnable));
        tracep->fullIData(oldp+86,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile
                                   [0x1eU]),32);
        tracep->fullIData(oldp+87,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[0]),32);
        tracep->fullIData(oldp+88,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[1]),32);
        tracep->fullIData(oldp+89,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[2]),32);
        tracep->fullIData(oldp+90,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[3]),32);
        tracep->fullIData(oldp+91,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[4]),32);
        tracep->fullIData(oldp+92,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[5]),32);
        tracep->fullIData(oldp+93,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[6]),32);
        tracep->fullIData(oldp+94,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[7]),32);
        tracep->fullIData(oldp+95,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[8]),32);
        tracep->fullIData(oldp+96,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[9]),32);
        tracep->fullIData(oldp+97,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[10]),32);
        tracep->fullIData(oldp+98,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[11]),32);
        tracep->fullIData(oldp+99,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[12]),32);
        tracep->fullIData(oldp+100,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[13]),32);
        tracep->fullIData(oldp+101,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[14]),32);
        tracep->fullIData(oldp+102,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[15]),32);
        tracep->fullIData(oldp+103,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[16]),32);
        tracep->fullIData(oldp+104,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[17]),32);
        tracep->fullIData(oldp+105,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[18]),32);
        tracep->fullIData(oldp+106,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[19]),32);
        tracep->fullIData(oldp+107,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[20]),32);
        tracep->fullIData(oldp+108,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[21]),32);
        tracep->fullIData(oldp+109,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[22]),32);
        tracep->fullIData(oldp+110,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[23]),32);
        tracep->fullIData(oldp+111,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[24]),32);
        tracep->fullIData(oldp+112,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[25]),32);
        tracep->fullIData(oldp+113,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[26]),32);
        tracep->fullIData(oldp+114,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[27]),32);
        tracep->fullIData(oldp+115,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[28]),32);
        tracep->fullIData(oldp+116,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[29]),32);
        tracep->fullIData(oldp+117,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__registerFile[30]),32);
        tracep->fullBit(oldp+118,(vlTOPp->clock));
        tracep->fullIData(oldp+119,(((0U == (0x1fU 
                                             & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
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
        tracep->fullIData(oldp+120,(((0U == (0x1fU 
                                             & (vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__instruction_decode 
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
        __Vtemp3[0U] = 0x2e686578U;
        __Vtemp3[1U] = 0x74657374U;
        __Vtemp3[2U] = 0x746d702fU;
        __Vtemp3[3U] = 0x2fU;
        tracep->fullWData(oldp+121,(__Vtemp3),104);
        tracep->fullIData(oldp+125,(0xcU),32);
        tracep->fullBit(oldp+126,(0U));
        tracep->fullIData(oldp+127,(0xdU),32);
        tracep->fullBit(oldp+128,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__pcCTWriteEnable));
        tracep->fullSData(oldp+129,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__controlTransferNewPC),12);
        tracep->fullBit(oldp+130,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__stall_fetch));
        tracep->fullBit(oldp+131,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_decode));
        tracep->fullBit(oldp+132,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__flush_execute));
        tracep->fullIData(oldp+133,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memDataToWrite_execute),32);
        tracep->fullCData(oldp+134,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memByteMask_execute),4);
        tracep->fullBit(oldp+135,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__rdSource_writeback));
        tracep->fullIData(oldp+136,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryOut_writeback),32);
        tracep->fullIData(oldp+137,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memDataRead_memory),32);
        tracep->fullIData(oldp+138,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[0]),32);
        tracep->fullIData(oldp+139,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[1]),32);
        tracep->fullIData(oldp+140,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[2]),32);
        tracep->fullIData(oldp+141,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[3]),32);
        tracep->fullIData(oldp+142,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[4]),32);
        tracep->fullIData(oldp+143,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[5]),32);
        tracep->fullIData(oldp+144,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[6]),32);
        tracep->fullIData(oldp+145,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT____Vcellout__memoryBackend__mmioOutputs[7]),32);
        tracep->fullCData(oldp+146,(0U),4);
        tracep->fullIData(oldp+147,(0U),32);
        tracep->fullSData(oldp+148,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__addressB),12);
        tracep->fullBit(oldp+149,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeEnableB));
        tracep->fullCData(oldp+150,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__byteWriteMaskB),4);
        tracep->fullIData(oldp+151,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__memoryBackend__DOT__sram__DOT__writeB),32);
        tracep->fullIData(oldp+152,(0xbU),32);
        tracep->fullIData(oldp+153,(0x1000U),32);
        tracep->fullIData(oldp+154,(0xfffU),32);
        tracep->fullIData(oldp+155,(vlTOPp->jzjpcc_tb__DOT__coreTest__DOT__registerFile__DOT__unnamedblk1__DOT__i),32);
    }
}

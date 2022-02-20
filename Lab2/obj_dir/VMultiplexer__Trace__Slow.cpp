// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplexer__Syms.h"


//======================

void VMultiplexer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VMultiplexer::traceInit, &VMultiplexer::traceFull, &VMultiplexer::traceChg, this);
}
void VMultiplexer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMultiplexer* t = (VMultiplexer*)userthis;
    VMultiplexer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMultiplexer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiplexer* t = (VMultiplexer*)userthis;
    VMultiplexer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VMultiplexer::traceInitThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMultiplexer::traceFullThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiplexer::traceInitThis__1(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1,"in_1", false,-1);
        vcdp->declBit(c+9,"in_2", false,-1);
        vcdp->declBit(c+17,"in_3", false,-1);
        vcdp->declBit(c+25,"in_4", false,-1);
        vcdp->declBit(c+33,"in_5", false,-1);
        vcdp->declBit(c+41,"in_6", false,-1);
        vcdp->declBit(c+49,"in_7", false,-1);
        vcdp->declBit(c+57,"in_8", false,-1);
        vcdp->declBit(c+65,"in_9", false,-1);
        vcdp->declBit(c+73,"in_10", false,-1);
        vcdp->declBit(c+81,"s_1", false,-1);
        vcdp->declBit(c+89,"s_2", false,-1);
        vcdp->declBit(c+97,"s_3", false,-1);
        vcdp->declBit(c+105,"s_4", false,-1);
        vcdp->declBit(c+113,"out", false,-1);
        vcdp->declBit(c+1,"Multiplexer in_1", false,-1);
        vcdp->declBit(c+9,"Multiplexer in_2", false,-1);
        vcdp->declBit(c+17,"Multiplexer in_3", false,-1);
        vcdp->declBit(c+25,"Multiplexer in_4", false,-1);
        vcdp->declBit(c+33,"Multiplexer in_5", false,-1);
        vcdp->declBit(c+41,"Multiplexer in_6", false,-1);
        vcdp->declBit(c+49,"Multiplexer in_7", false,-1);
        vcdp->declBit(c+57,"Multiplexer in_8", false,-1);
        vcdp->declBit(c+65,"Multiplexer in_9", false,-1);
        vcdp->declBit(c+73,"Multiplexer in_10", false,-1);
        vcdp->declBit(c+81,"Multiplexer s_1", false,-1);
        vcdp->declBit(c+89,"Multiplexer s_2", false,-1);
        vcdp->declBit(c+97,"Multiplexer s_3", false,-1);
        vcdp->declBit(c+105,"Multiplexer s_4", false,-1);
        vcdp->declBit(c+113,"Multiplexer out", false,-1);
        vcdp->declBit(c+121,"Multiplexer s_1_not", false,-1);
        vcdp->declBit(c+129,"Multiplexer s_2_not", false,-1);
        vcdp->declBit(c+137,"Multiplexer s_3_not", false,-1);
        vcdp->declBit(c+145,"Multiplexer s_4_not", false,-1);
        vcdp->declBit(c+153,"Multiplexer i1", false,-1);
        vcdp->declBit(c+161,"Multiplexer i2", false,-1);
        vcdp->declBit(c+169,"Multiplexer i3", false,-1);
        vcdp->declBit(c+177,"Multiplexer i4", false,-1);
        vcdp->declBit(c+185,"Multiplexer i5", false,-1);
        vcdp->declBit(c+193,"Multiplexer i6", false,-1);
        vcdp->declBit(c+201,"Multiplexer i7", false,-1);
        vcdp->declBit(c+209,"Multiplexer i8", false,-1);
        vcdp->declBit(c+217,"Multiplexer i9", false,-1);
        vcdp->declBit(c+225,"Multiplexer i10", false,-1);
    }
}

void VMultiplexer::traceFullThis__1(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->in_1));
        vcdp->fullBit(c+9,(vlTOPp->in_2));
        vcdp->fullBit(c+17,(vlTOPp->in_3));
        vcdp->fullBit(c+25,(vlTOPp->in_4));
        vcdp->fullBit(c+33,(vlTOPp->in_5));
        vcdp->fullBit(c+41,(vlTOPp->in_6));
        vcdp->fullBit(c+49,(vlTOPp->in_7));
        vcdp->fullBit(c+57,(vlTOPp->in_8));
        vcdp->fullBit(c+65,(vlTOPp->in_9));
        vcdp->fullBit(c+73,(vlTOPp->in_10));
        vcdp->fullBit(c+81,(vlTOPp->s_1));
        vcdp->fullBit(c+89,(vlTOPp->s_2));
        vcdp->fullBit(c+97,(vlTOPp->s_3));
        vcdp->fullBit(c+105,(vlTOPp->s_4));
        vcdp->fullBit(c+113,(vlTOPp->out));
        vcdp->fullBit(c+121,((1U & (~ (IData)(vlTOPp->s_1)))));
        vcdp->fullBit(c+129,((1U & (~ (IData)(vlTOPp->s_2)))));
        vcdp->fullBit(c+137,((1U & (~ (IData)(vlTOPp->s_3)))));
        vcdp->fullBit(c+145,((1U & (~ (IData)(vlTOPp->s_4)))));
        vcdp->fullBit(c+153,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (~ (IData)(vlTOPp->s_1))) 
                              & (IData)(vlTOPp->in_1))));
        vcdp->fullBit(c+161,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_2))));
        vcdp->fullBit(c+169,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (IData)(vlTOPp->s_2)) 
                               & (~ (IData)(vlTOPp->s_1))) 
                              & (IData)(vlTOPp->in_3))));
        vcdp->fullBit(c+177,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (IData)(vlTOPp->s_2)) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_4))));
        vcdp->fullBit(c+185,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (IData)(vlTOPp->s_3)) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (~ (IData)(vlTOPp->s_1))) 
                              & (IData)(vlTOPp->in_5))));
        vcdp->fullBit(c+193,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (IData)(vlTOPp->s_3)) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_6))));
        vcdp->fullBit(c+201,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (IData)(vlTOPp->s_3)) 
                                & (IData)(vlTOPp->s_2)) 
                               & (~ (IData)(vlTOPp->s_1))) 
                              & (IData)(vlTOPp->in_7))));
        vcdp->fullBit(c+209,((((((~ (IData)(vlTOPp->s_4)) 
                                 & (IData)(vlTOPp->s_3)) 
                                & (IData)(vlTOPp->s_2)) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_8))));
        vcdp->fullBit(c+217,((((((IData)(vlTOPp->s_4) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (~ (IData)(vlTOPp->s_1))) 
                              & (IData)(vlTOPp->in_9))));
        vcdp->fullBit(c+225,((((((IData)(vlTOPp->s_4) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_10))));
    }
}

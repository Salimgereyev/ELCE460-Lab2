// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplexer__Syms.h"


//======================

void VMultiplexer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiplexer* t = (VMultiplexer*)userthis;
    VMultiplexer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VMultiplexer::traceChgThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiplexer::traceChgThis__2(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->in_1));
        vcdp->chgBit(c+9,(vlTOPp->in_2));
        vcdp->chgBit(c+17,(vlTOPp->in_3));
        vcdp->chgBit(c+25,(vlTOPp->in_4));
        vcdp->chgBit(c+33,(vlTOPp->in_5));
        vcdp->chgBit(c+41,(vlTOPp->in_6));
        vcdp->chgBit(c+49,(vlTOPp->in_7));
        vcdp->chgBit(c+57,(vlTOPp->in_8));
        vcdp->chgBit(c+65,(vlTOPp->in_9));
        vcdp->chgBit(c+73,(vlTOPp->in_10));
        vcdp->chgBit(c+81,(vlTOPp->s_1));
        vcdp->chgBit(c+89,(vlTOPp->s_2));
        vcdp->chgBit(c+97,(vlTOPp->s_3));
        vcdp->chgBit(c+105,(vlTOPp->s_4));
        vcdp->chgBit(c+113,(vlTOPp->out));
        vcdp->chgBit(c+121,((1U & (~ (IData)(vlTOPp->s_1)))));
        vcdp->chgBit(c+129,((1U & (~ (IData)(vlTOPp->s_2)))));
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->s_3)))));
        vcdp->chgBit(c+145,((1U & (~ (IData)(vlTOPp->s_4)))));
        vcdp->chgBit(c+153,((((((~ (IData)(vlTOPp->s_4)) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_1))));
        vcdp->chgBit(c+161,((((((~ (IData)(vlTOPp->s_4)) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (IData)(vlTOPp->s_1)) 
                             & (IData)(vlTOPp->in_2))));
        vcdp->chgBit(c+169,((((((~ (IData)(vlTOPp->s_4)) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (IData)(vlTOPp->s_2)) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_3))));
        vcdp->chgBit(c+177,((((((~ (IData)(vlTOPp->s_4)) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (IData)(vlTOPp->s_2)) 
                              & (IData)(vlTOPp->s_1)) 
                             & (IData)(vlTOPp->in_4))));
        vcdp->chgBit(c+185,((((((~ (IData)(vlTOPp->s_4)) 
                                & (IData)(vlTOPp->s_3)) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_5))));
        vcdp->chgBit(c+193,((((((~ (IData)(vlTOPp->s_4)) 
                                & (IData)(vlTOPp->s_3)) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (IData)(vlTOPp->s_1)) 
                             & (IData)(vlTOPp->in_6))));
        vcdp->chgBit(c+201,((((((~ (IData)(vlTOPp->s_4)) 
                                & (IData)(vlTOPp->s_3)) 
                               & (IData)(vlTOPp->s_2)) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_7))));
        vcdp->chgBit(c+209,((((((~ (IData)(vlTOPp->s_4)) 
                                & (IData)(vlTOPp->s_3)) 
                               & (IData)(vlTOPp->s_2)) 
                              & (IData)(vlTOPp->s_1)) 
                             & (IData)(vlTOPp->in_8))));
        vcdp->chgBit(c+217,((((((IData)(vlTOPp->s_4) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_9))));
        vcdp->chgBit(c+225,((((((IData)(vlTOPp->s_4) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (~ (IData)(vlTOPp->s_2))) 
                              & (IData)(vlTOPp->s_1)) 
                             & (IData)(vlTOPp->in_10))));
    }
}

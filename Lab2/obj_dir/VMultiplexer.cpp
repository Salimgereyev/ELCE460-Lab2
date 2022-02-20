// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplexer.h for the primary calling header

#include "VMultiplexer.h"
#include "VMultiplexer__Syms.h"

//==========

VL_CTOR_IMP(VMultiplexer) {
    VMultiplexer__Syms* __restrict vlSymsp = __VlSymsp = new VMultiplexer__Syms(this, name());
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMultiplexer::__Vconfigure(VMultiplexer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMultiplexer::~VMultiplexer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VMultiplexer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiplexer::eval\n"); );
    VMultiplexer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Multiplexer.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMultiplexer::_eval_initial_loop(VMultiplexer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Multiplexer.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VMultiplexer::_combo__TOP__1(VMultiplexer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_combo__TOP__1\n"); );
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = ((((((((((((((~ (IData)(vlTOPp->s_4)) 
                               & (~ (IData)(vlTOPp->s_3))) 
                              & (~ (IData)(vlTOPp->s_2))) 
                             & (~ (IData)(vlTOPp->s_1))) 
                            & (IData)(vlTOPp->in_1)) 
                           | (((((~ (IData)(vlTOPp->s_4)) 
                                 & (~ (IData)(vlTOPp->s_3))) 
                                & (~ (IData)(vlTOPp->s_2))) 
                               & (IData)(vlTOPp->s_1)) 
                              & (IData)(vlTOPp->in_2))) 
                          | (((((~ (IData)(vlTOPp->s_4)) 
                                & (~ (IData)(vlTOPp->s_3))) 
                               & (IData)(vlTOPp->s_2)) 
                              & (~ (IData)(vlTOPp->s_1))) 
                             & (IData)(vlTOPp->in_3))) 
                         | (((((~ (IData)(vlTOPp->s_4)) 
                               & (~ (IData)(vlTOPp->s_3))) 
                              & (IData)(vlTOPp->s_2)) 
                             & (IData)(vlTOPp->s_1)) 
                            & (IData)(vlTOPp->in_4))) 
                        | (((((~ (IData)(vlTOPp->s_4)) 
                              & (IData)(vlTOPp->s_3)) 
                             & (~ (IData)(vlTOPp->s_2))) 
                            & (~ (IData)(vlTOPp->s_1))) 
                           & (IData)(vlTOPp->in_5))) 
                       | (((((~ (IData)(vlTOPp->s_4)) 
                             & (IData)(vlTOPp->s_3)) 
                            & (~ (IData)(vlTOPp->s_2))) 
                           & (IData)(vlTOPp->s_1)) 
                          & (IData)(vlTOPp->in_6))) 
                      | (((((~ (IData)(vlTOPp->s_4)) 
                            & (IData)(vlTOPp->s_3)) 
                           & (IData)(vlTOPp->s_2)) 
                          & (~ (IData)(vlTOPp->s_1))) 
                         & (IData)(vlTOPp->in_7))) 
                     | (((((~ (IData)(vlTOPp->s_4)) 
                           & (IData)(vlTOPp->s_3)) 
                          & (IData)(vlTOPp->s_2)) & (IData)(vlTOPp->s_1)) 
                        & (IData)(vlTOPp->in_8))) | 
                    (((((IData)(vlTOPp->s_4) & (~ (IData)(vlTOPp->s_3))) 
                       & (~ (IData)(vlTOPp->s_2))) 
                      & (~ (IData)(vlTOPp->s_1))) & (IData)(vlTOPp->in_9))) 
                   | (((((IData)(vlTOPp->s_4) & (~ (IData)(vlTOPp->s_3))) 
                        & (~ (IData)(vlTOPp->s_2))) 
                       & (IData)(vlTOPp->s_1)) & (IData)(vlTOPp->in_10)));
}

void VMultiplexer::_eval(VMultiplexer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_eval\n"); );
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VMultiplexer::_eval_initial(VMultiplexer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_eval_initial\n"); );
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiplexer::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::final\n"); );
    // Variables
    VMultiplexer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMultiplexer::_eval_settle(VMultiplexer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_eval_settle\n"); );
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VMultiplexer::_change_request(VMultiplexer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_change_request\n"); );
    VMultiplexer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMultiplexer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((in_1 & 0xfeU))) {
        Verilated::overWidthError("in_1");}
    if (VL_UNLIKELY((in_2 & 0xfeU))) {
        Verilated::overWidthError("in_2");}
    if (VL_UNLIKELY((in_3 & 0xfeU))) {
        Verilated::overWidthError("in_3");}
    if (VL_UNLIKELY((in_4 & 0xfeU))) {
        Verilated::overWidthError("in_4");}
    if (VL_UNLIKELY((in_5 & 0xfeU))) {
        Verilated::overWidthError("in_5");}
    if (VL_UNLIKELY((in_6 & 0xfeU))) {
        Verilated::overWidthError("in_6");}
    if (VL_UNLIKELY((in_7 & 0xfeU))) {
        Verilated::overWidthError("in_7");}
    if (VL_UNLIKELY((in_8 & 0xfeU))) {
        Verilated::overWidthError("in_8");}
    if (VL_UNLIKELY((in_9 & 0xfeU))) {
        Verilated::overWidthError("in_9");}
    if (VL_UNLIKELY((in_10 & 0xfeU))) {
        Verilated::overWidthError("in_10");}
    if (VL_UNLIKELY((s_1 & 0xfeU))) {
        Verilated::overWidthError("s_1");}
    if (VL_UNLIKELY((s_2 & 0xfeU))) {
        Verilated::overWidthError("s_2");}
    if (VL_UNLIKELY((s_3 & 0xfeU))) {
        Verilated::overWidthError("s_3");}
    if (VL_UNLIKELY((s_4 & 0xfeU))) {
        Verilated::overWidthError("s_4");}
}
#endif  // VL_DEBUG

void VMultiplexer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplexer::_ctor_var_reset\n"); );
    // Body
    in_1 = VL_RAND_RESET_I(1);
    in_2 = VL_RAND_RESET_I(1);
    in_3 = VL_RAND_RESET_I(1);
    in_4 = VL_RAND_RESET_I(1);
    in_5 = VL_RAND_RESET_I(1);
    in_6 = VL_RAND_RESET_I(1);
    in_7 = VL_RAND_RESET_I(1);
    in_8 = VL_RAND_RESET_I(1);
    in_9 = VL_RAND_RESET_I(1);
    in_10 = VL_RAND_RESET_I(1);
    s_1 = VL_RAND_RESET_I(1);
    s_2 = VL_RAND_RESET_I(1);
    s_3 = VL_RAND_RESET_I(1);
    s_4 = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}

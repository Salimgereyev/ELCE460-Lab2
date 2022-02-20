// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMULTIPLEXER_H_
#define _VMULTIPLEXER_H_  // guard

#include "verilated.h"

//==========

class VMultiplexer__Syms;
class VMultiplexer_VerilatedVcd;


//----------

VL_MODULE(VMultiplexer) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(in_1,0,0);
    VL_IN8(in_2,0,0);
    VL_IN8(in_3,0,0);
    VL_IN8(in_4,0,0);
    VL_IN8(in_5,0,0);
    VL_IN8(in_6,0,0);
    VL_IN8(in_7,0,0);
    VL_IN8(in_8,0,0);
    VL_IN8(in_9,0,0);
    VL_IN8(in_10,0,0);
    VL_IN8(s_1,0,0);
    VL_IN8(s_2,0,0);
    VL_IN8(s_3,0,0);
    VL_IN8(s_4,0,0);
    VL_OUT8(out,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMultiplexer__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMultiplexer);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VMultiplexer(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMultiplexer();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMultiplexer__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMultiplexer__Syms* symsp, bool first);
  private:
    static QData _change_request(VMultiplexer__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VMultiplexer__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VMultiplexer__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VMultiplexer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VMultiplexer__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VMultiplexer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

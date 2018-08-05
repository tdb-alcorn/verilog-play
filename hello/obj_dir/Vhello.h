// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vhello_H_
#define _Vhello_H_

#include "verilated_heavy.h"

class Vhello__Syms;

//----------

VL_MODULE(Vhello) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vhello__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vhello);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vhello(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vhello();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vhello__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vhello__Syms* symsp, bool first);
  private:
    static QData _change_request(Vhello__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vhello__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vhello__Syms* __restrict vlSymsp);
    static void _eval_settle(Vhello__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vhello__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard

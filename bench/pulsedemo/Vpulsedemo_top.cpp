// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpulsedemo_top.h for the primary calling header

#include "Vpulsedemo_top.h"    // For This
#include "Vpulsedemo_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vpulsedemo_top) {
    Vpulsedemo_top__Syms* __restrict vlSymsp = __VlSymsp = new Vpulsedemo_top__Syms(this, name());
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpulsedemo_top::__Vconfigure(Vpulsedemo_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpulsedemo_top::~Vpulsedemo_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vpulsedemo_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpulsedemo_top::eval\n"); );
    Vpulsedemo_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
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
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vpulsedemo_top::_eval_initial_loop(Vpulsedemo_top__Syms* __restrict vlSymsp) {
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
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vpulsedemo_top::_initial__TOP__1(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_initial__TOP__1\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../rtl//pulsedemo_top.v:6
    vlTOPp->pulsedemo_top__DOT__pulse_int = 0U;
    // INITIAL at ../rtl//pulsedemo_top.v:7
    vlTOPp->pulsedemo_top__DOT__pulse2_int = 0U;
    // INITIAL at ../rtl//pulsedemo_top.v:5
    vlTOPp->pulsedemo_top__DOT__counter = 0U;
}

VL_INLINE_OPT void Vpulsedemo_top::_sequent__TOP__2(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_sequent__TOP__2\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vdly__pulsedemo_top__DOT__counter,10,0);
    // Body
    __Vdly__pulsedemo_top__DOT__counter = vlTOPp->pulsedemo_top__DOT__counter;
    // ALWAYS at ../rtl//pulsedemo_top.v:24
    vlTOPp->pulsedemo_top__DOT__pulse2_int = 0U;
    if ((0x1f4U < (IData)(vlTOPp->pulsedemo_top__DOT__counter))) {
	vlTOPp->pulsedemo_top__DOT__pulse2_int = 1U;
    }
    // ALWAYS at ../rtl//pulsedemo_top.v:9
    __Vdly__pulsedemo_top__DOT__counter = (0x7ffU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->pulsedemo_top__DOT__counter)));
    vlTOPp->pulsedemo_top__DOT__pulse_int = 1U;
    if ((6U < (IData)(vlTOPp->pulsedemo_top__DOT__counter))) {
	vlTOPp->pulsedemo_top__DOT__pulse_int = 0U;
    }
    if ((0x320U < (IData)(vlTOPp->pulsedemo_top__DOT__counter))) {
	__Vdly__pulsedemo_top__DOT__counter = 0U;
    }
    vlTOPp->pulsedemo_top__DOT__counter = __Vdly__pulsedemo_top__DOT__counter;
    vlTOPp->PULSE2 = vlTOPp->pulsedemo_top__DOT__pulse2_int;
    vlTOPp->PULSE = vlTOPp->pulsedemo_top__DOT__pulse_int;
}

void Vpulsedemo_top::_settle__TOP__3(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_settle__TOP__3\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PULSE = vlTOPp->pulsedemo_top__DOT__pulse_int;
    vlTOPp->PULSE2 = vlTOPp->pulsedemo_top__DOT__pulse2_int;
}

void Vpulsedemo_top::_eval(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_eval\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLOCK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLOCK)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLOCK = vlTOPp->CLOCK;
}

void Vpulsedemo_top::_eval_initial(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_eval_initial\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vpulsedemo_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::final\n"); );
    // Variables
    Vpulsedemo_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpulsedemo_top::_eval_settle(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_eval_settle\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vpulsedemo_top::_change_request(Vpulsedemo_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_change_request\n"); );
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpulsedemo_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLOCK & 0xfeU))) {
	Verilated::overWidthError("CLOCK");}
}
#endif // VL_DEBUG

void Vpulsedemo_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpulsedemo_top::_ctor_var_reset\n"); );
    // Body
    CLOCK = VL_RAND_RESET_I(1);
    PULSE = VL_RAND_RESET_I(1);
    PULSE2 = VL_RAND_RESET_I(1);
    pulsedemo_top__DOT__counter = VL_RAND_RESET_I(11);
    pulsedemo_top__DOT__pulse_int = VL_RAND_RESET_I(1);
    pulsedemo_top__DOT__pulse2_int = VL_RAND_RESET_I(1);
    __Vclklast__TOP__CLOCK = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

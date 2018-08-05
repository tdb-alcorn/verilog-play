// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlatch_top.h for the primary calling header

#include "Vlatch_top.h"        // For This
#include "Vlatch_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vlatch_top) {
    Vlatch_top__Syms* __restrict vlSymsp = __VlSymsp = new Vlatch_top__Syms(this, name());
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vlatch_top::__Vconfigure(Vlatch_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vlatch_top::~Vlatch_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vlatch_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlatch_top::eval\n"); );
    Vlatch_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vlatch_top::_eval_initial_loop(Vlatch_top__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vlatch_top::_sequent__TOP__1(Vlatch_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_sequent__TOP__1\n"); );
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl//latch_top.v:6
    if (vlTOPp->WRITE) {
	vlTOPp->OUT = vlTOPp->DATA;
    }
}

void Vlatch_top::_eval(Vlatch_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_eval\n"); );
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLOCK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLOCK)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLOCK = vlTOPp->CLOCK;
}

void Vlatch_top::_eval_initial(Vlatch_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_eval_initial\n"); );
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vlatch_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::final\n"); );
    // Variables
    Vlatch_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vlatch_top::_eval_settle(Vlatch_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_eval_settle\n"); );
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vlatch_top::_change_request(Vlatch_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_change_request\n"); );
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vlatch_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLOCK & 0xfeU))) {
	Verilated::overWidthError("CLOCK");}
    if (VL_UNLIKELY((WRITE & 0xfeU))) {
	Verilated::overWidthError("WRITE");}
    if (VL_UNLIKELY((DATA & 0xfeU))) {
	Verilated::overWidthError("DATA");}
}
#endif // VL_DEBUG

void Vlatch_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlatch_top::_ctor_var_reset\n"); );
    // Body
    CLOCK = VL_RAND_RESET_I(1);
    WRITE = VL_RAND_RESET_I(1);
    DATA = VL_RAND_RESET_I(1);
    OUT = VL_RAND_RESET_I(1);
    __Vclklast__TOP__CLOCK = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

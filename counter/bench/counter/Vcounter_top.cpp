// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_top.h for the primary calling header

#include "Vcounter_top.h"      // For This
#include "Vcounter_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcounter_top) {
    Vcounter_top__Syms* __restrict vlSymsp = __VlSymsp = new Vcounter_top__Syms(this, name());
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcounter_top::__Vconfigure(Vcounter_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcounter_top::~Vcounter_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcounter_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_top::eval\n"); );
    Vcounter_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vcounter_top::_eval_initial_loop(Vcounter_top__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vcounter_top::_sequent__TOP__1(Vcounter_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_sequent__TOP__1\n"); );
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__OUT,7,0);
    // Body
    __Vdly__OUT = vlTOPp->OUT;
    // ALWAYS at ../rtl//counter_top.v:16
    __Vdly__OUT = (0xffU & ((IData)(vlTOPp->RESET) ? 0U
			     : ((IData)(vlTOPp->CONTROL)
				 ? ((IData)(1U) + (IData)(vlTOPp->OUT))
				 : ((IData)(vlTOPp->OUT) 
				    - (IData)(1U)))));
    vlTOPp->OUT = __Vdly__OUT;
}

void Vcounter_top::_eval(Vcounter_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_eval\n"); );
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLOCK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLOCK)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLOCK = vlTOPp->CLOCK;
}

void Vcounter_top::_eval_initial(Vcounter_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_eval_initial\n"); );
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcounter_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::final\n"); );
    // Variables
    Vcounter_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcounter_top::_eval_settle(Vcounter_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_eval_settle\n"); );
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData Vcounter_top::_change_request(Vcounter_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_change_request\n"); );
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcounter_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CONTROL & 0xfeU))) {
	Verilated::overWidthError("CONTROL");}
    if (VL_UNLIKELY((CLOCK & 0xfeU))) {
	Verilated::overWidthError("CLOCK");}
    if (VL_UNLIKELY((RESET & 0xfeU))) {
	Verilated::overWidthError("RESET");}
}
#endif // VL_DEBUG

void Vcounter_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_top::_ctor_var_reset\n"); );
    // Body
    CONTROL = VL_RAND_RESET_I(1);
    CLOCK = VL_RAND_RESET_I(1);
    RESET = VL_RAND_RESET_I(1);
    OUT = VL_RAND_RESET_I(8);
    __Vclklast__TOP__CLOCK = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

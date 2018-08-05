// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwofour_top.h for the primary calling header

#include "Vtwofour_top.h"      // For This
#include "Vtwofour_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtwofour_top) {
    Vtwofour_top__Syms* __restrict vlSymsp = __VlSymsp = new Vtwofour_top__Syms(this, name());
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtwofour_top::__Vconfigure(Vtwofour_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtwofour_top::~Vtwofour_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtwofour_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtwofour_top::eval\n"); );
    Vtwofour_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vtwofour_top::_eval_initial_loop(Vtwofour_top__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vtwofour_top::_combo__TOP__1(Vtwofour_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_combo__TOP__1\n"); );
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../rtl//twofour_top.v:6
    vlTOPp->I = 0U;
    if ((0U == (IData)(vlTOPp->N))) {
	vlTOPp->I = 1U;
    } else {
	if ((1U == (IData)(vlTOPp->N))) {
	    vlTOPp->I = 2U;
	} else {
	    if ((2U == (IData)(vlTOPp->N))) {
		vlTOPp->I = 4U;
	    } else {
		if ((3U == (IData)(vlTOPp->N))) {
		    vlTOPp->I = 8U;
		}
	    }
	}
    }
}

void Vtwofour_top::_eval(Vtwofour_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_eval\n"); );
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vtwofour_top::_eval_initial(Vtwofour_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_eval_initial\n"); );
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtwofour_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::final\n"); );
    // Variables
    Vtwofour_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtwofour_top::_eval_settle(Vtwofour_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_eval_settle\n"); );
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vtwofour_top::_change_request(Vtwofour_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_change_request\n"); );
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtwofour_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((N & 0xf8U))) {
	Verilated::overWidthError("N");}
}
#endif // VL_DEBUG

void Vtwofour_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwofour_top::_ctor_var_reset\n"); );
    // Body
    N = VL_RAND_RESET_I(3);
    I = VL_RAND_RESET_I(5);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

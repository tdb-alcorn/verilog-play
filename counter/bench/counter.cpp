#include <verilated.h>  // defines common routines
#include "Vcounter_top.h"

#include "verilated_vcd_c.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

Vcounter_top *uut;  // instantiation of module
vluint64_t main_time = 0;  // current simulation time

double sc_time_stamp() {  // called by $time in Verilog
    return main_time;  // converts to double to match what SystemC does
}

int main(int argc, char** argv) {
    // turn on trace?
    bool vcdTrace = true;
    VerilatedVcdC* tfp = NULL;

    Verilated::commandArgs(argc, argv);  // remember args
    uut = new Vcounter_top;  // create instance

    uut->eval();
    uut->eval();

    if (vcdTrace) {
        Verilated::traceEverOn(true);

        tfp = new VerilatedVcdC;
        uut->trace(tfp, 99);

        std::string vcdname = argv[0];
        vcdname += ".vcd";
        std::cout << vcdname << std::endl;
        tfp->open(vcdname.c_str());
    }

    uut->CLOCK = 0;
    uut->eval();

    while (!Verilated::gotFinish()) {
        uut->CLOCK = uut->CLOCK ? 0 : 1;  // toggle clock

        uut->CONTROL = 0;
        if ((main_time % 20) >= 4) {
            uut->CONTROL = 1;
        }

        uut->RESET = 0;
        if ((main_time % 100) == 0) {
            uut->RESET = 1;
        }

        uut->eval();  // evaluate model

        if (tfp != NULL) {
            tfp->dump(main_time);
        }
        main_time++;  // increment time
    }

    uut->final();  // finish simulating

    if (tfp != NULL) {
        tfp->close();
        delete tfp;
    }

    delete uut;

    return 0;
}
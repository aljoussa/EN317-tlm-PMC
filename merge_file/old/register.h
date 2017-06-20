#include "systemc.h"

SC_MODULE (PMC_reg){

    SC_CTOR(PMC_reg);

    void Reset();

    uint32_t Reg[28];
};

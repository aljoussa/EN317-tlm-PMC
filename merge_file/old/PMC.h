#include "systemc.h"

#define PMC_SCER     Reg[0]
#define PMC_SCDR     Reg[1]
#define PMC_SCSR     Reg[2]
#define PMC_PCER0    Reg[3]
#define PMC_PCDR0    Reg[4]
#define PMC_PCSR0    Reg[5]
#define CKGR_UCKR    Reg[6]
#define CKGR_MOR     Reg[7]
#define CKGR_MCFR    Reg[8]
#define CKGR_PLLAR   Reg[9]
#define PMC_MCKR     Reg[10]
#define PMC_USB      Reg[11]
#define PMC_PCK0     Reg[12]
#define PMC_PCK1     Reg[13]
#define PMC_PCK2     Reg[14]
#define PMC_IER      Reg[15]
#define PMC_IDR      Reg[16]
#define PMC_SR       Reg[17]
#define PMC_IMR      Reg[18]
#define PMC_FSMR     Reg[19]
#define PMC_FSPR     Reg[20]
#define PMC_FOCR     Reg[21]
#define PMC_WPMR     Reg[22]
#define PMC_WPSR     Reg[23]
#define PMC_PCER1    Reg[24]
#define PMC_PCDR1    Reg[25]
#define PMC_PCSR1    Reg[26]
#define PMC_PCR      Reg[27]

SC_MODULE (Toggle_Component){
    SC_CTOR(Toggle_Component);

    void On();
    void Off();
    bool Activated;
    sc_out< sc_bit> out_comp;
};

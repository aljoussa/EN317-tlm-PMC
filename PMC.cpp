// Architecture PMC
// Registres
// Entrées / Sorties
// Fonctions


#include "systemc.h"
#include <iostream>

#define PMC_SCER  table.Reg[0]
#define PMC_SCDR  table.Reg[1]
#define PMC_SCSR  table.Reg[2]
#define PMC_PCER0 table.Reg[3]
#define PMC_PCDR0 table.Reg[4]
#define PMC_PCSR0  table.Reg[5]
#define CKGR_UCKR  table.Reg[6]
#define CKGR_MOR  table.Reg[7]
#define CKGR_MCFR  table.Reg[8]
#define CKGR_PLLAR  table.Reg[9]
#define PMC_MCKR  table.Reg[10]
#define PMC_USB  table.Reg[11]
#define PMC_PCK0  table.Reg[12]
#define PMC_PCK1  table.Reg[13]
#define PMC_PCK2  table.Reg[14]
#define PMC_IER  table.Reg[15]
#define PMC_IDR  table.Reg[16]
#define PMC_SR  table.Reg[17]
#define PMC_IMR  table.Reg[18]
#define PMC_FSMR  table.Reg[19]
#define PMC_FSPR  table.Reg[20]
#define PMC_FOCR  table.Reg[21]
#define PMC_WPMR  table.Reg[22]
#define PMC_WPSR  table.Reg[23]
#define PMC_PCER1  table.Reg[24]
#define PMC_PCDR1  table.Reg[25]
#define PMC_PCSR1  table.Reg[26]
#define PMC_PCR  table.Reg[27]

#define Logic_True sc_logic(1)
#define Logic_False sc_logic(0)


// Déclaration Registres

SC_MODULE (Registre){
    SC_CTOR(Registre);

    void Reset();

    uint32_t Reg[28];
};

Registre::Registre(sc_module_name name) : sc_module(name)
{
    SC_METHOD (Reset);
    Registre::Reset();
}

void Registre::Reset()
{
  Reg[0]  = 0x00000000;
  Reg[1]  = 0x00000000;
  Reg[2]  = 0x00000001;
  Reg[3]  = 0x00000000;
  Reg[4]  = 0x00000000;
  Reg[5]  = 0x00000000;
  Reg[6]  = 0x10200800;
  Reg[7]  = 0x00000001;
  Reg[8]  = 0x00000000;
  Reg[9]  = 0x00003F00;
  Reg[10] = 0x00000000;
  Reg[11] = 0x00000001;
  Reg[12] = 0x00000000;
  Reg[13] = 0x00000000;
  Reg[14] = 0x00000000;
  Reg[15] = 0x00000000;
  Reg[16] = 0x00000000;
  Reg[17] = 0x00010008;
  Reg[18] = 0x00000000;
  Reg[19] = 0x00000000;
  Reg[20] = 0x00000000;
  Reg[21] = 0x00000000;
  Reg[22] = 0x00000000;
  Reg[23] = 0x00000000;
  Reg[24] = 0x00000000;
  Reg[25] = 0x00000000;
  Reg[26] = 0x00000000;
  Reg[27] = 0x00000000;
}

// Entrées Sorties
SC_MODULE (Toggle_Component){
    SC_CTOR(Toggle_Component);

    void On();
    void Off();

    bool Activated;
    sc_out< sc_bit> out_comp;
};

Toggle_Component::Toggle_Component(sc_module_name name) : sc_module(name)
{
    SC_METHOD (On);
    SC_METHOD (Off);
    Toggle_Component::Off();
}

void Toggle_Component::On()
{
  this->Activated = true;
  this->out_comp = sc_bit('1');
}

void Toggle_Component::Off()
{
  this->Activated = false;
  this->out_comp = sc_bit('0');
}

// Registres
int sc_main(int, char**){

  Registre table("Registres");
  //cout <<  CKGR_MOR << endl;

// Déclarations I/O
// 3 sorties composants (1 pour chaque)
// UART / Timer / GPIO
Toggle_Component UART_COMP("UART_COMP");
Toggle_Component Timer("Timer");
Toggle_Component GPIO("GPIO");
// N sorties materielles
//
  return 0;
}

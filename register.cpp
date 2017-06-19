#include "register.h"

PMC_reg::PMC_reg(sc_module_name name) : sc_module(name)
{
    SC_METHOD (Reset);
    PMC_reg::Reset();
}

void PMC_reg::Reset()
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

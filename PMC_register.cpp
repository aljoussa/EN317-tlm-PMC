#include "PMC_register.h"

PMC_register::PMC_register() {
  this->reset();
}
PMC_register::~PMC_register() {}

void PMC_register::reset() {
  for ( int i= 0; i< 28; i++) {
    switch(i) {
      case 2: case 7: case 11:
                  regv[i]   = 0x00000001;    break;
      case 6:     regv[6]   = 0x10200800;    break;
      //case 7:     reg[7]   = 0x00000001;    break;
      case 9:     regv[9]   = 0x00003F00;    break;
      //case 11:    reg[11]  = 0x00000001;    break;
      case 17:    regv[17]  = 0x00010008;    break;
      default:    regv[i]   = 0x00000000;    break;
    }
  }
}

uint32_t PMC_register::reg(int idx) {
  return this->reg(idx);
}

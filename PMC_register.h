#include "systemc.h"
//#include "PMC_config.h"

#ifndef PMC_REGISTER_H
#define PMC_REGISTER_H

class PMC_register {

  PMC_register();
  ~PMC_register();

  void reset();

  uint32_t reg[28];
};

#endif

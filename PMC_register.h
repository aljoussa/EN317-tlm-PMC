#include "systemc.h"
//#include "PMC_config.h"

#ifndef PMC_REGISTER_H
#define PMC_REGISTER_H

class PMC_register {
public:
  PMC_register();
  ~PMC_register();

  void reset();

  uint32_t reg(int idx);
  uint32_t regv[28];
};

#endif

#include "PMC.h"

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

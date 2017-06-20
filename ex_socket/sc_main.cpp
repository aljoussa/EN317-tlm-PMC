#include "systemc.h"
#include "top_module.h"

int sc_main(int argc, char* argv[])
{
  Top top("top");
  sc_start();
  return 0;
}

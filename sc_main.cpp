#include "systemc.h"

//#include "top_module.h"
#include "PMC_module.h"

//#include "socket.cpp"

int sc_main(int argc, char* argv[])
{
  //Top top("top");
  PMC_module PMC_tb("PMC_tb");
  sc_start();
  return 0;
}

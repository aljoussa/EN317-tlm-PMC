#include "systemc.h"

//#include "top_module.h"
#include "PMC_module.h"

int sc_main(int argc, char* argv[])
{
  //Top top("top");
  cout << "création du PMC_module" << endl;
  PMC_module PMC_tb("PMC_tb");
  cout << "lancement de la modélisation" << endl;
  sc_start();
  return 0;
}

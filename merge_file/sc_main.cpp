#include "systemc.h"
#include "PMC_register.h"
#include "PMC_module.h"


int sc_main(int argc, char* argv[]) {

  ////PMC_reg table("Registres");
  //cout <<  CKGR_MOR << endl;

  // Déclarations I/O
  // 3 sorties composants (1 pour chaque)
  // UART / Timer / GPIO
  //Toggle_Component UART_COMP("UART_COMP");
  //Toggle_Component Timer("Timer");
  //Toggle_Component GPIO("GPIO");
  // N sorties materielles

  //PMC_module top("top");
  //c_start();
  PMC_module top("top");
  //socket.register_b_transport(this, &Memory::b_transport);

  sc_start();

  return 0;
}

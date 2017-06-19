#include "systemc.h"
#include "PMC.h"
#include "register.h"


int sc_main(int, char**){

  PMC_reg table("Registres");
  //cout <<  CKGR_MOR << endl;

  // Déclarations I/O
  // 3 sorties composants (1 pour chaque)
  // UART / Timer / GPIO
  Toggle_Component UART_COMP("UART_COMP");
  UART_COMP.Addr = 1;
  Toggle_Component Timer("Timer");
  Timer.Addr = 1;
  Toggle_Component GPIO("GPIO");
  GPIO.Addr = 1;
  // N sorties materielles

  return 0;
}

#include "systemc.h"
#include "Comp_Tog.h"
#include "register.h"


int sc_main(int, char**){

  // Registres
  PMC_reg table("Registres");
  
  // I/O
    // 3 sorties composants (1 pour chaque)
  Toggle_Component UART_COMP("UART_COMP_socket");
  UART_COMP.Addr = 1;
  Toggle_Component Timer("Timer_socket");
  Timer.Addr = 1;
  Toggle_Component GPIO("GPIO_socket");
  GPIO.Addr = 1;

    // 1 entrée bus
  PMC_bus = new PMC_bus_target_socket("Bus_socket");


  
  return 0;
}

#include "systemc.h"
#include "PMC_tb_socket.h"
#include "PMC_bus_target_socket.h"

/***
 * Le module PMC un target socket pour la réception de
 * message depuis le bus ou à défaut le test bench
 * Le module testbench est initiator est ce connecte
 * au target socket du module PMC
 ***/

SC_MODULE (PMC_module){
  // *** Déclaration des sockets
  PMC_tb_socket *PMC_tb; // Testbench seulement
  PMC_bus_target_socket *PMC_target;

  SC_CTOR(PMC_module) {
    // *** initialisation des sockets
    PMC_tb      = new PMC_tb_socket("initiator"); // Testbench seulement
    PMC_target  = new PMC_bus_target_socket("memory");

    // *** liaison des sockets
    PMC_tb->socket.bind( PMC_target->socket ); // Testbench seulement
  }
};

#include "systemc.h"
#include "PMC_tb_stim.h"
#include "PMC_tb_rec.h"
#include "PMC_mod_in_socket.h"
#include "PMC_mod_out_socket.h"


/***
 * Le module PMC un target socket pour la réception de
 * message depuis le bus ou à défaut le test bench
 * Le module testbench est initiator est ce connecte
 * au target socket du module PMC
 ***/

SC_MODULE (PMC_module){
  // *** Déclaration des sockets
  //PMC_tb_socket *PMC_tb; // Testbench seulement
  //PMC_bus_target_socket *PMC_target;

  PMC_tb_stim         *PMC_stim; // Testbench seulement
  PMC_mod_in_socket   *PMC_reg;
  PMC_mod_out_socket  *PMC_cmd;
  PMC_tb_rec          *PMC_rec; // Testbench seulement

  SC_CTOR(PMC_module) {
    cout << "binding des socket" << endl;
    //PMC_stim->socket.bind( PMC_reg->socket ); // Testbench seulement
    //PMC_cmd->socket.bind( PMC_rec->socket ); // Testbench seulement
    cout << "binding ... OK" << endl;

    // *** initialisation des sockets
    //PMC_tb      = new PMC_tb_socket("initiator"); // Testbench seulement
    //PMC_target  = new PMC_bus_target_socket("memory");

  //  PMC_target.mem[PMC_SCER]; // 0xFE4001 // 32 bit
    //is_bit_en(PMC_target.mem[PMC_SCER], PMC_SCER_PCK0)

    // *** liaison des sockets
    //PMC_tb->socket.bind( PMC_target->socket ); // Testbench seulement
  }
  void transfert();
};

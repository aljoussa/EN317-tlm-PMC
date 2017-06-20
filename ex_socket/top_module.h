#include "systemc.h"
#include "simple_target_socket.h"
#include "simple_initiator_socket.h"

SC_MODULE(Top)
{
  Initiator *initiator;
  Memory    *memory;

  SC_CTOR(Top)
  {
    // Instantiate components
    initiator = new Initiator("initiator");
    memory    = new Memory   ("memory");

    // One initiator is bound directly to one target with no intervening bus

    // Bind initiator socket to target socket
    initiator->socket.bind( memory->socket );
  }
};

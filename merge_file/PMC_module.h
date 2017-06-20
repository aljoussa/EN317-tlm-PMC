#include "systemc.h"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"

//#include "bus.h"

struct Initiator: sc_module {
  tlm_utils::simple_initiator_socket<Initiator> socket;
  SC_CTOR(Initiator) : socket("socket")
  {
    //SC_THREAD(thread_process);
  }
};

struct Memory: sc_module {
  tlm_utils::simple_target_socket<Memory> socket;
  SC_CTOR(Memory) : socket("socket")
  {
    //...
  }
};

/*
struct target: sc_core::sc_module {
	tlm::tlm_target_socket<target> socket;
	tlm::tlm_response_status write(const ensitlm::addr_t &a,
	                               const ensitlm::data_t &d);

	tlm::tlm_response_status read(const ensitlm::addr_t &a,
  */
//	                              /* */ ensitlm::data_t &d);

//	SC_CTOR(target) { /* */	}
//};

SC_MODULE (PMC_module){
  Initiator *initiator;
  Memory *memory;

  SC_CTOR(PMC_module) {
      initiator = new Initiator("initiator");
      memory    = new Memory   ("memory");

      initiator->socket.bind( memory->socket );

  }

};

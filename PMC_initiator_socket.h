#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
using namespace sc_core;
using namespace sc_dt;
using namespace std;

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"

// Initiator module generating generic payload transactions

struct PMC_initiator_socket: sc_module
{
  // TLM-2 socket, defaults to 32-bits wide, base protocol
  //tlm_utils::simple_initiator_socket<Initiator> socket;
  tlm_utils::simple_initiator_socket<PMC_initiator_socket> socket;

  SC_CTOR(PMC_initiator_socket)
  : socket("bus_socket")  // Construct and name socket
  {
    SC_THREAD(thread_process);
  }

  void thread_process()
  {
    // TLM-2 generic payload transaction, reused across calls to b_transport
    tlm::tlm_generic_payload* trans = new tlm::tlm_generic_payload;
    sc_time delay = sc_time(10, SC_NS);

    // Generate a random sequence of reads and writes
   /* for (int i = 32; i < 96; i += 4)
    {
      if(data == 0){
        data = 1;
      }else{
        data = 0;
      }

      cout << "data send = " << hex << data << endl;*/
      // Initialize 8 out of the 10 attributes, byte_enable_length and extensions being unused
      trans->set_command( tlm::TLM_WRITE_COMMAND );
      trans->set_address( 1 );
      trans->set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
      trans->set_data_length( 1 );
      trans->set_streaming_width( 1 ); // = data_length to indicate no streaming
      trans->set_byte_enable_ptr( 0 ); // 0 indicates unused
      trans->set_dmi_allowed( false ); // Mandatory initial value
      trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE ); // Mandatory initial value

      socket->b_transport( *trans, delay );  // Blocking transport call

      // Initiator obliged to check response status and delay
      if ( trans->is_response_error() )
        SC_REPORT_ERROR("TLM-2", "Response error from b_transport");


      // Realize the delay annotated onto the transport call
      wait(delay);
   // }
  }

  // Internal data buffer used by initiator with generic payload
  int data;
};

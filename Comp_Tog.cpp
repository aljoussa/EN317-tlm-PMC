#include "Comp_Tog.h"

Toggle_Component::Toggle_Component(sc_module_name name) : socket("socket")
{
    SC_THREAD(thread_process);
    SC_METHOD (On);
    SC_METHOD (Off);
    Toggle_Component::Off();
}

void Toggle_Component::thread_process(){
  tlm::tlm_generic_payload* trans = new tlm::tlm_generic_payload;
  sc_time delay = sc_time(10, SC_NS);

  tlm::tlm_command cmd = tlm::TLM_WRITE_COMMAND;

  trans->set_command( cmd );
  trans->set_address( Addr );
  trans->set_data_ptr( reinterpret_cast<unsigned char*>(&Activated) );
  trans->set_data_length( 1 );
  trans->set_streaming_width( 1 );
  trans->set_byte_enable_ptr( 0 );
  trans->set_dmi_allowed( false );
  trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE );

  socket->b_transport( *trans, delay );
}

void Toggle_Component::On()
{
  this->Activated = true;
  thread_process();
}

void Toggle_Component::Off()
{
  this->Activated = false;
  thread_process();
}

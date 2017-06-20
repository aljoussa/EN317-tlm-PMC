#include "PMC_module.h"

using namespace std;

/*tlm::tlm_response_status target::write(const tlm::addr_t &a,
                                       const tlm::data_t &d) {
	cout << "j'ai reçu : " << d << endl;
	return tlm::TLM_OK_RESPONSE;
}*/

/*tlm::tlm_response_status target::read(const tlm::addr_t &a,
                                       tlm::data_t &d) {
	SC_REPORT_ERROR("TLM", "non implémenté");
	abort();
}*/

/*PMC_module::PMC_module(sc_module_name name) : sc_module(name)
{
    //SC_METHOD (dummy);
    //Toggle_Component::Off();
}*/


void thread_process()
{
  tlm::tlm_generic_payload* trans = new tlm::tlm_generic_payload;
  sc_time delay = sc_time(10, SC_NS);

  uint32_t data;
  for (int i = 32; i < 96; i += 4)
  {
    tlm::tlm_command cmd = static_cast<tlm::tlm_command>(rand() % 2);
    if (cmd == tlm::TLM_WRITE_COMMAND) data = 0xFF000000 | i;

    trans->set_command( cmd );
    trans->set_address( i );
    trans->set_data_ptr( reinterpret_cast<unsigned char*>(&data) );
    trans->set_data_length( 4 );
    trans->set_streaming_width( 4 );
    trans->set_byte_enable_ptr( 0 );
    trans->set_dmi_allowed( false );
    trans->set_response_status( tlm::TLM_INCOMPLETE_RESPONSE );

    socket->b_transport( *trans, delay );
    //...
  }
}

/*virtual void b_transport( tlm::tlm_generic_payload& trans, sc_time& delay )
{
  tlm::tlm_command cmd = trans.get_command();
  sc_dt::uint64    adr = trans.get_address() / 4;
  unsigned char*   ptr = trans.get_data_ptr();
  unsigned int     len = trans.get_data_length();
  unsigned char*   byt = trans.get_byte_enable_ptr();
  unsigned int     wid = trans.get_streaming_width();

  if (adr >= sc_dt::uint64(SIZE) || byt != 0 || len > 4 || wid < len)
    SC_REPORT_ERROR("TLM-2",
                "Target does not support given generic payload transaction");
                if ( cmd == tlm::TLM_READ_COMMAND )
                 memcpy(ptr, &mem[adr], len);
               else if ( cmd == tlm::TLM_WRITE_COMMAND )
                 memcpy(&mem[adr], ptr, len);

}*/

#include "systemc.h"
#include "PMC_module.h"
#include "PMC_config.h"

void PMC_module::transfert() {
  //PMC_cmd->data = is_bit_en(static_cast<uint32_t>(PMC_reg->mem.regv[2]), PMC_USB_USBS);
  //PMC_cmd->data = is_bit_en((PMC_reg->mem.regv[2]), PMC_USB_USBS);
  cout << "register value : " << PMC_reg->mem.regv[2] << endl;
}

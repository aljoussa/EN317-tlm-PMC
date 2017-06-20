/* -------- Macro for check bit status    -------- */
#define is_bit_en(reg, bit) ((reg & bit) > 0 ? true : false)
#define reg_val(reg, msk, pos) ((reg & msk) >> pos)
/* -------- Register variable for systemc -------- */
#define PMC_SCER      0   /* -------- System Clock Enable Register    -------- */
#define PMC_SCDR      1   /* -------- System Clock Disable Register   -------- */
#define PMC_SCSR      2   /* -------- System Clock Status Register    -------- */
#define PMC_PCER0     3   /* -------- Peripheral Clock Enable Register 0 -------- */
#define PMC_PCDR0     4   /* -------- Peripheral Clock Disable Register 0 -------- */
#define PMC_PCSR0     5   /* -------- Peripheral Clock Status Register 0 -------- */
#define CKGR_UCKR     6   /* -------- UTMI Clock Register                -------- */
#define CKGR_MOR      7   /* -------- Main Oscillator Register          -------- */
#define CKGR_MCFR     8   /* -------- Main Clock Frequency Register      -------- */
#define CKGR_PLLAR    9   /* -------- PLLA Register                       -------- */
#define PMC_MCKR     10   /* -------- Master Clock Register             -------- */
#define PMC_USB      11   /* -------- USB Clock Register               -------- */
#define PMC_PCK0     12   /* -------- Programmable Clock 0 Register     -------- */
#define PMC_PCK1     13   /* -------- Programmable Clock 1 Register     -------- */
#define PMC_PCK2     14   /* -------- Programmable Clock 2 Register     -------- */
#define PMC_IER      15   /* -------- Interrupt Enable Register       -------- */
#define PMC_IDR      16   /* -------- Interrupt Disable Register       -------- */
#define PMC_SR       17   /* -------- Status Register                 -------- */
#define PMC_IMR      18   /* -------- Interrupt Mask Register          -------- */
#define PMC_FSMR     19   /* -------- Fast Start-up Mode Register       -------- */
#define PMC_FSPR     20   /* -------- Fast Start-up Polarity Register   -------- */
#define PMC_FOCR     21   /* -------- Fault Output Clear Register       -------- */
#define PMC_WPMR     22   /* -------- Write Protect Mode Register       -------- */
#define PMC_WPSR     23   /* -------- Write Protect Status Register     -------- */
#define PMC_PCER1    24   /* -------- Peripheral Clock Enable Register 1 -------- */
#define PMC_PCSR1    25   /* -------- Peripheral Clock Disable Register 1 -------- */
#define PMC_PCSR1    26   /* -------- Peripheral Clock Status Register 1 -------- */
#define PMC_PCR      27   /* -------- Write Protect Status Register     -------- */

/* -------- PMC_SCER : (PMC Offset: 0x0000) -------- */
/* -------- System Clock Enable Register    -------- */
#define PMC_SCER_UOTGCLK (0x1ul <<  8)
#define PMC_SCER_PCK0    (0x1ul <<  8)
#define PMC_SCER_PCK1    (0x1ul <<  9)
#define PMC_SCER_PCK2    (0x1ul << 10)
/* -------- PMC_SCDR : (PMC Offset: 0x0004) -------- */
/* -------- System Clock Disable Register   -------- */
#define PMC_SCDR_UOTGCLK (0x1ul <<  8)
#define PMC_SCDR_PCK0    (0x1ul <<  8)
#define PMC_SCDR_PCK1    (0x1ul <<  9)
#define PMC_SCDR_PCK2    (0x1ul << 10)
/* -------- PMC_SCSR : (PMC Offset: 0x0008) -------- */
/* -------- System Clock Status Register    -------- */
#define PMC_SCSR_UOTGCLK (0x1ul <<  8)
#define PMC_SCSR_PCK0    (0x1ul <<  8)
#define PMC_SCSR_PCK1    (0x1ul <<  9)
#define PMC_SCSR_PCK2    (0x1ul << 10)
/* -------- PMC_PCER0 : (PMC Offset: 0x0010)   -------- */
/* -------- Peripheral Clock Enable Register 0 -------- */
#define PMC_PCER0_PID2   (0x1ul <<  2)
#define PMC_PCER0_PID3   (0x1ul <<  3)
#define PMC_PCER0_PID4   (0x1ul <<  4)
#define PMC_PCER0_PID5   (0x1ul <<  5)
#define PMC_PCER0_PID6   (0x1ul <<  6)
#define PMC_PCER0_PID7   (0x1ul <<  7)
#define PMC_PCER0_PID8   (0x1ul <<  8)
#define PMC_PCER0_PID9   (0x1ul <<  9)
#define PMC_PCER0_PID10  (0x1ul << 10)
#define PMC_PCER0_PID11  (0x1ul << 11)
#define PMC_PCER0_PID12  (0x1ul << 12)
#define PMC_PCER0_PID13  (0x1ul << 13)
#define PMC_PCER0_PID14  (0x1ul << 14)
#define PMC_PCER0_PID15  (0x1ul << 15)
#define PMC_PCER0_PID16  (0x1ul << 16)
#define PMC_PCER0_PID17  (0x1ul << 17)
#define PMC_PCER0_PID18  (0x1ul << 18)
#define PMC_PCER0_PID19  (0x1ul << 19)
#define PMC_PCER0_PID20  (0x1ul << 20)
#define PMC_PCER0_PID21  (0x1ul << 21)
#define PMC_PCER0_PID22  (0x1ul << 22)
#define PMC_PCER0_PID23  (0x1ul << 23)
#define PMC_PCER0_PID24  (0x1ul << 24)
#define PMC_PCER0_PID25  (0x1ul << 25)
#define PMC_PCER0_PID26  (0x1ul << 26)
#define PMC_PCER0_PID27  (0x1ul << 27)
#define PMC_PCER0_PID28  (0x1ul << 28)
#define PMC_PCER0_PID29  (0x1ul << 29)
#define PMC_PCER0_PID30  (0x1ul << 30)
#define PMC_PCER0_PID31  (0x1ul << 31)
/* -------- PMC_PCDR0 : (PMC Offset: 0x0014)   -------- */
/* -------- Peripheral Clock Disable Register 0 -------- */
#define PMC_PCDR0_PID2   (0x1ul <<  2)
#define PMC_PCDR0_PID3   (0x1ul <<  3)
#define PMC_PCDR0_PID4   (0x1ul <<  4)
#define PMC_PCDR0_PID5   (0x1ul <<  5)
#define PMC_PCDR0_PID6   (0x1ul <<  6)
#define PMC_PCDR0_PID7   (0x1ul <<  7)
#define PMC_PCDR0_PID8   (0x1ul <<  8)
#define PMC_PCDR0_PID9   (0x1ul <<  9)
#define PMC_PCDR0_PID10  (0x1ul << 10)
#define PMC_PCDR0_PID11  (0x1ul << 11)
#define PMC_PCDR0_PID12  (0x1ul << 12)
#define PMC_PCDR0_PID13  (0x1ul << 13)
#define PMC_PCDR0_PID14  (0x1ul << 14)
#define PMC_PCDR0_PID15  (0x1ul << 15)
#define PMC_PCDR0_PID16  (0x1ul << 16)
#define PMC_PCDR0_PID17  (0x1ul << 17)
#define PMC_PCDR0_PID18  (0x1ul << 18)
#define PMC_PCDR0_PID19  (0x1ul << 19)
#define PMC_PCDR0_PID20  (0x1ul << 20)
#define PMC_PCDR0_PID21  (0x1ul << 21)
#define PMC_PCDR0_PID22  (0x1ul << 22)
#define PMC_PCDR0_PID23  (0x1ul << 23)
#define PMC_PCDR0_PID24  (0x1ul << 24)
#define PMC_PCDR0_PID25  (0x1ul << 25)
#define PMC_PCDR0_PID26  (0x1ul << 26)
#define PMC_PCDR0_PID27  (0x1ul << 27)
#define PMC_PCDR0_PID28  (0x1ul << 28)
#define PMC_PCDR0_PID29  (0x1ul << 29)
#define PMC_PCDR0_PID30  (0x1ul << 30)
#define PMC_PCDR0_PID31  (0x1ul << 31)
/* -------- PMC_PCSR0 : (PMC Offset: 0x0018)   -------- */
/* -------- Peripheral Clock Status Register 0 -------- */
#define PMC_PCSR0_PID2   (0x1ul <<  2)
#define PMC_PCSR0_PID3   (0x1ul <<  3)
#define PMC_PCSR0_PID4   (0x1ul <<  4)
#define PMC_PCSR0_PID5   (0x1ul <<  5)
#define PMC_PCSR0_PID6   (0x1ul <<  6)
#define PMC_PCSR0_PID7   (0x1ul <<  7)
#define PMC_PCSR0_PID8   (0x1ul <<  8)
#define PMC_PCSR0_PID9   (0x1ul <<  9)
#define PMC_PCSR0_PID10  (0x1ul << 10)
#define PMC_PCSR0_PID11  (0x1ul << 11)
#define PMC_PCSR0_PID12  (0x1ul << 12)
#define PMC_PCSR0_PID13  (0x1ul << 13)
#define PMC_PCSR0_PID14  (0x1ul << 14)
#define PMC_PCSR0_PID15  (0x1ul << 15)
#define PMC_PCSR0_PID16  (0x1ul << 16)
#define PMC_PCSR0_PID17  (0x1ul << 17)
#define PMC_PCSR0_PID18  (0x1ul << 18)
#define PMC_PCSR0_PID19  (0x1ul << 19)
#define PMC_PCSR0_PID20  (0x1ul << 20)
#define PMC_PCSR0_PID21  (0x1ul << 21)
#define PMC_PCSR0_PID22  (0x1ul << 22)
#define PMC_PCSR0_PID23  (0x1ul << 23)
#define PMC_PCSR0_PID24  (0x1ul << 24)
#define PMC_PCSR0_PID25  (0x1ul << 25)
#define PMC_PCSR0_PID26  (0x1ul << 26)
#define PMC_PCSR0_PID27  (0x1ul << 27)
#define PMC_PCSR0_PID28  (0x1ul << 28)
#define PMC_PCSR0_PID29  (0x1ul << 29)
#define PMC_PCSR0_PID30  (0x1ul << 30)
#define PMC_PCSR0_PID31  (0x1ul << 31)
/* -------- CKGR_UCKR : (PMC Offset: 0x001C)   -------- */
/* -------- UTMI Clock Register                -------- */
#define CKGR_UCKR_UPLLEN (0x1ul << 16)
#define CKGR_UCKR_UPLLCOUNT_pos 20
#define CKGR_UCKR_UPLLCOUNT_mask (0xFul << CKGR_UCKR_UPLLCOUNT_pos)
#define CKGR_UCKR_UPLLCOUNT
/* -------- CKGR_MOR : (PMC Offset: 0x0020)   -------- */
/* -------- Main Oscillator Register          -------- */
#define CKGR_MOR_MOSCXTEN  (0x01ul <<  0)
#define CKGR_MOR_MOSCXTBY  (0x01ul <<  1)
#define CKGR_MOR_MOSCRCEN  (0x01ul <<  3)
#define CKGR_MOR_MOSCRCF_pos 4
#define CKGR_MOR_MOSCRCF_msk (0x07ul <<  CKGR_MOR_MOSCRCF_pos)
#define CKGR_MOR_MOSCRCF
#define   CKGR_MOR_MOSCRCF_4_MHZ  0x1
#define   CKGR_MOR_MOSCRCF_8_MHZ  0x2
#define   CKGR_MOR_MOSCRCF_12_MHZ 0x3
#define CKGR_MOR_MOSCXTST_pos  8
#define CKGR_MOR_MOSCXTST_msk  (0xFFul <<  CKGR_MOR_MOSCXTST_pos)
#define CKGR_MOR_MOSCXTST
#define CKGR_MOR_KEY_pos  16
#define CKGR_MOR_KEY_msk  (0xFFul <<  CKGR_MOR_MOSCXTST_pos)
#define CKGR_MOR_KEY
#define   CKGR_MOR_KEY_PASSWORD 0x37
#define CKGR_MOR_MOSCSEL   (0x01ul << 24)
#define CKGR_MOR_CFDEN     (0x01ul << 25)
/* -------- CKGR_MCFR : (PMC Offset: 0x0024)   -------- */
/* -------- Main Clock Frequency Register      -------- */
#define CKGR_MCFR_MAINF_pos 0
#define CKGR_MCFR_MAINF_msk (0xFFFFul <<  CKGR_MCFR_MAINF_pos)
#define CKGR_MCFR_MAINF
#define CKGR_MCFR_MAINFRDY (0x1ul <<  16)
/* -------- CKGR_PLLAR : (PMC Offset: 0x0028)   -------- */
/* -------- PLLA Register                       -------- */
#define CKGR_PLLAR_DIVA_pos 0
#define CKGR_PLLAR_DIVA_msk (0xFFul << CKGR_PLLAR_DIVA_pos)
#define CKGR_PLLAR_DIVA
#define CKGR_PLLAR_PLLACOUNT_pos 8
#define CKGR_PLLAR_PLLACOUNT_msk (0x3Ful << CKGR_PLLAR_PLLACOUNT_pos)
#define CKGR_PLLAR_PLLACOUNT
#define CKGR_PLLAR_MULA_pos 16
#define CKGR_PLLAR_MULA_msk (0x3FFul << CKGR_PLLAR_PLLACOUNT_pos)
#define CKGR_PLLAR_MULA
#define CKGR_PLLAR_ONE (0x1ul <<  29)
/* -------- PMC_MCKR : (PMC Offset: 0x0030)   -------- */
/* -------- Master Clock Register             -------- */
#define PMC_MCKR_CSS_pos 0
#define PMC_MCKR_CSS_msk (0x3ul << PMC_MCKR_CSS_pos)
#define PMC_MCKR_CSS
#define   PMC_MCKR_CSS_SLOW_CLK 0
#define   PMC_MCKR_CSS_MAIN_CLK 1
#define   PMC_MCKR_CSS_PLLA_CLK 2
#define   PMC_MCKR_CSS_UPLL_CLK 3
#define PMC_MCKR_PRES_pos 4
#define PMC_MCKR_PRES_msk (0x7ul << PMC_MCKR_PRES_pos)
#define PMC_MCKR_PRES
#define   PMC_MCKR_PRES_CLK_1   0
#define   PMC_MCKR_PRES_CLK_2   1
#define   PMC_MCKR_PRES_CLK_4   2
#define   PMC_MCKR_PRES_CLK_8   3
#define   PMC_MCKR_PRES_CLK_16  4
#define   PMC_MCKR_PRES_CLK_32  5
#define   PMC_MCKR_PRES_CLK_64  6
#define   PMC_MCKR_PRES_CLK_3   7
#define PMC_MCKR_PLLADIV2 (0x1ul << 12)
#define PMC_MCKR_UPLLDIV2 (0x1ul << 13)
/* -------- PMC_USB : (PMC Offset: 0x0038)   -------- */
/* -------- USB Clock Register               -------- */
#define PMC_USB_USBDIV_pos 8
#define PMC_USB_USBDIV_msk (0x0Ful << PMC_USB_USBDIV_pos)
#define PMC_USB_USBDIV
#define PMC_USB_USBS (0x1ul << 0)
/* -------- PMC_PCK0 : (PMC Offset: 0x0040)   -------- */
/* -------- Programmable Clock 0 Register     -------- */
#define PMC_PCK0_CSS_pos 0
#define PMC_PCK0_CSS_msk (0x7ul << PMC_PCK0_CSS_pos)
#define PMC_PCK0_CSS
#define   PMC_PCK0_CSS_SLOW_CLK 0
#define   PMC_PCK0_CSS_MAIN_CLK 1
#define   PMC_PCK0_CSS_PLLA_CLK 2
#define   PMC_PCK0_CSS_UPLL_CLK 3
#define   PMC_PCK0_CSS_MCK 4
#define PMC_PCK0_PRES_pos 4
#define PMC_PCK0_PRES_msk (0x7ul << PMC_PCK0_PRES_pos)
#define PMC_PCK0_PRES
#define   PMC_PCK0_PRES_CLK_1 0
#define   PMC_PCK0_PRES_CLK_2 1
#define   PMC_PCK0_PRES_CLK_4 2
#define   PMC_PCK0_PRES_CLK_8 3
#define   PMC_PCK0_PRES_CLK_16 4
#define   PMC_PCK0_PRES_CLK_32 5
#define   PMC_PCK0_PRES_CLK_64 6
/* -------- PMC_PCK1 : (PMC Offset: 0x0044)   -------- */
/* -------- Programmable Clock 1 Register     -------- */
#define PMC_PCK1_CSS_pos 0
#define PMC_PCK1_CSS_msk (0x7ul << PMC_PCK1_CSS_pos)
#define PMC_PCK1_CSS
#define   PMC_PCK1_CSS_SLOW_CLK 0
#define   PMC_PCK1_CSS_MAIN_CLK 1
#define   PMC_PCK1_CSS_PLLA_CLK 2
#define   PMC_PCK1_CSS_UPLL_CLK 3
#define   PMC_PCK1_CSS_MCK 4
#define PMC_PCK1_PRES_pos 4
#define PMC_PCK1_PRES_msk (0x7ul << PMC_PCK1_PRES_pos)
#define PMC_PCK1_PRES
#define   PMC_PCK1_PRES_CLK_1 0
#define   PMC_PCK1_PRES_CLK_2 1
#define   PMC_PCK1_PRES_CLK_4 2
#define   PMC_PCK1_PRES_CLK_8 3
#define   PMC_PCK1_PRES_CLK_16 4
#define   PMC_PCK1_PRES_CLK_32 5
#define   PMC_PCK1_PRES_CLK_64 6
/* -------- PMC_PCK2 : (PMC Offset: 0x0048)   -------- */
/* -------- Programmable Clock 2 Register       -------- */
#define PMC_PCK2_CSS_pos 0
#define PMC_PCK2_CSS_msk (0x7ul << PMC_PCK2_CSS_pos)
#define PMC_PCK2_CSS
#define   PMC_PCK2_CSS_SLOW_CLK 0
#define   PMC_PCK2_CSS_MAIN_CLK 1
#define   PMC_PCK2_CSS_PLLA_CLK 2
#define   PMC_PCK2_CSS_UPLL_CLK 3
#define   PMC_PCK2_CSS_MCK 4
#define PMC_PCK2_PRES_pos 4
#define PMC_PCK2_PRES_msk (0x7ul << PMC_PCK2_PRES_pos)
#define PMC_PCK2_PRES
#define   PMC_PCK2_PRES_CLK_1 0
#define   PMC_PCK2_PRES_CLK_2 1
#define   PMC_PCK2_PRES_CLK_4 2
#define   PMC_PCK2_PRES_CLK_8 3
#define   PMC_PCK2_PRES_CLK_16 4
#define   PMC_PCK2_PRES_CLK_32 5
#define   PMC_PCK2_PRES_CLK_64 6
/* -------- PMC_IER : (PMC Offset: 0x0060)   -------- */
/* -------- Interrupt Enable Register       -------- */
#define PMC_IER_MOSCXTS  (0x1ul <<  0)
#define PMC_IER_LOCKA    (0x1ul <<  1)
#define PMC_IER_MCKRDY   (0x1ul <<  3)
#define PMC_IER_LOCKU    (0x1ul <<  6)
#define PMC_IER_PCKRDY0  (0x1ul <<  8)
#define PMC_IER_PCKRDY1  (0x1ul <<  9)
#define PMC_IER_PCKRDY2  (0x1ul << 10)
#define PMC_IER_MOSCSELS (0x1ul << 16)
#define PMC_IER_MOSCRCS  (0x1ul << 17)
#define PMC_IER_CFDEV    (0x1ul << 18)
/* -------- PMC_IDR : (PMC Offset: 0x0064)   -------- */
/* -------- Interrupt Disable Register       -------- */
#define PMC_IDR_MOSCXTS  (0x1ul <<  0)
#define PMC_IDR_LOCKA    (0x1ul <<  1)
#define PMC_IDR_MCKRDY   (0x1ul <<  3)
#define PMC_IDR_LOCKU    (0x1ul <<  6)
#define PMC_IDR_PCKRDY0  (0x1ul <<  8)
#define PMC_IDR_PCKRDY1  (0x1ul <<  9)
#define PMC_IDR_PCKRDY2  (0x1ul << 10)
#define PMC_IDR_MOSCSELS (0x1ul << 16)
#define PMC_IDR_MOSCRCS  (0x1ul << 17)
#define PMC_IDR_CFDEV    (0x1ul << 18)
/* -------- PMC_SR : (PMC Offset: 0x0068)   -------- */
/* -------- Status Register                 -------- */
#define PMC_SR_MOSCXTS  (0x1ul <<  0)
#define PMC_SR_LOCKA    (0x1ul <<  1)
#define PMC_SR_MCKRDY   (0x1ul <<  3)
#define PMC_SR_LOCKU    (0x1ul <<  6)
#define PMC_SR_PCKRDY0  (0x1ul <<  8)
#define PMC_SR_PCKRDY1  (0x1ul <<  9)
#define PMC_SR_PCKRDY2  (0x1ul << 10)
#define PMC_SR_MOSCSELS (0x1ul << 16)
#define PMC_SR_MOSCRCS  (0x1ul << 17)
#define PMC_SR_CFDEV    (0x1ul << 18)
#define PMC_SR_CFDS     (0x1ul << 19)
#define PMC_SR_FOS      (0x1ul << 20)
/* -------- PMC_IMR : (PMC Offset: 0x006C)   -------- */
/* -------- Interrupt Mask Register          -------- */
#define PMC_IMR_MOSCXTS  (0x1ul <<  0)
#define PMC_IMR_LOCKA    (0x1ul <<  1)
#define PMC_IMR_MCKRDY   (0x1ul <<  3)
#define PMC_IMR_LOCKU    (0x1ul <<  6)
#define PMC_IMR_PCKRDY0  (0x1ul <<  8)
#define PMC_IMR_PCKRDY1  (0x1ul <<  9)
#define PMC_IMR_PCKRDY2  (0x1ul << 10)
#define PMC_IMR_MOSCSELS (0x1ul << 16)
#define PMC_IMR_MOSCRCS  (0x1ul << 17)
#define PMC_IMR_CFDEV    (0x1ul << 18)
/* -------- PMC_FSMR : (PMC Offset: 0x0070)   -------- */
/* -------- Fast Start-up Mode Register       -------- */
#define PMC_FSMR_FSTT0  (0x1ul <<  0)
#define PMC_FSMR_FSTT1  (0x1ul <<  1)
#define PMC_FSMR_FSTT2  (0x1ul <<  2)
#define PMC_FSMR_FSTT3  (0x1ul <<  3)
#define PMC_FSMR_FSTT4  (0x1ul <<  4)
#define PMC_FSMR_FSTT5  (0x1ul <<  5)
#define PMC_FSMR_FSTT6  (0x1ul <<  6)
#define PMC_FSMR_FSTT7  (0x1ul <<  7)
#define PMC_FSMR_FSTT8  (0x1ul <<  8)
#define PMC_FSMR_FSTT9  (0x1ul <<  9)
#define PMC_FSMR_FSTT10 (0x1ul << 10)
#define PMC_FSMR_FSTT11 (0x1ul << 11)
#define PMC_FSMR_FSTT12 (0x1ul << 12)
#define PMC_FSMR_FSTT13 (0x1ul << 13)
#define PMC_FSMR_FSTT14 (0x1ul << 14)
#define PMC_FSMR_FSTT15 (0x1ul << 15)
#define PMC_FSMR_RTTAL  (0x1ul << 16)
#define PMC_FSMR_RTCAL  (0x1ul << 17)
#define PMC_FSMR_USBAL  (0x1ul << 18)
#define PMC_FSMR_LPM    (0x1ul << 20)
/* -------- PMC_FSPR : (PMC Offset: 0x0074)   -------- */
/* -------- Fast Start-up Polarity Register   -------- */
#define PMC_FSPR_FSTP0  (0x1ul <<  0)
#define PMC_FSPR_FSTP1  (0x1ul <<  1)
#define PMC_FSPR_FSTP2  (0x1ul <<  2)
#define PMC_FSPR_FSTP3  (0x1ul <<  3)
#define PMC_FSPR_FSTP4  (0x1ul <<  4)
#define PMC_FSPR_FSTP5  (0x1ul <<  5)
#define PMC_FSPR_FSTP6  (0x1ul <<  6)
#define PMC_FSPR_FSTP7  (0x1ul <<  7)
#define PMC_FSPR_FSTP8  (0x1ul <<  8)
#define PMC_FSPR_FSTP9  (0x1ul <<  9)
#define PMC_FSPR_FSTP10 (0x1ul << 10)
#define PMC_FSPR_FSTP11 (0x1ul << 11)
#define PMC_FSPR_FSTP12 (0x1ul << 12)
#define PMC_FSPR_FSTP13 (0x1ul << 13)
#define PMC_FSPR_FSTP14 (0x1ul << 14)
#define PMC_FSPR_FSTP15 (0x1ul << 15)
/* -------- PMC_FOCR : (PMC Offset: 0x0078)   -------- */
/* -------- Fault Output Clear Register       -------- */
#define PMC_FOCR_FOCLR (0x1ul << 0)
/* -------- PMC_WPMR : (PMC Offset: 0x00E4)   -------- */
/* -------- Write Protect Mode Register       -------- */
#define PMC_WPMR_WPEN (0x1ul << 0)
#define PMC_WPMR_WPKEY_pos 8
#define PMC_WPMR_WPKEY_msk (0xFFFFFFul << PMC_WPMR_WPKEY_pos)
#define PMC_WPMR_WPKEY
#define   PMC_WPMR_WPKEY_PASSWD 0x504D43
/* -------- PMC_WPSR : (PMC Offset: 0x00E8)   -------- */
/* -------- Write Protect Status Register     -------- */
#define PMC_WPSR_WPVS (0x1ul << 0)
#define PMC_WPSR_WPVSRC_pos 8
#define PMC_WPSR_WPVSRC_msk (0xFFFFul << PMC_WPSR_WPVSRC_pos)
/* -------- PMC_PCER1 : (PMC Offset: 0x0700)   -------- */
/* -------- Peripheral Clock Enable Register 1 -------- */
#define PMC_PCER1_PID32 (0x1ul <<  0)
#define PMC_PCER1_PID33 (0x1ul <<  1)
#define PMC_PCER1_PID34 (0x1ul <<  2)
#define PMC_PCER1_PID35 (0x1ul <<  3)
#define PMC_PCER1_PID36 (0x1ul <<  4)
#define PMC_PCER1_PID37 (0x1ul <<  5)
#define PMC_PCER1_PID38 (0x1ul <<  6)
#define PMC_PCER1_PID39 (0x1ul <<  7)
#define PMC_PCER1_PID40 (0x1ul <<  8)
#define PMC_PCER1_PID41 (0x1ul <<  9)
#define PMC_PCER1_PID42 (0x1ul << 10)
#define PMC_PCER1_PID43 (0x1ul << 11)
#define PMC_PCER1_PID44 (0x1ul << 12)
/* -------- PMC_PCDR1 : (PMC Offset: 0x0704)   -------- */
/* -------- Peripheral Clock Disable Register 1 -------- */
#define PMC_PCDR1_PID32 (0x1ul <<  0)
#define PMC_PCDR1_PID33 (0x1ul <<  1)
#define PMC_PCDR1_PID34 (0x1ul <<  2)
#define PMC_PCDR1_PID35 (0x1ul <<  3)
#define PMC_PCDR1_PID36 (0x1ul <<  4)
#define PMC_PCDR1_PID37 (0x1ul <<  5)
#define PMC_PCDR1_PID38 (0x1ul <<  6)
#define PMC_PCDR1_PID39 (0x1ul <<  7)
#define PMC_PCDR1_PID40 (0x1ul <<  8)
#define PMC_PCDR1_PID41 (0x1ul <<  9)
#define PMC_PCDR1_PID42 (0x1ul << 10)
#define PMC_PCDR1_PID43 (0x1ul << 11)
#define PMC_PCDR1_PID44 (0x1ul << 12)
/* -------- PMC_PCSR1 : (PMC Offset: 0x0708)   -------- */
/* -------- Peripheral Clock Status Register 1 -------- */
#define PMC_PCSR1_PID32 (0x1ul <<  0)
#define PMC_PCSR1_PID33 (0x1ul <<  1)
#define PMC_PCSR1_PID34 (0x1ul <<  2)
#define PMC_PCSR1_PID35 (0x1ul <<  3)
#define PMC_PCSR1_PID36 (0x1ul <<  4)
#define PMC_PCSR1_PID37 (0x1ul <<  5)
#define PMC_PCSR1_PID38 (0x1ul <<  6)
#define PMC_PCSR1_PID39 (0x1ul <<  7)
#define PMC_PCSR1_PID40 (0x1ul <<  8)
#define PMC_PCSR1_PID41 (0x1ul <<  9)
#define PMC_PCSR1_PID42 (0x1ul << 10)
#define PMC_PCSR1_PID43 (0x1ul << 11)
#define PMC_PCSR1_PID44 (0x1ul << 12)
/* -------- PMC_PCR : (PMC Offset: 0x000C)   -------- */
/* -------- Write Protect Status Register     -------- */
#define PMC_PCR_PID_pos 0
#define PMC_PCR_PID_msk (0x3Ful << PMC_PCR_PID_pos)
#define PMC_PCR_PID
#define PMC_PCR_CMD (0x1ul << 12)
#define PMC_PCR_DIV_pos 16
#define PMC_PCR_DIV_msk (0x3ul << PMC_PCR_DIV_pos)
#define PMC_PCR_DIV
#define   PMC_PCR_PERIPH_DIV1_MCK 0
#define   PMC_PCR_PERIPH_DIV2_MCK 1
#define   PMC_PCR_PERIPH_DIV4_MCK 2
#define PMC_PCR_EN (0x1ul << 28)

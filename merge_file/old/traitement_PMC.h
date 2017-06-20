#include "systemc.h"

SC_MODULE (PMC_traitement){

    SC_CTOR(PMC_traitement);

    void Reset();

    uint32_t Reg[28];
};


/* -------- PMC_SCER : (PMC Offset: 0x0000) System Clock Enable Register -------- */
#define PMC_SCER_PCK0 
#define PMC_SCER_PCK1 
#define PMC_SCER_PCK2 (0x1u << 10) 
/* -------- PMC_SCDR : (PMC Offset: 0x0004) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0 
#define PMC_SCDR_PCK1 
#define PMC_SCDR_PCK2 
/* -------- PMC_SCSR : (PMC Offset: 0x0008) System Clock Status Register -------- */
#define PMC_SCSR_PCK0 
#define PMC_SCSR_PCK1 
#define PMC_SCSR_PCK2 
/* -------- PMC_PCER0 : (PMC Offset: 0x0010) Peripheral Clock Enable Register 0 -------- */
#define PMC_PCER0_PID2
#define PMC_PCER0_PID3
#define PMC_PCER0_PID4
#define PMC_PCER0_PID5
#define PMC_PCER0_PID6
#define PMC_PCER0_PID7
#define PMC_PCER0_PID8
#define PMC_PCER0_PID9
#define PMC_PCER0_PID10
#define PMC_PCER0_PID11
#define PMC_PCER0_PID12
#define PMC_PCER0_PID13
#define PMC_PCER0_PID14
#define PMC_PCER0_PID15
#define PMC_PCER0_PID16
#define PMC_PCER0_PID17
#define PMC_PCER0_PID18
#define PMC_PCER0_PID19
#define PMC_PCER0_PID20
#define PMC_PCER0_PID21
#define PMC_PCER0_PID22
#define PMC_PCER0_PID23
#define PMC_PCER0_PID24
#define PMC_PCER0_PID25
#define PMC_PCER0_PID26
#define PMC_PCER0_PID27
#define PMC_PCER0_PID28
#define PMC_PCER0_PID29
#define PMC_PCER0_PID30
#define PMC_PCER0_PID31
/* -------- PMC_PCDR0 : (PMC Offset: 0x0014) Peripheral Clock Disable Register 0 -------- */
#define PMC_PCDR0_PID2
#define PMC_PCDR0_PID3
#define PMC_PCDR0_PID4
#define PMC_PCDR0_PID5
#define PMC_PCDR0_PID6
#define PMC_PCDR0_PID7
#define PMC_PCDR0_PID8 
#define PMC_PCDR0_PID9 
#define PMC_PCDR0_PID10
#define PMC_PCDR0_PID11
#define PMC_PCDR0_PID12
#define PMC_PCDR0_PID13
#define PMC_PCDR0_PID14
#define PMC_PCDR0_PID15
#define PMC_PCDR0_PID16
#define PMC_PCDR0_PID17
#define PMC_PCDR0_PID18
#define PMC_PCDR0_PID19
#define PMC_PCDR0_PID20
#define PMC_PCDR0_PID21
#define PMC_PCDR0_PID22
#define PMC_PCDR0_PID23
#define PMC_PCDR0_PID24
#define PMC_PCDR0_PID25
#define PMC_PCDR0_PID26
#define PMC_PCDR0_PID27
#define PMC_PCDR0_PID28
#define PMC_PCDR0_PID29
#define PMC_PCDR0_PID30
#define PMC_PCDR0_PID31
/* -------- PMC_PCSR0 : (PMC Offset: 0x0018) Peripheral Clock Status Register 0 -------- */
#define PMC_PCSR0_PID2
#define PMC_PCSR0_PID3
#define PMC_PCSR0_PID4
#define PMC_PCSR0_PID5
#define PMC_PCSR0_PID6
#define PMC_PCSR0_PID7
#define PMC_PCSR0_PID8 
#define PMC_PCSR0_PID9 
#define PMC_PCSR0_PID10
#define PMC_PCSR0_PID11
#define PMC_PCSR0_PID12
#define PMC_PCSR0_PID13
#define PMC_PCSR0_PID14
#define PMC_PCSR0_PID15
#define PMC_PCSR0_PID16
#define PMC_PCSR0_PID17
#define PMC_PCSR0_PID18
#define PMC_PCSR0_PID19
#define PMC_PCSR0_PID20
#define PMC_PCSR0_PID21
#define PMC_PCSR0_PID22
#define PMC_PCSR0_PID23
#define PMC_PCSR0_PID24
#define PMC_PCSR0_PID25
#define PMC_PCSR0_PID26
#define PMC_PCSR0_PID27
#define PMC_PCSR0_PID28
#define PMC_PCSR0_PID29
#define PMC_PCSR0_PID30
#define PMC_PCSR0_PID31
/* -------- CKGR_UCKR : (PMC Offset: 0x001C) UTMI Clock Register -------- */
#define CKGR_UCKR_UPLLEN 
#define CKGR_UCKR_UPLLCOUNT
/* -------- CKGR_MOR : (PMC Offset: 0x0020) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN 
#define CKGR_MOR_MOSCXTBY 
#define CKGR_MOR_MOSCRCEN 
#define CKGR_MOR_MOSCRCF
#define CKGR_MOR_MOSCXTST
#define CKGR_MOR_KEY
#define CKGR_MOR_MOSCSEL
#define CKGR_MOR_CFDEN 
/* -------- CKGR_MCFR : (PMC Offset: 0x0024) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF
#define CKGR_MCFR_MAINFRDY 
/* -------- CKGR_PLLAR : (PMC Offset: 0x0028) PLLA Register -------- */
#define CKGR_PLLAR_DIVA_Pos 0
#define CKGR_PLLAR_DIVA_Msk
#define CKGR_PLLAR_DIVA
#define CKGR_PLLAR_PLLACOUNT_Pos 8
#define CKGR_PLLAR_PLLACOUNT_Msk 
#define CKGR_PLLAR_PLLACOUNT
#define CKGR_PLLAR_MULA_Pos 16
#define CKGR_PLLAR_MULA_Msk 
#define CKGR_PLLAR_MULA
#define CKGR_PLLAR_ONE 
/* -------- PMC_MCKR : (PMC Offset: 0x0030) Master Clock Register -------- */
#define PMC_MCKR_CSS_Pos 0
#define PMC_MCKR_CSS_Msk
#define PMC_MCKR_CSS
#define   PMC_MCKR_CSS_SLOW_CLK 
#define   PMC_MCKR_CSS_MAIN_CLK 
#define   PMC_MCKR_CSS_PLLA_CLK
#define   PMC_MCKR_CSS_UPLL_CLK
#define PMC_MCKR_PRES_Pos 4
#define PMC_MCKR_PRES_Msk 
#define PMC_MCKR_PRES
#define   PMC_MCKR_PRES_CLK_1 
#define   PMC_MCKR_PRES_CLK_2
#define   PMC_MCKR_PRES_CLK_4
#define   PMC_MCKR_PRES_CLK_8
#define   PMC_MCKR_PRES_CLK_16
#define   PMC_MCKR_PRES_CLK_32
#define   PMC_MCKR_PRES_CLK_64
#define   PMC_MCKR_PRES_CLK_3 
#define PMC_MCKR_PLLADIV2
#define PMC_MCKR_UPLLDIV2
/* -------- PMC_PCK[3] : (PMC Offset: 0x0040) Programmable Clock 0 Register -------- */
#define PMC_PCK_CSS_Pos 0
#define PMC_PCK_CSS_Msk
#define PMC_PCK_CSS
#define   PMC_PCK_CSS_SLOW_CLK 
#define   PMC_PCK_CSS_MAIN_CLK 
#define   PMC_PCK_CSS_PLLA_CLK 
#define   PMC_PCK_CSS_UPLL_CLK 
#define   PMC_PCK_CSS_MCK 
#define PMC_PCK_PRES_Pos 4
#define PMC_PCK_PRES_Msk 
#define PMC_PCK_PRES
#define   PMC_PCK_PRES_CLK_1
#define   PMC_PCK_PRES_CLK_2
#define   PMC_PCK_PRES_CLK_4
#define   PMC_PCK_PRES_CLK_8
#define   PMC_PCK_PRES_CLK_16
#define   PMC_PCK_PRES_CLK_32
#define   PMC_PCK_PRES_CLK_64
/* -------- PMC_IER : (PMC Offset: 0x0060) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS
#define PMC_IER_LOCKA
#define PMC_IER_MCKRDY
#define PMC_IER_LOCKU
#define PMC_IER_PCKRDY0
#define PMC_IER_PCKRDY1
#define PMC_IER_PCKRDY2
#define PMC_IER_MOSCSELS
#define PMC_IER_MOSCRCS
#define PMC_IER_CFDEV 
/* -------- PMC_IDR : (PMC Offset: 0x0064) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS 
#define PMC_IDR_LOCKA 
#define PMC_IDR_MCKRDY
#define PMC_IDR_LOCKU 
#define PMC_IDR_PCKRDY0
#define PMC_IDR_PCKRDY1
#define PMC_IDR_PCKRDY2 
#define PMC_IDR_MOSCSELS 
#define PMC_IDR_MOSCRCS 
#define PMC_IDR_CFDEV 
/* -------- PMC_SR : (PMC Offset: 0x0068) Status Register -------- */
#define PMC_SR_MOSCXTS
#define PMC_SR_LOCKA 
#define PMC_SR_MCKRDY 
#define PMC_SR_LOCKU 
#define PMC_SR_OSCSELS
#define PMC_SR_PCKRDY0
#define PMC_SR_PCKRDY1
#define PMC_SR_PCKRDY2
#define PMC_SR_MOSCSELS
#define PMC_SR_MOSCRCS
#define PMC_SR_CFDEV 
#define PMC_SR_CFDS 
#define PMC_SR_FOS 
/* -------- PMC_IMR : (PMC Offset: 0x006C) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS
#define PMC_IMR_LOCKA 
#define PMC_IMR_MCKRDY
#define PMC_IMR_LOCKU
#define PMC_IMR_PCKRDY0
#define PMC_IMR_PCKRDY1
#define PMC_IMR_PCKRDY2
#define PMC_IMR_MOSCSELS
#define PMC_IMR_MOSCRCS 
#define PMC_IMR_CFDEV 
/* -------- PMC_FSMR : (PMC Offset: 0x0070) Fast Start-up Mode Register -------- */
#define PMC_FSMR_FSTT0
#define PMC_FSMR_FSTT1
#define PMC_FSMR_FSTT2
#define PMC_FSMR_FSTT3
#define PMC_FSMR_FSTT4
#define PMC_FSMR_FSTT5
#define PMC_FSMR_FSTT6
#define PMC_FSMR_FSTT7
#define PMC_FSMR_FSTT8
#define PMC_FSMR_FSTT9
#define PMC_FSMR_FSTT10
#define PMC_FSMR_FSTT11
#define PMC_FSMR_FSTT12
#define PMC_FSMR_FSTT13
#define PMC_FSMR_FSTT14
#define PMC_FSMR_FSTT15 
#define PMC_FSMR_RTTAL 
#define PMC_FSMR_RTCAL
#define PMC_FSMR_USBAL
#define PMC_FSMR_LPM 
/* -------- PMC_FSPR : (PMC Offset: 0x0074) Fast Start-up Polarity Register -------- */
#define PMC_FSPR_FSTP0 
#define PMC_FSPR_FSTP1 
#define PMC_FSPR_FSTP2 
#define PMC_FSPR_FSTP3 
#define PMC_FSPR_FSTP4 
#define PMC_FSPR_FSTP5 
#define PMC_FSPR_FSTP6 
#define PMC_FSPR_FSTP7 
#define PMC_FSPR_FSTP8 
#define PMC_FSPR_FSTP9 
#define PMC_FSPR_FSTP10 
#define PMC_FSPR_FSTP11 
#define PMC_FSPR_FSTP12 
#define PMC_FSPR_FSTP13 
#define PMC_FSPR_FSTP14 
#define PMC_FSPR_FSTP15 
/* -------- PMC_FOCR : (PMC Offset: 0x0078) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR 
/* -------- PMC_WPMR : (PMC Offset: 0x00E4) Write Protect Mode Register -------- */
#define PMC_WPMR_WPEN 
#define PMC_WPMR_WPKEY_Pos 8
#define PMC_WPMR_WPKEY_Msk
#define PMC_WPMR_WPKEY
#define   PMC_WPMR_WPKEY_PASSWD 
/* -------- PMC_WPSR : (PMC Offset: 0x00E8) Write Protect Status Register -------- */
#define PMC_WPSR_WPVS 
#define PMC_WPSR_WPVSRC_Pos 8
#define PMC_WPSR_WPVSRC_Msk 

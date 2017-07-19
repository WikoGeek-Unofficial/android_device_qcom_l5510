
/*
WARNING: This file is auto-generated.

Generated using: rfc_autogen.exe
Generated from:  v2.41.733 of MSM8974_RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2013 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/gsm/src/rfc_wtr1605_chile_rp1_gsm_config_data_ag.c#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr1605_chile_rp1_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "wtr1605_typedef_ag.h" 
#include "rfdevice_qtuner_api.h" 



rfc_device_info_type rf_card_wtr1605_chile_rp1_init_gsm_rx_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_init_gsm_rx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_init_gsm_tx_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_init_gsm_tx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g850_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_PRX_BAND850_PLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g850_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -164 }, {RFC_LOW, 4 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g850_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_TX_BAND850_TLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x0d << 14)/*prd_id*/ | (13<< 7)/*sec_port_num*/ |(9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (27)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g850_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -200 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -135 }, {RFC_LOW, 16 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_1,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_0,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g900_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_PRX_BAND900_PLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
        RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g900_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -164 }, {RFC_LOW, 4 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g900_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_TX_BAND900_TLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
        RFDEVICE_PA,
      GEN_PA,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x0d << 14)/*prd_id*/ |(13 << 7)/*sec_port_num*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (27)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g900_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -200 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -135 }, {RFC_LOW, 16 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_1,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_0,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g1800_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_PRX_BAND1800_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g1800_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -164 }, {RFC_LOW, 4 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g1800_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_TX_BAND1800_TMB4,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x0d << 14)/*prd_id*/ |(15 << 7)/*sec_port_num*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (27)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g1800_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -200 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -135 }, {RFC_LOW, 16 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_1,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_0,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g1900_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_PRX_BAND1900_PMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_rx0_gsm_g1900_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -40 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -100 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -164 }, {RFC_LOW, 4 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g1900_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_GSM_TX_BAND1900_TMB4,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x0d << 14)/*prd_id*/ | (15 << 7)/*sec_port_num*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (27)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_tdd_info_type rf_card_wtr1605_chile_rp1_tx0_gsm_g1900_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PA_RANGE,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -3 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_ASM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_TUNER_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -150 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TIMING_PAPM_CTL,   { RFC_CONFIG_ONLY  /*Warning: Not specified*/ , -200 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0,   { RFC_HIGH, -135 }, {RFC_LOW, 16 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_1,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_GPDATA0_0,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH,   { RFC_CONFIG_ONLY, -10 }, {RFC_LOW, 66 }  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND,   { RFC_HIGH, -10 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_gsm_properties_type rfc_wtr1605_chile_rp1_gsm_properties = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  /* GSM_DESENSE_CHANNEL (Max: 25 per band) */
  {
    { (uint32)RFCOM_BAND_GSM850 , 134 },
    { (uint32)RFCOM_BAND_GSM850 , 150 },
    { (uint32)RFCOM_BAND_GSM850 , 166 },
    { (uint32)RFCOM_BAND_GSM850 , 182 },
    { (uint32)RFCOM_BAND_GSM850 , 198 },
    { (uint32)RFCOM_BAND_GSM850 , 200 },
    { (uint32)RFCOM_BAND_GSM850 , 214 },
    { (uint32)RFCOM_BAND_GSM850 , 230 },
    { (uint32)RFCOM_BAND_GSM850 , 246 },
    { (uint32)RFCOM_BAND_GSM900 , 989 },
    { (uint32)RFCOM_BAND_GSM900 , 1005 },
    { (uint32)RFCOM_BAND_GSM900 , 1006 },
    { (uint32)RFCOM_BAND_GSM900 , 1021 },
    { (uint32)RFCOM_BAND_GSM900 , 13 },
    { (uint32)RFCOM_BAND_GSM900 , 29 },
    { (uint32)RFCOM_BAND_GSM900 , 45 },
    { (uint32)RFCOM_BAND_GSM900 , 61 },
    { (uint32)RFCOM_BAND_GSM900 , 77 },
    { (uint32)RFCOM_BAND_GSM900 , 85 },
    { (uint32)RFCOM_BAND_GSM900 , 86 },
    { (uint32)RFCOM_BAND_GSM900 , 93 },
    { (uint32)RFCOM_BAND_GSM900 , 101 },
    { (uint32)RFCOM_BAND_GSM900 , 109 },
    { (uint32)RFCOM_BAND_GSM1800 , 529 },
    { (uint32)RFCOM_BAND_GSM1800 , 561 },
    { (uint32)RFCOM_BAND_GSM1800 , 593 },
    { (uint32)RFCOM_BAND_GSM1800 , 606 },
    { (uint32)RFCOM_BAND_GSM1800 , 702 },
    { (uint32)RFCOM_BAND_GSM1800 , 767 },
    { (uint32)RFCOM_BAND_GSM1800 , 798 },
    { (uint32)RFCOM_BAND_GSM1800 , 799 },
    { (uint32)RFCOM_BAND_GSM1800 , 831 },
    { (uint32)RFCOM_BAND_GSM1900 , 557 },
    { (uint32)RFCOM_BAND_GSM1900 , 620 },
    { (uint32)RFCOM_BAND_GSM1900 , 646 },
    { (uint32)RFCOM_BAND_GSM1900 , 647 },
    { (uint32)RFCOM_BAND_GSM1900 , 653 },
    { (uint32)RFCOM_BAND_GSM1900 , 684 },
    { (uint32)RFCOM_BAND_GSM1900 , 712 },
    { (uint32)RFCOM_BAND_GSM1900 , 749 },
    { (uint32)RFCOM_BAND_GSM1900 , 771 },
    { (uint32)RFCOM_NUM_GSM_BANDS , RFC_INVALID_PARAM },
  },
};


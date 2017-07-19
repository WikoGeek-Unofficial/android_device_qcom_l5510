
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

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/wcdma/src/rfc_wtr1605_chile_rp1_wcdma_config_data_ag.c#2 $ 


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



rfc_device_info_type rf_card_wtr1605_chile_rp1_init_wcdma_rx_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_wcdma_rx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_init_wcdma_tx_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_wcdma_tx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_device_info = 
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
        (int)WTR1605_WCDMA_PRX_BAND1_PMB3,  /* PORT */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_01,  RFC_HIGH  },    
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_WCDMA_TX_BAND1_TMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x01A5 << 22)/*mfg_id*/ | (0x0D << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (31)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_device_info = 
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
        (int)WTR1605_WCDMA_PRX_BAND2_PMB2,  /* PORT */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_WCDMA_TX_BAND2_TMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x01A5 << 22)/*mfg_id*/ | (0x0D << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (31)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */ 
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },    
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_device_info = 
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
        (int)WTR1605_WCDMA_PRX_BAND5_PLB3,  /* PORT */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_WCDMA_TX_BAND5_TLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x01A5 << 22)/*mfg_id*/ | (0x0D << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (31)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */ 
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },    
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_device_info = 
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
        (int)WTR1605_WCDMA_PRX_BAND8_PLB2,  /* PORT */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_WCDMA_TX_BAND8_TLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x01A5 << 22)/*mfg_id*/ | (0x0D << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (31)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },    
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};




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

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/lte/src/rfc_wtr1605_chile_rp1_lte_config_data_ag.c#2 $ 


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



rfc_device_info_type rf_card_wtr1605_chile_rp1_init_lte_rx_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_lte_rx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_init_lte_tx_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_lte_tx_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b1_device_info = 
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
        (int)WTR1605_LTEFDD_PRX_BAND1_PMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b1_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_01, RFC_HIGH  },		
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b1_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTEFDD_DRX_BAND1_DMB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */ 
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b1_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b1_device_info = 
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
        (int)WTR1605_LTEFDD_TX_BAND1_TMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (30)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b1_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b3_device_info = 
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
        (int)WTR1605_LTEFDD_PRX_BAND3_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b3_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b3_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTEFDD_DRX_BAND3_DMB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b3_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_HIGH },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b3_device_info = 
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
        (int)WTR1605_LTEFDD_TX_BAND3_TMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x01A5 << 22)/*mfg_id*/ | (0x0D << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (30)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b3_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b7_device_info = 
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
        (int)WTR1605_LTEFDD_PRX_BAND7_PHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b7_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b7_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTEFDD_DRX_BAND7_DHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b7_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b7_device_info = 
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
        (int)WTR1605_LTEFDD_TX_BAND7_THB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x17 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b7_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.729 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_03, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b17_device_info = 
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
        (int)WTR1605_LTEFDD_PRX_BAND17_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b17_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b17_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTEFDD_DRX_BAND17_DLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b17_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b17_device_info = 
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
        (int)WTR1605_LTEFDD_TXWSAW_BAND17_TLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      3,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x1B << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b17_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.729 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b20_device_info = 
{
  0x022902DD,   /* Revision: v2.41.729 */
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
        (int)WTR1605_LTEFDD_PRX_BAND20_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b20_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.729 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b20_device_info = 
{
  0x022902DD,   /* Revision: v2.41.729 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTEFDD_DRX_BAND20_DLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b20_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.729 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b20_device_info = 
{
  0x022902DD,   /* Revision: v2.41.729 */
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
        (int)WTR1605_LTEFDD_TX_BAND20_TLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (30)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b20_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};



rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b38_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
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
        (int)WTR1605_LTETDD_PRX_BAND38_PHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b38_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b38_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  2,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_DRX_BAND38_DHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b38_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b38_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_TX_BAND38_THB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
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
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b38_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b39_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
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
        (int)WTR1605_LTETDD_PRX_BAND39_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2320EPT,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b39_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b39_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  2,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_DRX_BAND39_DMB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b39_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b39_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_TX_BAND39_TMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2320EPT,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (16)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2320EPT,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
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
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b39_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_INTERNAL_GNSS_BLANK_CONCURRENCY, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b40_device_info = 
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
        (int)WTR1605_LTETDD_PRX_BAND40_PHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /*RFMD1496A */,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b40_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b40_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  1,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_DRX_BAND40_DHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b40_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_24, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b40_device_info = 
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
        (int)WTR1605_LTETDD_TX_BAND40_THB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x2A << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
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
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b40_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_03, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
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
        (int)WTR1605_LTETDD_PRX_BAND41_PHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  2,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_DRX_BAND41_DHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_TX_BAND41_THB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
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
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
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
        (int)WTR1605_LTETDD_PRX_BAND41_PHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  2,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_DRX_BAND41_DHB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      1,  /* DEVICE_TYPE_INSTANCE */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_00, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_02, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RX_ON0_alt, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_07, RFC_HIGH  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_15, RFC_LOW  },
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_05, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_device_info = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  RFC_TX_MODEM_CHAIN_1,   /* ET Modem Chain */
  0,   /* NV Container */
  0,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR1605,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR1605_LTETDD_TX_BAND41_THB,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR1605_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR1605_LP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR1605_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
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
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_6T */,  /* NAME */
      2,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x06 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      0,  /* DEVICE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
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
    {
      RFDEVICE_TUNER,
      QFE2520,  /* NAME */
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_ON0, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_TX_GTR_TH, RFC_CONFIG_ONLY  },
    { (int)RFC_WTR1605_CHILE_RP1_PA_IND, RFC_CONFIG_ONLY  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_lte_en_et_cal0_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_lte_en_et_cal0_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12, RFC_HIGH  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_device_info_type rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_device_info = 
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


rfc_sig_info_type rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_sig_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { (int)RFC_WTR1605_CHILE_RP1_RF_PATH_SEL_12, RFC_LOW  },
    { (int)RFC_SIG_LIST_END,  RFC_LOW  }
  },
};


rfc_band_split_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_split_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { 40240, 41240, (int)RFCOM_BAND_LTE_B41, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 41241, 41589, (int)RFCOM_BAND_LTE_B41_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};

rfc_band_split_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_split_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { 40240, 41240, (int)RFCOM_BAND_LTE_B41, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 41241, 41589, (int)RFCOM_BAND_LTE_B41_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};

rfc_band_split_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_split_cfg = 
{
  0x022902DD,   /* Revision: v2.41.733 */
  {
    { 40240, 41240, (int)RFCOM_BAND_LTE_B41, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 41241, 41589, (int)RFCOM_BAND_LTE_B41_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};


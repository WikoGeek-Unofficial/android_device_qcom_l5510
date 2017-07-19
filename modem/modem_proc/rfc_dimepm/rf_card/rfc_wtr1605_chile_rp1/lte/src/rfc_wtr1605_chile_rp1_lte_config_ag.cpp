
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

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/lte/src/rfc_wtr1605_chile_rp1_lte_config_ag.cpp#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr1605_chile_rp1_lte_config_ag.h" 
#include "rfc_wtr1605_chile_rp1_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "rfcommon_efs.h" 



const int8  RFC_EFS_VER_MAX_STRING_SIZE = 80;
const char RFC_EFS_VER_FILE_PATH[] =  "/rfc_ver_data" ; 


extern "C" 
{
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_init_lte_rx_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_lte_rx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_init_lte_tx_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_lte_tx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b3_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b3_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b3_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b3_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b3_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b3_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b7_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b7_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b7_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b7_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b7_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b7_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b17_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b17_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b17_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b17_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b17_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b17_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b20_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b20_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b20_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b20_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b20_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b20_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b38_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b38_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b38_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b38_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b38_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b38_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b39_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b39_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b39_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b39_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b39_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b39_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b40_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b40_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b40_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b40_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b40_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b40_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_lte_en_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_lte_en_et_cal0_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_sig_cfg;

  extern rfc_timing_info_type rfc_msm_timing_info[RFC_TIMING_PARAMS_NUM];
} /* extern "C" */


rfc_lte_data * rfc_wtr1605_chile_rp1_lte_ag::get_instance()
{
  if (rfc_lte_data_ptr == NULL)
  {
    rfc_lte_data_ptr = (rfc_lte_data *)new rfc_wtr1605_chile_rp1_lte_ag();
  }
  return( (rfc_lte_data *)rfc_lte_data_ptr);
}

//constructor
rfc_wtr1605_chile_rp1_lte_ag::rfc_wtr1605_chile_rp1_lte_ag()
  :rfc_lte_data()
{
}

boolean rfc_wtr1605_chile_rp1_lte_ag::sig_cfg_data_get( rfc_cfg_params_type *cfg, rfc_sig_cfg_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_lte_rx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_lte_tx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b3_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b3_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b3_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b7_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b7_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b7_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b17_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b17_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b17_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }
  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b20_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b20_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b20_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }
  
  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b38_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b38_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b38_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b39_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b39_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b39_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b40_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b40_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b40_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b41_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b41_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b41_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_lte_en_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else 
  { *ptr = NULL;  }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_lte_ag::devices_cfg_data_get( rfc_cfg_params_type *cfg, rfc_device_info_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_lte_rx_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_lte_tx_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b1_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b1_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b1_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b3_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b3_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b3_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b7_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b7_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b7_device_info);  ret_val = TRUE; }
  
  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b17_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b17_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b17_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b20_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b20_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b20_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b38_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b38_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b38_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b39_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b39_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b39_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b40_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b40_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b40_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b41_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b41_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b41_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_lte_en_et_cal0_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_device_info);  ret_val = TRUE; }

  else 
  { *ptr = NULL;  }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_lte_ag::timing_cfg_data_get( rfc_cfg_params_type *cfg, rfc_timing_info_type **ptr )
{

  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B1 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B3 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B7 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }
  
  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B17 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B20 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B38 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B39 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B40 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_1 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_LTE_B41_B ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_LTE_B1 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B2 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B3 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B4 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B7 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B8 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B17 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B20 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B38 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B39 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B40 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41 )||  ( cfg->band == (int)RFCOM_BAND_LTE_B41_B )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) )
  { *ptr = &(rfc_msm_timing_info[0]);  ret_val = TRUE; }

  else 
  { *ptr = NULL;  }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_lte_ag::ca_scell_log_path_swap_data_get( rfc_band_pair_list_type **ptr )
{
  if (NULL==ptr)
  {
    return FALSE;
  }

  *ptr = NULL;

  return TRUE;
}

extern "C" 
{
  extern rfc_band_split_info_type rf_card_wtr1605_chile_rp1_rx0_lte_b41_split_cfg;
  extern rfc_band_split_info_type rf_card_wtr1605_chile_rp1_rx1_lte_b41_split_cfg;
  extern rfc_band_split_info_type rf_card_wtr1605_chile_rp1_tx0_lte_b41_split_cfg;
}  /* extern "C" */

boolean rfc_wtr1605_chile_rp1_lte_ag::band_split_cfg_data_get( rfc_cfg_params_type *cfg, rfc_band_split_info_type **ptr )
{
  boolean ret_val = FALSE;

  if (NULL==ptr)
  {
    return FALSE;
  }

  if (NULL==cfg)
  {
    *ptr = NULL;
    return FALSE;
  }

  *ptr = NULL;

  if ( (cfg->rx_tx == RFC_CONFIG_RX) && (cfg->logical_device == RFM_DEVICE_0) && (cfg->band == (int)RFCOM_BAND_LTE_B41) )
  { *ptr = &rf_card_wtr1605_chile_rp1_rx0_lte_b41_split_cfg; ret_val = TRUE; }

  else if ( (cfg->rx_tx == RFC_CONFIG_RX) && (cfg->logical_device == RFM_DEVICE_0) && (cfg->band == (int)RFCOM_BAND_LTE_B41_B) )
  { *ptr = &rf_card_wtr1605_chile_rp1_rx0_lte_b41_split_cfg; ret_val = TRUE; }

  else if ( (cfg->rx_tx == RFC_CONFIG_RX) && (cfg->logical_device == RFM_DEVICE_1) && (cfg->band == (int)RFCOM_BAND_LTE_B41) )
  { *ptr = &rf_card_wtr1605_chile_rp1_rx1_lte_b41_split_cfg; ret_val = TRUE; }

  else if ( (cfg->rx_tx == RFC_CONFIG_RX) && (cfg->logical_device == RFM_DEVICE_1) && (cfg->band == (int)RFCOM_BAND_LTE_B41_B) )
  { *ptr = &rf_card_wtr1605_chile_rp1_rx1_lte_b41_split_cfg; ret_val = TRUE; }

  else if ( (cfg->rx_tx == RFC_CONFIG_TX) && (cfg->logical_device == RFM_DEVICE_0) && (cfg->band == (int)RFCOM_BAND_LTE_B41) )
  { *ptr = &rf_card_wtr1605_chile_rp1_tx0_lte_b41_split_cfg; ret_val = TRUE; }

  else if ( (cfg->rx_tx == RFC_CONFIG_TX) && (cfg->logical_device == RFM_DEVICE_0) && (cfg->band == (int)RFCOM_BAND_LTE_B41_B) )
  { *ptr = &rf_card_wtr1605_chile_rp1_tx0_lte_b41_split_cfg; ret_val = TRUE; }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_lte_ag::get_rfcard_data(void)
{
  int32 ret_val = TRUE;
  char rfc_efs_ver_file[RFC_EFS_VER_MAX_STRING_SIZE +1];
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx_lte_init_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_rx_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_rx_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx_lte_init_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_rx_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_rx_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx_lte_init_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_tx_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_tx_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx_lte_init_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_tx_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_lte_tx_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_00_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b1_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b1_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_00_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b1_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b1_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_00_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b1_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b1_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_00_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b1_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b1_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*5), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_00_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b1_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b1_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_00_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b1_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b1_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_02_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b3_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b3_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_02_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b3_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b3_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*3), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_02_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b3_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b3_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_02_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b3_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b3_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*5), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_02_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b3_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b3_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_02_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b3_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b3_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_06_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b7_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b7_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*3), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_06_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b7_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b7_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_06_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b7_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b7_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_06_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b7_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b7_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_06_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b7_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b7_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_06_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b7_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b7_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
    (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_16_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b17_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b17_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*3), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_16_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b17_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b17_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_16_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b17_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b17_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_16_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b17_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b17_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_16_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b17_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b17_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_16_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b17_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b17_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
   (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_19_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b20_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b20_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_19_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b20_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b20_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*3), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_19_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b20_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b20_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_19_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b20_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b20_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*5), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_19_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b20_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b20_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_19_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b20_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b20_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );

  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_37_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b38_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b38_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_37_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b38_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b38_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_37_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b38_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b38_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_37_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b38_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b38_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_37_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b38_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b38_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_37_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b38_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b38_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_38_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b39_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b39_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_38_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b39_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b39_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*3), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_38_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b39_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b39_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_38_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b39_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b39_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*5), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_38_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b39_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b39_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_38_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b39_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b39_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*5), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_39_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b40_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b40_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_39_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b40_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b40_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_39_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b40_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b40_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_39_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b40_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b40_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_39_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b40_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b40_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_39_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b40_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b40_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_40_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_40_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_40_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_40_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_40_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_40_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_40_b_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx0_lte_40_b_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_lte_b41_b_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_40_b_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "rx1_lte_40_b_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx1_lte_b41_b_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_40_b_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "tx0_lte_40_b_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_lte_b41_b_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "lte_en_et_cal0_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_en_et_cal0_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_en_et_cal0_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "lte_en_et_cal0_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_en_et_cal0_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_en_et_cal0_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "lte_dis_et_cal0_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "lte", "lte_dis_et_cal0_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_lte_dis_et_cal0_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  return ret_val;
}



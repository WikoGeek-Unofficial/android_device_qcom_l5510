
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

$Header: //Commercial/MPSS.DPM.1.0.c7/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr1605_chile_rp1/wcdma/src/rfc_wtr1605_chile_rp1_wcdma_config_ag.cpp#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr1605_chile_rp1_wcdma_config_ag.h" 
#include "rfc_wtr1605_chile_rp1_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "rfcommon_efs.h" 



const int8  RFC_EFS_VER_MAX_STRING_SIZE = 80;
const char RFC_EFS_VER_FILE_PATH[] =  "/rfc_ver_data" ; 


extern "C" 
{
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_init_wcdma_rx_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_wcdma_rx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_init_wcdma_tx_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_init_wcdma_tx_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_sig_cfg;
  extern rfc_device_info_type rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_device_info;
  extern rfc_sig_info_type rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_sig_cfg;
} /* extern "C" */


rfc_wcdma_data * rfc_wtr1605_chile_rp1_wcdma_ag::get_instance()
{
  if (rfc_wcdma_data_ptr == NULL)
  {
    rfc_wcdma_data_ptr = (rfc_wcdma_data *)new rfc_wtr1605_chile_rp1_wcdma_ag();
  }
  return( (rfc_wcdma_data *)rfc_wcdma_data_ptr);
}

//constructor
rfc_wtr1605_chile_rp1_wcdma_ag::rfc_wtr1605_chile_rp1_wcdma_ag()
  :rfc_wcdma_data()
{
}

boolean rfc_wtr1605_chile_rp1_wcdma_ag::sig_cfg_data_get( rfc_cfg_params_type *cfg, rfc_sig_cfg_type **ptr )
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
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_wcdma_rx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_wcdma_tx_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_sig_cfg.cfg_sig_list[0]);  ret_val = TRUE; }

  else 
  { *ptr = NULL;  }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_wcdma_ag::devices_cfg_data_get( rfc_cfg_params_type *cfg, rfc_device_info_type **ptr )
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
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_wcdma_rx_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->req == RFC_REQ_INIT ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_init_wcdma_tx_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_IMT ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_1900 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_800 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_TX ) && ( cfg->logical_device == RFM_DEVICE_0 ) && ( cfg->band == (int)RFCOM_BAND_BC8 ) && ( cfg->req == RFC_REQ_DEFAULT_GET_DATA ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_ENABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_device_info);  ret_val = TRUE; }

  else if ( ( cfg->rx_tx == RFC_CONFIG_RX ) && ( ( cfg->band == (int)RFCOM_BAND_IMT )||  ( cfg->band == (int)RFCOM_BAND_1900 )||  ( cfg->band == (int)RFCOM_BAND_BC3 )||  ( cfg->band == (int)RFCOM_BAND_800 )||  ( cfg->band == (int)RFCOM_BAND_BC8 )) && ( cfg->req == RFC_REQ_DISABLE_ET_CAL ) )
  { *ptr = &(rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_device_info);  ret_val = TRUE; }

  else 
  { *ptr = NULL;  }

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_wcdma_ag::band_split_cfg_data_get( rfc_cfg_params_type *cfg, rfc_band_split_info_type **ptr )
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

  return ret_val;
}

boolean rfc_wtr1605_chile_rp1_wcdma_ag::get_rfcard_data(void)
{
  int32 ret_val = TRUE;
  char rfc_efs_ver_file[RFC_EFS_VER_MAX_STRING_SIZE +1];
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx_wcdma_init_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_rx_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_rx_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx_wcdma_init_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_rx_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_rx_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx_wcdma_init_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_tx_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_tx_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx_wcdma_init_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_tx_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_init_wcdma_tx_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_00_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_00_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b1_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_00_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_00_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b1_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_01_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_01_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b2_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_01_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_01_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b2_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_04_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_04_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b5_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_04_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_04_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b5_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_05_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "rx0_wcdma_05_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_rx0_wcdma_b8_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_05_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*7), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "tx0_wcdma_05_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_tx0_wcdma_b8_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*4), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "wcdma_en_et_cal0_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "wcdma_en_et_cal0_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_en_et_cal0_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "wcdma_dis_et_cal0_device_info"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_device_info , (sizeof(uint32)*5), 0 );
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_device_info.rf_asic_info[0] , (sizeof(rfc_asic_info_type)*1), 1 );
  
  
  (void) snprintf(rfc_efs_ver_file, (sizeof(char) * ( RFC_EFS_VER_MAX_STRING_SIZE + 1)), "%s/%s/%s/%s.dat", 
                 RFC_EFS_VER_FILE_PATH, "rfc_wtr1605_chile_rp1", "wcdma", "wcdma_dis_et_cal0_sig_cfg"); 
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_sig_cfg , sizeof(uint32), 0 );   
  ret_val &=  rfcommon_efs_put(rfc_efs_ver_file, (uint8 *)&rf_card_wtr1605_chile_rp1_wcdma_dis_et_cal0_sig_cfg.cfg_sig_list[0] , (sizeof(rfc_sig_cfg_type)*2), 1 );
  
  return ret_val;
}



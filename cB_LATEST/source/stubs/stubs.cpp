/******************************************************************************/
/* File   : stubs.cpp                                                         */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Types_Std.hpp"

#include "infSwcApplTpmsAra.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
static void                   receive_vehicle_state           (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_state_et*             const){}
static void                   receive_vehicle_velocity        (Dtms_signal_quali_et*             const, uint16*                                const){}
static void                   receive_odometer                (Dtms_signal_quali_et*             const, uint32*                                const){}
static void                   receive_air_temperature         (Dtms_signal_quali_et*             const, sint16*                                const){}
static void                   receive_date_and_time           (Dtms_signal_quali_et*             const, Dtms_signal_grp_date_and_time_type_st* const){}
static void                   receive_atmospheric_pressure    (Dtms_signal_quali_et*             const, uint16*                                const){}
static void                   receive_relative_time           (Dtms_signal_quali_et*             const, uint32*                                const){}
static void                   receive_altitude                (Dtms_signal_quali_et*             const, float*                                 const, float* const){}
static void                   receive_vehicle_gear            (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_gear_et*              const){}
static Dtms_network_status_et receive_network_status          (void){return 0;}
static uint8                  receive_network_dtc_suppression (void){return 0;}
static uint8                  receive_rdci_coding_parameters  (Dtms_coding_type_st*){return 0;}
static uint8                  receive_rdci_coding_erfs_caf    (Dtms_coding_erfs_caf_type_st*){return 0;}
static void                   receive_nvm_block_addresses     (Dtms_nvm_block_addresses_type_st* const){}
static void                   send_check_control_message      (Dtms_ccm_type_st*                       const){}
static void                   send_tyre_current_data          (Dtms_display_pressure_type_st*          const, Dtms_display_temperature_type_st* const){}
static void                   send_tyre_target_pressures      (Dtms_display_pressure_type_st*          const){}
static void                   send_tyre_status                (Dtms_tyre_status_type_st*               const){}
static void                   send_fbd_control                (Dtms_fbd_control_data_type_st*          const){}
static void                   send_tyre_mileage               (Dtms_tyre_mileage_data_type_st*         const){}
static void                   send_tyre_qr_code               (Dtms_qr_code_data_type_st*              const){}
static void                   send_tyre_last_internal_data    (Dtms_last_internal_data_type_st*        const){}
static void                   send_tyre_parking_supervision   (Dtms_tyre_parking_supervision_type_st*  const){}
static void                   send_wheel_status_change        (Dtms_wheel_status_change_type_st*       const){}
static void                   send_parking_monitoring         (Dtms_parking_monitoring_type_st*        const){}
static void                   send_calibration_data           (Dtms_calibration_data_type_st*          const){}
static void                   send_erfs_actual_tyre_data      (Dtms_erfs_actual_tyre_data_type_st*     const){}
static void                   send_erfs_hmi_axle_tyre_data    (Dtms_erfs_hmi_axle_tyre_type_st*        const){}
static void                   send_erfs_hmi_status            (Dtms_erfs_status_type_st*               const){}
static void                   send_tyre_pressure_level_data   (Dtms_pressure_level_indicator_type_st*  const){}
static void                   send_erfs_hmi_notification      (Dtms_erfs_hmi_notification_type_st*     const){}
static uint8                  send_dtc_event_status           (Dtms_dtc_id_et,                                Dtms_dtc_set_event_et){return 0;}
static uint8                  send_nvm_write_block_request    (Dtms_nvm_block_ids_et){return 0;}

static void receive_nvm_block_error_status(Dtms_nvm_block_ids_et, Dtms_nvm_req_et* const){
   //TBD: if(CfgSwcApplTpms_dSizeReqNvM > Dtms_nvm_block_ids_et){}
}

static void send_rdci_debug_msg(uint8* development_log_p){
   UNUSED(development_log_p);
   //TBD: if(NULL_PTR != development_log_p){}
}

static void send_diagnostic_log_and_trace(uint8 source_file_id, uint16 line_number){
   UNUSED(source_file_id);
   UNUSED(line_number);
}

int main(void){
   Type_infSwcApplTpmsAra_stContext lstContext;
   lstContext.get_vehicle_state            = receive_vehicle_state;
   lstContext.get_vehicle_velocity         = receive_vehicle_velocity;
   lstContext.get_odometer                 = receive_odometer;
   lstContext.get_air_temperature          = receive_air_temperature;
   lstContext.get_date_and_time            = receive_date_and_time;
   lstContext.get_atmospheric_pressure     = receive_atmospheric_pressure;
   lstContext.get_relative_time            = receive_relative_time;
   lstContext.get_altitude                 = receive_altitude;
   lstContext.get_vehicle_gear             = receive_vehicle_gear;
   lstContext.get_network_status           = receive_network_status;
   lstContext.get_network_dtc_suppression  = receive_network_dtc_suppression;
   lstContext.get_rdci_coding_parameters   = receive_rdci_coding_parameters;
   lstContext.get_rdci_coding_erfs_caf     = receive_rdci_coding_erfs_caf;
   lstContext.get_nvm_block_addresses      = receive_nvm_block_addresses;
   lstContext.get_nvm_block_error_status   = receive_nvm_block_error_status;

   lstContext.set_check_control_message    = send_check_control_message;
   lstContext.set_tyre_current_data        = send_tyre_current_data;
   lstContext.set_tyre_target_pressures    = send_tyre_target_pressures;
   lstContext.set_rdci_debug_msg           = send_rdci_debug_msg;
   lstContext.set_tyre_status              = send_tyre_status;
   lstContext.set_fbd_control              = send_fbd_control;
   lstContext.set_tyre_mileage             = send_tyre_mileage;
   lstContext.set_tyre_qr_code             = send_tyre_qr_code;
   lstContext.set_tyre_last_internal_data  = send_tyre_last_internal_data;
   lstContext.set_tyre_parking_supervision = send_tyre_parking_supervision;
   lstContext.set_wheel_status_change      = send_wheel_status_change;
   lstContext.set_parking_monitoring       = send_parking_monitoring;
   lstContext.set_calibration_data         = send_calibration_data;
   lstContext.set_erfs_actual_tyre_data    = send_erfs_actual_tyre_data;
   lstContext.set_erfs_hmi_axle_tyre_data  = send_erfs_hmi_axle_tyre_data;
   lstContext.set_erfs_hmi_status          = send_erfs_hmi_status;
   lstContext.set_tyre_pressure_level_data = send_tyre_pressure_level_data;
   lstContext.set_erfs_hmi_notification    = send_erfs_hmi_notification;
   lstContext.set_dtc_event_status         = send_dtc_event_status;
   lstContext.set_nvm_write_block_request  = send_nvm_write_block_request;
   lstContext.set_diagnostic_log_and_trace = send_diagnostic_log_and_trace;

   infSwcApplTpmsAra_vInit(
      &lstContext
   );

   for(
      uint8 u8CounterTask =  0;
            u8CounterTask < 10;
            u8CounterTask ++
   ){
      infSwcApplTpmsAra_vRunnable();
   }

   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


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

#include "rdci_context_handling.hpp"
#include "rdci_diag_data.hpp"
#include "rdci_interface.hpp"

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
void                   receive_vehicle_state           (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_state_et*             const){}
void                   receive_vehicle_velocity        (Dtms_signal_quali_et*             const, uint16_t*                              const){}
void                   receive_odometer                (Dtms_signal_quali_et*             const, uint32_t*                              const){}
void                   receive_air_temperature         (Dtms_signal_quali_et*             const, int16_t*                               const){}
void                   receive_date_and_time           (Dtms_signal_quali_et*             const, Dtms_signal_grp_date_and_time_type_st* const){}
void                   receive_atmospheric_pressure    (Dtms_signal_quali_et*             const, uint16_t*                              const){}
void                   receive_relative_time           (Dtms_signal_quali_et*             const, uint32_t*                              const){}
void                   receive_altitude                (Dtms_signal_quali_et*             const, float*                                 const, float* const){}
void                   receive_vehicle_gear            (Dtms_signal_quali_et*             const, Dtms_bmw_vehicle_gear_et*              const){}
Dtms_network_status_et receive_network_status          (void){return 0;}
uint8_t                receive_network_dtc_suppression (void){return 0;}
uint8_t                receive_rdci_coding_parameters  (Dtms_coding_type_st*){return 0;}
void                   send_check_control_message      (Dtms_ccm_type_st*                       const){}
void                   send_tyre_current_data          (Dtms_display_pressure_type_st*          const, Dtms_display_temperature_type_st* const){}
void                   send_tyre_target_pressures      (Dtms_display_pressure_type_st*          const){}
void                   send_rdci_debug_msg             (uint8_t* development_log_p){UNUSED(development_log_p);}
void                   send_tyre_status                (Dtms_tyre_status_type_st*               const){}
void                   send_fbd_control                (Dtms_fbd_control_data_type_st*          const){}
void                   send_tyre_mileage               (Dtms_tyre_mileage_data_type_st*         const){}
void                   send_tyre_qr_code               (Dtms_qr_code_data_type_st*              const){}
void                   send_tyre_last_internal_data    (Dtms_last_internal_data_type_st*        const){}
void                   send_tyre_parking_supervision   (Dtms_tyre_parking_supervision_type_st*  const){}
void                   send_wheel_status_change        (Dtms_wheel_status_change_type_st*       const){}
void                   send_parking_monitoring         (Dtms_parking_monitoring_type_st*        const){}
void                   send_calibration_data           (Dtms_calibration_data_type_st*          const){}
void                   send_erfs_actual_tyre_data      (Dtms_erfs_actual_tyre_data_type_st*     const){}
void                   send_erfs_hmi_axle_tyre_data    (Dtms_erfs_hmi_axle_tyre_type_st*        const){}
void                   send_erfs_hmi_status            (Dtms_erfs_status_type_st*               const){}
void                   send_tyre_pressure_level_data   (Dtms_pressure_level_indicator_type_st*  const){}
void                   send_erfs_hmi_notification      (Dtms_erfs_hmi_notification_type_st*     const){}
uint8_t                receive_rdci_coding_erfs_caf    (Dtms_coding_erfs_caf_type_st*){return 0;}
uint8_t                send_dtc_event_status           (Dtms_dtc_id_et,                                Dtms_dtc_set_event_et){return 0;}
void                   receive_nvm_block_addresses     (Dtms_nvm_block_addresses_type_st* const){}
void                   receive_nvm_block_error_status  (Dtms_nvm_block_ids_et,                   Dtms_nvm_req_et*                       const){}
uint8_t                send_nvm_write_block_request    (Dtms_nvm_block_ids_et){return 0;}
void                   send_diagnostic_log_and_trace   (uint8_t source_file_id,                        uint16_t                          line_number){UNUSED(source_file_id);UNUSED(line_number);}

int main(void){
   rdci_provider_context_t rdci_context;
   rdci_context.get_vehicle_state            = receive_vehicle_state;
   rdci_context.get_vehicle_velocity         = receive_vehicle_velocity;
   rdci_context.get_odometer                 = receive_odometer;
   rdci_context.get_air_temperature          = receive_air_temperature;
   rdci_context.get_date_and_time            = receive_date_and_time;
   rdci_context.get_atmospheric_pressure     = receive_atmospheric_pressure;
   rdci_context.get_relative_time            = receive_relative_time;
   rdci_context.get_altitude                 = receive_altitude;
   rdci_context.get_vehicle_gear             = receive_vehicle_gear;
   rdci_context.get_network_status           = receive_network_status;
   rdci_context.get_network_dtc_suppression  = receive_network_dtc_suppression;
   rdci_context.get_rdci_coding_parameters   = receive_rdci_coding_parameters;
   rdci_context.set_check_control_message    = send_check_control_message;
   rdci_context.set_tyre_current_data        = send_tyre_current_data;
   rdci_context.set_tyre_target_pressures    = send_tyre_target_pressures;
   rdci_context.set_rdci_debug_msg           = send_rdci_debug_msg;
   rdci_context.set_tyre_status              = send_tyre_status;
   rdci_context.set_fbd_control              = send_fbd_control;
   rdci_context.set_tyre_mileage             = send_tyre_mileage;
   rdci_context.set_tyre_qr_code             = send_tyre_qr_code;
   rdci_context.set_tyre_last_internal_data  = send_tyre_last_internal_data;
   rdci_context.set_tyre_parking_supervision = send_tyre_parking_supervision;
   rdci_context.set_wheel_status_change      = send_wheel_status_change;
   rdci_context.set_parking_monitoring       = send_parking_monitoring;
   rdci_context.set_calibration_data         = send_calibration_data;
   rdci_context.set_erfs_actual_tyre_data    = send_erfs_actual_tyre_data;
   rdci_context.set_erfs_hmi_axle_tyre_data  = send_erfs_hmi_axle_tyre_data;
   rdci_context.set_erfs_hmi_status          = send_erfs_hmi_status;
   rdci_context.set_tyre_pressure_level_data = send_tyre_pressure_level_data;
   rdci_context.set_erfs_hmi_notification    = send_erfs_hmi_notification;
   rdci_context.get_rdci_coding_erfs_caf     = receive_rdci_coding_erfs_caf;
   rdci_context.set_dtc_event_status         = send_dtc_event_status;
   rdci_context.get_nvm_block_addresses      = receive_nvm_block_addresses;
   rdci_context.get_nvm_block_error_status   = receive_nvm_block_error_status;
   rdci_context.set_nvm_write_block_request  = send_nvm_write_block_request;
   rdci_context.set_diagnostic_log_and_trace = send_diagnostic_log_and_trace;
   swc_rdci_init_context(
      &rdci_context
   );
   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


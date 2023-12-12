/******************************************************************************/
/* File   : wrapper.c                                                         */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "JumpTable.h"
#include "Wrapper_HBG_RDCiSystem.h"

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
#include "Std_Types.h"
#include "Rte_Compiler_Cfg.h"
#include "Rte_Type.h"

static Rdci_V_VEH_Type                speedData;
static uint8                          unitMileData;
static uint8                          unitAipData;
static uint8                          unitTempData;
static uint8                          temperatureData;
static Rdci_WMOM_DRV_4_Type           directionData;
static uint8                          OpSlctnTyr;
static uint8                          OpTarPLoco;
static uint8                          OpTpct;
static uint8                          OpTyrSeason;
static uint8                          RqOl;
static uint8                          OpIdrSlctn;
static uint8                          StIdrMsgc;
static Rdci_T_SEC_COU_REL_Type        timeRel;
static Rdci_AIP_ENG_DRV_Type          ambientPressure;
static Rdci_GNSSPositionAltitude_Type posAltitude;
static Rdci_GNSSPositionAltitude_Type errorAltitudeMeters;
static Rdci_UHRZEIT_DATUM_Type        timeDate;
static Rdci_MILE_KM_Type              MileKm;
static Rdci_CON_VEH_Type              vehicleCondition;
static ImpTypeValFrBusState           FlexrayBusState;
static Rdci_ST_ILK_ERRM_FZM_Type      ucStIlkErrmFzm;
static Rdci_ST_ENERG_FZM_Type         ucStEnergFzm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif
extern FUNC(void, RTE_CODE) PutSpeedData           (P2CONST(Rdci_V_VEH_Type,                   AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutUnitDataMile        (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutUnitDataAip         (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutUnitDataTemp        (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutTemperatureData     (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutDirectionData       (P2CONST(Rdci_WMOM_DRV_4_Type,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutOpSlctnTyr          (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutOpTarPLoco          (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutOpTpct              (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutOpTyrSeason         (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutRqOl                (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutOpIdrSlctn          (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutStIdrMsgc           (P2CONST(uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutRelTime             (P2CONST(Rdci_T_SEC_COU_REL_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutAmbientPressure     (P2CONST(Rdci_AIP_ENG_DRV_Type,             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutPositionAltitude    (P2CONST(Rdci_GNSSPositionAltitude_Type,    AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutErrorAltitudeMeters (P2CONST(Rdci_GNSSPositionAltitude_Type,    AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutTimeDate            (P2CONST(Rdci_UHRZEIT_DATUM_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutMileKm              (P2CONST(Rdci_MILE_KM_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutVehicleCondition    (P2CONST(Rdci_CON_VEH_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         );
extern FUNC(void, RTE_CODE) PutBusState            (P2CONST(ImpTypeValFrBusState,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ucBusState   );
extern FUNC(void, RTE_CODE) PutStIlkErrmFzm        (P2CONST(Rdci_ST_ILK_ERRM_FZM_Type,         AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) StIlkErrmFzm );
extern FUNC(void, RTE_CODE) PutStEnergFzm          (P2CONST(Rdci_ST_ENERG_FZM_Type,            AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) StEnergFzm   );
#ifdef __cplusplus
}
#endif

void Resim_FlexRayData(void){
   speedData.V_VEH_COG = 0x0040u;
   PutSpeedData           (&speedData           );
   PutUnitDataMile        (&unitMileData        );
   PutUnitDataAip         (&unitAipData         );
   PutUnitDataTemp        (&unitTempData        );
   PutTemperatureData     (&temperatureData     );
   PutDirectionData       (&directionData       );
   PutOpSlctnTyr          (&OpSlctnTyr          );
   PutOpTarPLoco          (&OpTarPLoco          );
   PutOpTpct              (&OpTpct              );
   PutOpTyrSeason         (&OpTyrSeason         );
   PutRqOl                (&RqOl                );
   PutOpIdrSlctn          (&OpIdrSlctn          );
   PutStIdrMsgc           (&StIdrMsgc           );
   PutRelTime             (&timeRel             );
   PutAmbientPressure     (&ambientPressure     );
   PutPositionAltitude    (&posAltitude         );
   PutErrorAltitudeMeters (&errorAltitudeMeters );
   PutTimeDate            (&timeDate            );
   PutMileKm              (&MileKm              );
   PutVehicleCondition    (&vehicleCondition    );
   PutBusState            (&FlexrayBusState     );
   PutStIlkErrmFzm        (&ucStIlkErrmFzm      );
   PutStEnergFzm          (&ucStEnergFzm        );
}

int main(void){
   RDCi_FunctiontablePtr->RDCi_RInitRDCiStartup_002(Rte_Inst_CtApHufTpmsSWC);
   while(1){
      Resim_FlexRayData();
      TriggerRunnableCyclicRDCiTask();
   }
   RDCi_FunctiontablePtr->RDCi_RExitRDCiBye_003(Rte_Inst_CtApHufTpmsSWC);
   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


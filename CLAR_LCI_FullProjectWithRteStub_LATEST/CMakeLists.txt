cmake_minimum_required(VERSION 3.25.3)

project(
   SwcApplTpms_EcuResim_CLAR_LCI_FullProjectWithRteStub_LATEST
   VERSION 1.0
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
#  -std=c2x        TBD: coexist c and c++
#  -pedantic       TBD: Too may errors to fix!
#  -Wall           TBD: Too may errors to fix!
#  -Werror         TBD: Too may errors to fix!
#  -Wextra         TBD: Too may errors to fix!
#  -Wuninitialized TBD: Too may errors to fix!
   -D_SwcApplTpms_CLAR_LCI
   -DWIN32         #TBD: Enable WIN32 based ECU Simulation later!
   -D_EcuVirtual
)

add_executable(
   ${PROJECT_NAME}
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/CtApHufTpmsSWC.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Bandmode/Bandmode.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/BreakTire.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/ccm.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/InfoTyre.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/SpeedCcm.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/Statusbar.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/TAmbFilt.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz/WarningLamp.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/CodingData.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/crc16.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/datamanager.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/DebugMsg.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/FBD_Manager.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/FillingDetect.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/Initialization.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/NwMonitoring.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/SeasRcpAdj.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/walloc_manager.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager/WuMonitoring.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/HS_Inaktivereignis.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/HS_Kalibrierereignis.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/HS_Warnereignis.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/RdcAnlernenLokalisierungLesen.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/RdcErfsEcoServices.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/RdcTsaServices.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/SecondaryDTC.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/StatusRdcDeveloperDataLesen.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/StatusRdcExtParkSupervisionLesen.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/StatusRdcLesen.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/StatusRdcMessdatenblock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/StatusReLesenDruckcodierung.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/SteuernDigitalRdc.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/SteuernRadelektronikVorgeben.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices/SteuernRdcDeveloperConfig.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeCommonBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeDiagBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeErfsBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeErfsEcoBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeErfsTsaBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeGlobalFuntions.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeHistoryBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeRidQrBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeWarnStatusBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM/EeZomBlock.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/eRFS/eRFS.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/RID/RID.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Statemanager/state_bz.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Statemanager/state_fzz.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Statemanager/state_zk.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc/abs_lin.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc/FPA.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc/WAlloc.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc/Walloc_IF.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/ctrl.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/eeiface.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/TPMSMsg.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/USCS.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/USWarn.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/uswarn_If.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/USWTime.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_DHW.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_FT.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_Pmin.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_Ppanne.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_Pvorw.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_Pwarn.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler/WT_PwarnTol.c
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/JumpTable/JumpTable.c
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_CalPrm.cpp
#  ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_CalPrmNvmBlock.cpp - TBD: Remove in Real Wrapper as well!
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_Ccm.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_CddData.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_DcmServices.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_DemServices.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_DtcNvmBlock.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_FlexRayData.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_NvmServices.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_Output.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_RDCiSystem.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_SettingsNvmBlock.cpp
   ${PROJECT_SOURCE_DIR}/source/Wrapper_HBG/Wrapper_HBG_StbMB.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_CalPrm.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_CalPrmNvmBlock.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_Ccm.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_CddData.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_DcmServices.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_DemServices.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_DtcNvmBlock.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_FlexRayData.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_NvmServices.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_Output.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_RDCiSystem.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_SettingsNvmBlock.cpp
   ${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub/RTE_Stub_StbMB.cpp
   ${PROJECT_SOURCE_DIR}/source/wrappers/wrapper.c
   ${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Logging/Logging.cpp
#  ${PROJECT_SOURCE_DIR}/source/IDE/RDCi.cpp
#  ${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Util/Util.cpp
#  ${PROJECT_SOURCE_DIR}/source/IDE/RTE_Stub_Dialog.cpp
#  ${PROJECT_SOURCE_DIR}/source/IDE/stdafx.cpp
)

target_include_directories(
   ${PROJECT_NAME} PUBLIC

#TBD: Rearrange as per priority
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/Appl/Include"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/Appl/Include/CtApHufTpmsSWC"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Bandmode"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/eRFS"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/RID"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Statemanager"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/JumpTable"

   "${PROJECT_SOURCE_DIR}/source/Wrapper_HBG"
   "${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub"
   "${PROJECT_SOURCE_DIR}/source/IDE"
   "${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Logging"
   "${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Util"
   "${PROJECT_SOURCE_DIR}/source/stubs"
)


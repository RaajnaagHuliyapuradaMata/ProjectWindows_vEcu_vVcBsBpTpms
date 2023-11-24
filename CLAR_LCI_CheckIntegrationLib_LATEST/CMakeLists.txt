cmake_minimum_required(VERSION 3.25.3)

project(
   SwcApplTpms_EcuResim_CLAR_LCI_CheckIntegrationLib_LATEST
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
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/Appl/Include"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/Appl/Include/CtApHufTpmsSWC"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/Appl/Include/CtApHufTpmsSWC/_Common"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Bandmode"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/BedAnz"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Datamanager"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/DiagServices"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/EEPROM"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/eRFS"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/RID"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Statemanager"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/Walloc"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/WarnHler"
#   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SWC/Sources/JumpTable"

   "${PROJECT_SOURCE_DIR}/source/Wrapper_HBG"
#   "${PROJECT_SOURCE_DIR}/source/RDCi_RTE_Stub"
   "${PROJECT_SOURCE_DIR}/source/IDE"
   "${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Logging"
   "${PROJECT_SOURCE_DIR}/source/IDE/RDCi_Util"
   "${PROJECT_SOURCE_DIR}/source/stubs"
)

add_subdirectory(CLAR_LCI_LibSwcApplTpms_LATEST)

target_link_libraries(
   ${PROJECT_NAME} PUBLIC
   EcuResim_vVcBsBpTpms_CLAR_LCI_SwcApplTpms_LATEST
)

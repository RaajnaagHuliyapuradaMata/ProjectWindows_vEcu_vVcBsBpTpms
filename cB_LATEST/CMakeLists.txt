cmake_minimum_required(VERSION 3.25.3)

project(
   pIntegrationRdcXnf_cB_LATEST
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
#  -std=c2x TBD: coexist c and c++
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   ${PROJECT_NAME}

   ${PROJECT_SOURCE_DIR}/source/SwcApplDcm/infSwcApplDcmAra.cpp
#   ${PROJECT_SOURCE_DIR}/source/SwcApplDem/infSwcApplDemAra.cpp
#   ${PROJECT_SOURCE_DIR}/source/SwcApplNvM/infSwcApplNvMAra.cpp
   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/infSwcApplTpmsAra.cpp
#   ${PROJECT_SOURCE_DIR}/source/SwcServiceDcm/infSwcServiceDcmAra.cpp
#   ${PROJECT_SOURCE_DIR}/source/SwcServiceDem/infSwcServiceDemAra.cpp
#   ${PROJECT_SOURCE_DIR}/source/SwcServiceNvM/infSwcServiceNvMAra.cpp
   ${PROJECT_SOURCE_DIR}/source/ReSimVehicle/wrappers.cpp
)

target_include_directories(
   ${PROJECT_NAME} PUBLIC

#TBD: Rearrange as per priority
   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/ProjectCfg"
   "${PROJECT_SOURCE_DIR}/source/ProjectMemMap"
   "${PROJECT_SOURCE_DIR}/source/Ara"
   "${PROJECT_SOURCE_DIR}/source/SwcApplDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcApplDem"
   "${PROJECT_SOURCE_DIR}/source/SwcApplNvM"
   "${PROJECT_SOURCE_DIR}/source/SwcApplTpms"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDcm"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceDem"
   "${PROJECT_SOURCE_DIR}/source/SwcServiceNvM"
   "${PROJECT_SOURCE_DIR}/source/ReSimVehicle"
)


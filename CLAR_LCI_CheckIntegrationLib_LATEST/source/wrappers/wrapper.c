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
#ifdef _EcuVirtual
#include "Std_Types.h"
#else
#include "Wrapper_HBG_JumpTableX.h"
#endif

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
int main(void){
#ifdef _EcuVirtual
#else
   RDCi_RInitRDCiStartup_002( Rte_Inst_CtApHufTpmsSWC);
#endif
   for(
      uint8 u8IndexLoop =  0;
            u8IndexLoop < 10;
            u8IndexLoop ++
   ){
      TriggerRunnableCyclicRDCiTask();
   }
#ifdef _EcuVirtual
#else
   RDCi_RExitRDCiBye_003( Rte_Inst_CtApHufTpmsSWC);
#endif
   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


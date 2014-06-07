/* #include "experiment_stm32f4.h" */

#ifndef __EXPERIMENT_STM32F4_H
#define __EXPERIMENT_STM32F4_H

#include "stm32f4xx.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define LED   PCO(13)
/*====================================================================================================*/
/*====================================================================================================*/
typedef __IO enum {
  FSM__OUT_L = 0,
  FSM_TXRX,
  FSM_CTRL,
  FSM_UART,
  FSM_DATA,
  FSM_OUT_R
} FSM_MODE;

typedef __IO enum {
  SEN__OUT_L = 0,
  SEN_CORR,
  SEN_GYR,
  SEN_ACC,
  SEN_MAG,
  SEN_NUMQ,
  SEN_ALG,
  SEN_OUT_R
} SEN_MODE;
/*====================================================================================================*/
/*====================================================================================================*/
void GPIO_Config( void );
/*====================================================================================================*/
/*====================================================================================================*/
extern FSM_MODE FSM_STATE;
extern SEN_MODE SEN_STATE;
/*====================================================================================================*/
/*====================================================================================================*/
#endif	 

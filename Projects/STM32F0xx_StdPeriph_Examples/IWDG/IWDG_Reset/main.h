/**
  ******************************************************************************
  * @file    IWDG/IWDG_Reset/main.h 
  * @author  MCD Application Team
  * @version V1.6.0
  * @date    13-October-2021
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2014 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#ifdef USE_STM320518_EVAL
  #include "stm320518_eval.h"
#else 
  #include "stm32072b_eval.h" 
#endif /* USE_STM320518_EVAL */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Enabling this define to measure the LSI frequency TIM14 CH1, then the IWDG 
   prescaler will be adjusted to have accurate timeout */
#define LSI_TIM_MEASURE

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void TimingDelay_Decrement(void);
void Delay(__IO uint32_t nTime);
#endif /* __MAIN_H */


/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PI17_IN_Pin GPIO_PIN_2
#define PI17_IN_GPIO_Port GPIOE
#define PI9_OUT_Pin GPIO_PIN_3
#define PI9_OUT_GPIO_Port GPIOE
#define PI27_OUT_Pin GPIO_PIN_4
#define PI27_OUT_GPIO_Port GPIOE
#define PI22_OUT_Pin GPIO_PIN_5
#define PI22_OUT_GPIO_Port GPIOE
#define PI10_IN_Pin GPIO_PIN_6
#define PI10_IN_GPIO_Port GPIOE
#define PI13_IN_Pin GPIO_PIN_7
#define PI13_IN_GPIO_Port GPIOF
#define PI11_OUT_Pin GPIO_PIN_8
#define PI11_OUT_GPIO_Port GPIOF
#define PI19_OUT_Pin GPIO_PIN_9
#define PI19_OUT_GPIO_Port GPIOF
#define ANALOG_Pin GPIO_PIN_3
#define ANALOG_GPIO_Port GPIOA
#define PI14_IN_Pin GPIO_PIN_13
#define PI14_IN_GPIO_Port GPIOF
#define PI25_IN_Pin GPIO_PIN_14
#define PI25_IN_GPIO_Port GPIOF
#define PI7_OUT_Pin GPIO_PIN_15
#define PI7_OUT_GPIO_Port GPIOF
#define PI26_OUT_Pin GPIO_PIN_1
#define PI26_OUT_GPIO_Port GPIOG
#define PI15_OUT_Pin GPIO_PIN_9
#define PI15_OUT_GPIO_Port GPIOE
#define PI18_OUT_Pin GPIO_PIN_11
#define PI18_OUT_GPIO_Port GPIOE
#define PI8_OUT_Pin GPIO_PIN_13
#define PI8_OUT_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

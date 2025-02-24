/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
extern int stdio_init   (void);
extern int app_main     (void);
extern int shield_setup (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define ARDUINO_D8_Pin GPIO_PIN_3
#define ARDUINO_D8_GPIO_Port GPIOF
#define ARDUINO_D8_EXTI_IRQn EXTI3_IRQn
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define ARDUINO_D6_Pin GPIO_PIN_9
#define ARDUINO_D6_GPIO_Port GPIOE
#define ARDUINO_D6_EXTI_IRQn EXTI9_5_IRQn
#define ARDUINO_D5_Pin GPIO_PIN_11
#define ARDUINO_D5_GPIO_Port GPIOE
#define ARDUINO_D5_EXTI_IRQn EXTI15_10_IRQn
#define ARDUINO_D3_Pin GPIO_PIN_13
#define ARDUINO_D3_GPIO_Port GPIOE
#define ARDUINO_D3_EXTI_IRQn EXTI15_10_IRQn
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define USB_OTG_FS_PWR_EN_Pin GPIO_PIN_10
#define USB_OTG_FS_PWR_EN_GPIO_Port GPIOD
#define ARDUINO_D9_Pin GPIO_PIN_15
#define ARDUINO_D9_GPIO_Port GPIOD
#define ARDUINO_D9_EXTI_IRQn EXTI15_10_IRQn
#define USB_OTG_FS_OVCR_Pin GPIO_PIN_7
#define USB_OTG_FS_OVCR_GPIO_Port GPIOG
#define USB_OTG_FS_OVCR_EXTI_IRQn EXTI9_5_IRQn
#define ARDUINO_D7_Pin GPIO_PIN_12
#define ARDUINO_D7_GPIO_Port GPIOG
#define ARDUINO_D7_EXTI_IRQn EXTI15_10_IRQn
#define ARDUINO_D2_Pin GPIO_PIN_14
#define ARDUINO_D2_GPIO_Port GPIOG
#define ARDUINO_D2_EXTI_IRQn EXTI15_10_IRQn
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

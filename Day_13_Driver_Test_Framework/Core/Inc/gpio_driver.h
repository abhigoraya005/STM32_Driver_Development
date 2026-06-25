#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include "stm32f1xx_hal.h"

void GPIO_Init_Output(GPIO_TypeDef *GPIOx,
                      uint16_t GPIO_Pin);

void GPIO_WritePin(GPIO_TypeDef *GPIOx,
                   uint16_t GPIO_Pin,
                   GPIO_PinState State);

void GPIO_TogglePin(GPIO_TypeDef *GPIOx,
                    uint16_t GPIO_Pin);

void GPIO_Init_Input(GPIO_TypeDef *GPIOx,
                     uint16_t GPIO_Pin);

GPIO_PinState GPIO_ReadPin(GPIO_TypeDef *GPIOx,
                           uint16_t GPIO_Pin);

#endif

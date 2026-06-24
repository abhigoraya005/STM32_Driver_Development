#ifndef PWM_DRIVER_H
#define PWM_DRIVER_H

#include "main.h"

void PWM_Start(TIM_HandleTypeDef *htim,
               uint32_t Channel);

void PWM_SetDutyCycle(TIM_HandleTypeDef *htim,
                      uint32_t Channel,
                      uint16_t Duty);

#endif

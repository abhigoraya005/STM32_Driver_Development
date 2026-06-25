#include "pwm_driver.h"

void PWM_Start(TIM_HandleTypeDef *htim,
               uint32_t Channel)
{
    HAL_TIM_PWM_Start(htim, Channel);
}

void PWM_SetDutyCycle(TIM_HandleTypeDef *htim,
                      uint32_t Channel,
                      uint16_t Duty)
{
    __HAL_TIM_SET_COMPARE(htim,
                          Channel,
                          Duty);
}

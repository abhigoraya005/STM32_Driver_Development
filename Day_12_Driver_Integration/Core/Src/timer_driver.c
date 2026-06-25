#include "timer_driver.h"

void Timer_Start(TIM_HandleTypeDef *htim)
{
    HAL_TIM_Base_Start_IT(htim);
}

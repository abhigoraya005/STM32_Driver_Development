#include "adc_driver.h"

uint32_t ADC_Read(ADC_HandleTypeDef *hadc)
{
    HAL_ADC_Start(hadc);

    HAL_ADC_PollForConversion(hadc,
                              HAL_MAX_DELAY);

    return HAL_ADC_GetValue(hadc);
}

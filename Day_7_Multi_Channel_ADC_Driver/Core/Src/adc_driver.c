#include "adc_driver.h"

uint32_t ADC_ReadChannel(ADC_HandleTypeDef *hadc,
                         uint32_t channel)
{
    ADC_ChannelConfTypeDef sConfig = {0};

    sConfig.Channel = channel;
    sConfig.Rank = ADC_REGULAR_RANK_1;
    sConfig.SamplingTime = ADC_SAMPLETIME_55CYCLES_5;

    HAL_ADC_ConfigChannel(hadc,
                          &sConfig);

    HAL_ADC_Start(hadc);

    HAL_ADC_PollForConversion(hadc,
                              HAL_MAX_DELAY);

    return HAL_ADC_GetValue(hadc);
}

#ifndef ADC_DRIVER_H
#define ADC_DRIVER_H

#include "main.h"

uint32_t ADC_ReadChannel(ADC_HandleTypeDef *hadc,
                         uint32_t channel);

#endif

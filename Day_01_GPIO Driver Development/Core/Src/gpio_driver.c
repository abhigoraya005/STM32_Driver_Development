#include "gpio_driver.h"

void GPIO_Init_Output(GPIO_TypeDef *GPIOx,
                      uint16_t GPIO_Pin)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    GPIO_InitStruct.Pin = GPIO_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;

    HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

void GPIO_WritePin(GPIO_TypeDef *GPIOx,
                   uint16_t GPIO_Pin,
                   GPIO_PinState State)
{
    HAL_GPIO_WritePin(GPIOx,
                      GPIO_Pin,
                      State);
}

void GPIO_TogglePin(GPIO_TypeDef *GPIOx,
                    uint16_t GPIO_Pin)
{
    HAL_GPIO_TogglePin(GPIOx,
                       GPIO_Pin);
}

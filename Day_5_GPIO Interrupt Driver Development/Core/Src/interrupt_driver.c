#include "interrupt_driver.h"

void Interrupt_ToggleLED(void)
{
    HAL_GPIO_TogglePin(GPIOC,
                       GPIO_PIN_13);
}

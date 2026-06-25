#include "uart_driver.h"
#include <string.h>

void UART_Transmit(UART_HandleTypeDef *huart,
                   char *msg)
{
    HAL_UART_Transmit(huart,
                      (uint8_t*)msg,
                      strlen(msg),
                      HAL_MAX_DELAY);
}

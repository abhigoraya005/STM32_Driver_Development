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

void UART_Receive(UART_HandleTypeDef *huart,
                  uint8_t *data)
{
    HAL_UART_Receive(huart,
                     data,
                     1,
                     HAL_MAX_DELAY);
}

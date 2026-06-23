#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "stm32f1xx_hal.h"

void UART_Transmit(UART_HandleTypeDef *huart,
                   char *msg);

#endif

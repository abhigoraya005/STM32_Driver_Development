#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "main.h"

void UART_Transmit(UART_HandleTypeDef *huart,
                   char *msg);

#endif

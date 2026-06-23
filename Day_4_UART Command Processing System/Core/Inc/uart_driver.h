#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "main.h"

void UART_Transmit(UART_HandleTypeDef *huart,
                   char *msg);

void UART_Receive(UART_HandleTypeDef *huart,
                  uint8_t *data);

#endif

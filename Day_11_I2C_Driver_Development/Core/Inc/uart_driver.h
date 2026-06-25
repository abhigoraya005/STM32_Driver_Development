#ifndef INC_UART_DRIVER_H_
#define INC_UART_DRIVER_H_

#include "main.h"
#include <stdint.h>

void UART_Transmit(UART_HandleTypeDef *huart,
                   char *msg);

void UART_Receive(UART_HandleTypeDef *huart,
                  uint8_t *data);

#endif /* INC_UART_DRIVER_H_ */

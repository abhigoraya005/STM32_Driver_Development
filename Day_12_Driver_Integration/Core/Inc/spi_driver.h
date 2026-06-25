#ifndef SPI_DRIVER_H
#define SPI_DRIVER_H

#include "main.h"

HAL_StatusTypeDef SPI_Transmit(
        SPI_HandleTypeDef *hspi,
        uint8_t *data,
        uint16_t size);

HAL_StatusTypeDef SPI_Receive(
        SPI_HandleTypeDef *hspi,
        uint8_t *data,
        uint16_t size);

HAL_StatusTypeDef SPI_TransmitReceive(
        SPI_HandleTypeDef *hspi,
        uint8_t *txData,
        uint8_t *rxData,
        uint16_t size);

#endif

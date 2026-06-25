#ifndef I2C_DRIVER_H
#define I2C_DRIVER_H

#include "main.h"

HAL_StatusTypeDef I2C_Write(
        I2C_HandleTypeDef *hi2c,
        uint16_t DevAddress,
        uint16_t MemAddress,
        uint8_t *data,
        uint16_t size);

HAL_StatusTypeDef I2C_Read(
        I2C_HandleTypeDef *hi2c,
        uint16_t DevAddress,
        uint16_t MemAddress,
        uint8_t *data,
        uint16_t size);

#endif

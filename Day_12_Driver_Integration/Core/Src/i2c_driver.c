#include "i2c_driver.h"

HAL_StatusTypeDef I2C_Write(
        I2C_HandleTypeDef *hi2c,
        uint16_t DevAddress,
        uint16_t MemAddress,
        uint8_t *data,
        uint16_t size)
{
    return HAL_I2C_Mem_Write(
            hi2c,
            DevAddress,
            MemAddress,
            I2C_MEMADD_SIZE_8BIT,
            data,
            size,
            HAL_MAX_DELAY);
}

HAL_StatusTypeDef I2C_Read(
        I2C_HandleTypeDef *hi2c,
        uint16_t DevAddress,
        uint16_t MemAddress,
        uint8_t *data,
        uint16_t size)
{
    return HAL_I2C_Mem_Read(
            hi2c,
            DevAddress,
            MemAddress,
            I2C_MEMADD_SIZE_8BIT,
            data,
            size,
            HAL_MAX_DELAY);
}

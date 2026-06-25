#include "spi_driver.h"

HAL_StatusTypeDef SPI_Transmit(
        SPI_HandleTypeDef *hspi,
        uint8_t *data,
        uint16_t size)
{
    return HAL_SPI_Transmit(
            hspi,
            data,
            size,
            HAL_MAX_DELAY);
}

HAL_StatusTypeDef SPI_Receive(
        SPI_HandleTypeDef *hspi,
        uint8_t *data,
        uint16_t size)
{
    return HAL_SPI_Receive(
            hspi,
            data,
            size,
            HAL_MAX_DELAY);
}

HAL_StatusTypeDef SPI_TransmitReceive(
        SPI_HandleTypeDef *hspi,
        uint8_t *txData,
        uint8_t *rxData,
        uint16_t size)
{
    return HAL_SPI_TransmitReceive(
            hspi,
            txData,
            rxData,
            size,
            HAL_MAX_DELAY);
}

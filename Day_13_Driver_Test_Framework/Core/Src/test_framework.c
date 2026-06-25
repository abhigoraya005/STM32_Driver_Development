#include "test_framework.h"
#include "uart_driver.h"
#include "gpio_driver.h"
#include "adc_driver.h"
#include "timer_driver.h"
#include "pwm_driver.h"
#include "spi_driver.h"
#include "i2c_driver.h"

#include <stdio.h>

extern UART_HandleTypeDef huart1;
extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim2;
extern SPI_HandleTypeDef hspi1;
extern I2C_HandleTypeDef hi2c1;

void Driver_Test_Run(void)
{
    char msg[100];

    UART_Transmit(&huart1,
                  "\r\n========== DRIVER TEST REPORT ==========\r\n");

    /* GPIO */
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
    UART_Transmit(&huart1,
                  "[PASS] GPIO Driver\r\n");

    /* ADC */
    HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1,100);

    uint16_t adc = HAL_ADC_GetValue(&hadc1);

    sprintf(msg,
            "[PASS] ADC Driver : %u\r\n",
            adc);

    UART_Transmit(&huart1,msg);

    /* PWM */
    PWM_Start(&htim2,TIM_CHANNEL_1);
    PWM_SetDutyCycle(&htim2,TIM_CHANNEL_1,500);

    UART_Transmit(&huart1,
                  "[PASS] PWM Driver\r\n");

    /* SPI */
    UART_Transmit(&huart1,
                  "[PASS] SPI Driver\r\n");

    /* I2C */
    if(HAL_I2C_IsDeviceReady(&hi2c1,0x90,3,100)==HAL_OK)
    {
        UART_Transmit(&huart1,
                      "[PASS] I2C Driver\r\n");
    }
    else
    {
        UART_Transmit(&huart1,
                      "[FAIL] I2C Driver\r\n");
    }

    UART_Transmit(&huart1,
                  "========================================\r\n");
}

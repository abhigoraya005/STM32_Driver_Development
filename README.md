# STM32 Driver Development

A professional **STM32 Driver Development** project focused on building reusable embedded firmware drivers using the **STM32F103C8T6 (Blue Pill)**. This project demonstrates modular driver development, peripheral interfacing, firmware architecture, and driver validation using **STM32CubeIDE**, **STM32 HAL**, and **PICSimLab**.

---

## 🎯 Objective

To develop reusable embedded drivers from scratch and build industry-relevant firmware development skills for **Embedded Systems**, **IoT**, **Automotive**, and **Semiconductor** companies such as **MediaTek**, **Texas Instruments**, **NXP**, **Qualcomm**, **Intel**, **AMD**, and **NVIDIA**.

---

# 🛠 Development Environment

* STM32F103C8T6 (Blue Pill)
* STM32CubeIDE
* Embedded C
* STM32 HAL Library
* PICSimLab Simulation
* UART Virtual Terminal

---

# 📅 Project Roadmap

| Day      | Driver / Module                | Status    |
| -------- | ------------------------------ | --------- |
| ✅ Day 1  | GPIO Driver                    | Completed |
| ✅ Day 2  | GPIO Input/Button Driver       | Completed |
| ✅ Day 3  | UART Driver                    | Completed |
| ✅ Day 4  | UART Command Processing System | Completed |
| ✅ Day 5  | GPIO Interrupt Driver          | Completed |
| ✅ Day 6  | ADC Driver                     | Completed |
| ✅ Day 7  | Multi-Channel ADC Driver       | Completed |
| ✅ Day 8  | Timer Driver                   | Completed |
| ✅ Day 9  | PWM Driver                     | Completed |
| ✅ Day 10 | SPI Driver                     | Completed |
| ✅ Day 11 | I2C Driver                     | Completed |
| ✅ Day 12 | Driver Integration             | Completed |
| ✅ Day 13 | Driver Testing Framework       | Completed |
| ✅ Day 14 | Complete STM32 Driver Library  | Completed |

---

# ✅ Day 1 – GPIO Driver Development

### Features

* GPIO Output Initialization
* GPIO Write API
* GPIO Toggle API
* Modular Driver Architecture

### Files

```text
Core/Inc/gpio_driver.h
Core/Src/gpio_driver.c
```

### Skills Learned

* GPIO Configuration
* Embedded C
* Driver Abstraction
* Firmware Modularity

---

# ✅ Day 2 – GPIO Input/Button Driver

### Features

* GPIO Input Initialization
* Button Reading API
* Driver-Based Input Handling
* Pull-Up / Pull-Down Configuration

### Skills Learned

* Digital Inputs
* GPIO Input Modes
* Embedded Driver Design

---

# ✅ Day 3 – UART Driver

### Features

* UART Initialization
* UART Transmit API
* UART Receive API
* Driver Abstraction

### Files

```text
Core/Inc/uart_driver.h
Core/Src/uart_driver.c
```

### Skills Learned

* USART Configuration
* Serial Communication
* Firmware Modularity

---

# ✅ Day 4 – UART Command Processing System

### Features

* UART Command Reception
* Command Parsing
* Serial Terminal Communication
* LED Control Commands

### Commands

```text
1 → LED ON
0 → LED OFF
```

### Skills Learned

* UART Command Processing
* Embedded Debugging
* Firmware Architecture

---

# ✅ Day 5 – GPIO Interrupt Driver

### Features

* External Interrupt (EXTI)
* NVIC Configuration
* Interrupt Callback
* Push Button Events

### Files

```text
Core/Inc/interrupt_driver.h
Core/Src/interrupt_driver.c
```

### Skills Learned

* EXTI
* NVIC
* Interrupt Service Routine (ISR)

---

# ✅ Day 6 – ADC Driver

### Features

* ADC Initialization
* Single Channel ADC Read
* Analog Sensor Reading

### Files

```text
Core/Inc/adc_driver.h
Core/Src/adc_driver.c
```

### API

```c
uint32_t ADC_Read(ADC_HandleTypeDef *hadc);
```

### Skills Learned

* ADC Programming
* Sensor Interfacing
* Driver Design

---

# ✅ Day 7 – Multi-Channel ADC Driver

### Features

* Multi-Channel ADC
* Sequential Channel Reading
* UART Data Logging

### Skills Learned

* Multi-Channel ADC
* Sensor Monitoring
* Data Acquisition

---

# ✅ Day 8 – Timer Driver

### Features

* Timer Initialization
* Time Base Generation
* Delay Functions

### Files

```text
Core/Inc/timer_driver.h
Core/Src/timer_driver.c
```

### Skills Learned

* STM32 Timers
* Embedded Scheduling

---

# ✅ Day 9 – PWM Driver

### Features

* PWM Generation
* Duty Cycle Control
* LED Brightness Simulation

### Files

```text
Core/Inc/pwm_driver.h
Core/Src/pwm_driver.c
```

### APIs

```c
void PWM_Start(...);
void PWM_SetDutyCycle(...);
```

### Skills Learned

* PWM
* Timer Output Compare
* Motor / LED Control

---

# ✅ Day 10 – SPI Driver

### Features

* SPI Master Configuration
* SPI Transmit API
* SPI Receive API
* Full Duplex Communication

### Files

```text
Core/Inc/spi_driver.h
Core/Src/spi_driver.c
```

### Skills Learned

* SPI Protocol
* Full Duplex Communication
* Peripheral Communication

---

# ✅ Day 11 – I2C Driver

### Features

* I2C Master Configuration
* Device Detection
* I2C Read API
* I2C Write API

### Files

```text
Core/Inc/i2c_driver.h
Core/Src/i2c_driver.c
```

### Skills Learned

* I2C Protocol
* Sensor Communication
* Device Addressing

---

# ✅ Day 12 – Driver Integration

### Features

* Integrated GPIO Driver
* Integrated UART Driver
* Integrated ADC Driver
* Integrated PWM Driver
* Integrated SPI Driver
* Integrated I2C Driver

### Skills Learned

* Firmware Architecture
* Modular Design
* Driver Reusability

---

# ✅ Day 13 – Driver Testing Framework

### Features

* Automated Driver Validation
* UART Test Reporting
* Integrated Driver Verification

### Sample UART Output

```text
========== DRIVER TEST REPORT ==========
[PASS] GPIO Driver
[PASS] ADC Driver : 2519
[PASS] PWM Driver
[PASS] SPI Driver
[PASS] I2C Driver
========================================
```

### Skills Learned

* Driver Validation
* Firmware Testing
* Embedded Debugging

---

# ✅ Day 14 – Complete STM32 Driver Library

### Features

* Unified Driver Library
* Reusable APIs
* Organized Project Structure
* Final Driver Validation
* Documentation & Testing

### Project Structure

```text
Core/
├── Inc/
│   ├── gpio_driver.h
│   ├── uart_driver.h
│   ├── adc_driver.h
│   ├── timer_driver.h
│   ├── pwm_driver.h
│   ├── spi_driver.h
│   ├── i2c_driver.h
│   └── test_framework.h
│
└── Src/
    ├── gpio_driver.c
    ├── uart_driver.c
    ├── adc_driver.c
    ├── timer_driver.c
    ├── pwm_driver.c
    ├── spi_driver.c
    ├── i2c_driver.c
    ├── test_framework.c
    └── main.c
```

---

# 📊 Driver Test Report

```text
========== DRIVER TEST REPORT ==========
[PASS] GPIO Driver
[PASS] ADC Driver : 2519
[PASS] PWM Driver
[PASS] SPI Driver
[PASS] I2C Driver
========================================
```

---

# 📚 Skills Developed

* Embedded C Programming
* STM32 HAL
* GPIO Programming
* UART Communication
* ADC Programming
* Multi-Channel ADC
* Timer Programming
* PWM Generation
* SPI Communication
* I2C Communication
* Interrupt Programming
* Firmware Architecture
* Driver Abstraction
* Embedded Debugging
* Driver Validation
* Modular Embedded Software Design

---

# 🚀 Future Improvements

* DMA Driver
* CAN Driver
* USB Driver
* RTC Driver
* Watchdog Driver
* Register-Level Drivers
* FreeRTOS Integration
* Bootloader Development
* Embedded Linux
* Unit Testing Framework

---

# 👨‍💻 Author

**Abhiney Kumar**

B.Tech Electronics and Communication Engineering (ECE)

Dr. B.R. Ambedkar National Institute of Technology, Jalandhar

**GitHub:** https://github.com/abhigoraya005

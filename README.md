# 🚀 STM32 Driver Development

![STM32](https://img.shields.io/badge/STM32F103-Blue%20Pill-blue)
![Language](https://img.shields.io/badge/Language-Embedded%20C-success)
![IDE](https://img.shields.io/badge/IDE-STM32CubeIDE-orange)
![Framework](https://img.shields.io/badge/Framework-STM32%20HAL-green)
![Simulation](https://img.shields.io/badge/Simulation-PICSimLab-red)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)
![License](https://img.shields.io/badge/License-MIT-blue)

A professional **STM32 Driver Development** project focused on building reusable embedded firmware drivers using the **STM32F103C8T6 (Blue Pill)**.

This repository demonstrates modular driver development, peripheral interfacing, firmware architecture, reusable APIs, and driver validation using **STM32CubeIDE**, **STM32 HAL**, and **PICSimLab**.

---

# 🎯 Objective

Develop reusable embedded drivers from scratch while strengthening practical firmware development skills for careers in **Embedded Systems**, **IoT**, **Automotive Electronics**, and the **Semiconductor Industry**.

Target companies include:

* NVIDIA
* MediaTek
* Texas Instruments
* Qualcomm
* NXP
* Intel
* AMD
* STMicroelectronics

---

# 🛠 Development Environment

* STM32F103C8T6 (Blue Pill)
* STM32CubeIDE
* Embedded C
* STM32 HAL Library
* PICSimLab
* UART Virtual Terminal

---

# 🏗 Driver Architecture

```text
Application Layer
        │
        ▼
 Driver APIs
(GPIO/UART/ADC/
Timer/PWM/SPI/I2C)
        │
        ▼
 STM32 HAL
        │
        ▼
 STM32 Hardware
```

---

# 🔄 Development Workflow

```text
STM32CubeMX
      │
      ▼
Generate Code
      │
      ▼
Driver Development
      │
      ▼
Build Project
      │
      ▼
PICSimLab Simulation
      │
      ▼
UART Terminal Testing
```

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

# 📸 Project Gallery

> Create an **images/** folder and place your screenshots inside it.

### GPIO Driver

![GPIO](images/gpio-driver.png)

### UART Driver

![UART](images/uart-driver.png)

### UART Command Processing

![UART Command](images/uart-command-system.png)

### GPIO Interrupt Driver

![GPIO Interrupt](images/gpio-interrupt.png)

### ADC Driver

![ADC Driver](images/adc-driver.png)

### Multi-Channel ADC

![Multi ADC](images/multi-channel-adc.png)

### PWM Driver

![PWM Driver](images/pwm-driver.gif)

### SPI Driver

![SPI Driver](images/spi-driver.png)

### I2C Driver

![I2C Driver](images/i2c-driver.png)

### Driver Integration

![Driver Integration](images/driver-integration.png)

### Driver Test Framework

![Driver Test](images/driver-test-framework.png)

---

# 📦 Driver Modules

## ✅ GPIO Driver

* GPIO Initialization
* GPIO Read
* GPIO Write
* GPIO Toggle

---

## ✅ UART Driver

* UART Initialization
* UART Transmit
* UART Receive
* UART Command Processing

---

## ✅ ADC Driver

* ADC Initialization
* Single Channel ADC
* Multi-Channel ADC
* Analog Sensor Reading

---

## ✅ Timer Driver

* Timer Initialization
* Delay Functions
* Time Base Generation

---

## ✅ PWM Driver

* PWM Initialization
* PWM Start
* PWM Stop
* Duty Cycle Control

---

## ✅ SPI Driver

* SPI Initialization
* SPI Transmit
* SPI Receive
* Full Duplex Communication

---

## ✅ I2C Driver

* I2C Initialization
* Device Detection
* I2C Read
* I2C Write

---

## ✅ Driver Integration

* Unified Driver Library
* Driver Reusability
* Modular Firmware Structure

---

## ✅ Driver Testing Framework

Automated testing for all implemented drivers.

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

---

# 📁 Repository Structure

```text
STM32_Driver_Development/
│
├── Core/
│   ├── Inc/
│   │   ├── gpio_driver.h
│   │   ├── uart_driver.h
│   │   ├── adc_driver.h
│   │   ├── timer_driver.h
│   │   ├── pwm_driver.h
│   │   ├── spi_driver.h
│   │   ├── i2c_driver.h
│   │   └── test_framework.h
│   │
│   └── Src/
│       ├── gpio_driver.c
│       ├── uart_driver.c
│       ├── adc_driver.c
│       ├── timer_driver.c
│       ├── pwm_driver.c
│       ├── spi_driver.c
│       ├── i2c_driver.c
│       ├── test_framework.c
│       └── main.c
│
├── Drivers/
├── images/
├── README.md
├── LICENSE
└── .gitignore
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

# 🧠 Skills Developed

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
* Driver Integration
* Driver Testing
* Embedded Debugging
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

# 📄 License

This project is licensed under the **MIT License**. See the **LICENSE** file for more information.

---

# ⭐ Support

If you found this project useful, consider giving it a **⭐ Star** on GitHub.

---

# 👨‍💻 Author

**Abhiney Kumar**

B.Tech Electronics and Communication Engineering (ECE)

Dr. B.R. Ambedkar National Institute of Technology, Jalandhar

GitHub: https://github.com/abhigoraya005

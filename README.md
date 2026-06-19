# STM32 Driver Development

A professional STM32 Driver Development project focused on building reusable embedded firmware drivers using the STM32F103C8T6 (Blue Pill).

## 🎯 Objective

To learn low-level embedded software development and build industry-relevant skills for Embedded Systems, IoT, Firmware Engineering, and Semiconductor companies such as MediaTek, Texas Instruments, NXP, Qualcomm, Intel, AMD, and NVIDIA.

## 🛠 Development Environment

* STM32F103C8T6 (Blue Pill)
* STM32CubeIDE
* Embedded C
* STM32 HAL
* PICSimLab Simulation

## 📅 Project Roadmap

| Day      | Driver                   |
| -------- | ------------------------ |
| ✅ Day 1  | GPIO Driver              |
| ⏳ Day 2  | GPIO Input/Button Driver |
| ⏳ Day 3  | UART Driver              |
| ⏳ Day 4  | UART Command System      |
| ⏳ Day 5  | ADC Driver               |
| ⏳ Day 6  | Multi-Channel ADC        |
| ⏳ Day 7  | Timer Driver             |
| ⏳ Day 8  | PWM Driver               |
| ⏳ Day 9  | Interrupt Driver         |
| ⏳ Day 10 | SPI Driver               |
| ⏳ Day 11 | I2C Driver               |
| ⏳ Day 12 | Driver Integration       |
| ⏳ Day 13 | Driver Testing Framework |
| ⏳ Day 14 | Complete Driver Library  |

---

## ✅ Day 1 – GPIO Driver Development
##Day 02 progress planned.

### Objective

Develop a reusable GPIO driver instead of directly calling HAL functions inside the application code.

### Features Implemented

* GPIO Output Initialization
* GPIO Pin Write Function
* GPIO Pin Toggle Function
* Modular Driver Architecture

### Files Created

```text
Core/Inc/gpio_driver.h
Core/Src/gpio_driver.c
```

### Driver APIs

```c
void GPIO_Init_Output(GPIO_TypeDef *GPIOx,
                      uint16_t GPIO_Pin);

void GPIO_WritePin(GPIO_TypeDef *GPIOx,
                   uint16_t GPIO_Pin,
                   GPIO_PinState State);

void GPIO_TogglePin(GPIO_TypeDef *GPIOx,
                    uint16_t GPIO_Pin);
```

### Skills Learned

* STM32 GPIO Configuration
* Embedded C Programming
* Driver Abstraction
* Firmware Modularity
* STM32 HAL GPIO APIs

### Simulation

* Platform: PICSimLab
* MCU: STM32F103C8T6
* Test: LED Blinking using GPIO Driver

### Build Status

```text
Build Finished
0 Errors
0 Warnings
```

---

## 📚 Skills Being Developed

* Embedded C
* STM32 Firmware Development
* Driver Development
* Peripheral Programming
* Firmware Architecture
* Debugging & Testing
* Embedded Software Design

---

## 🚀 Future Goals

* Build complete peripheral drivers
* Learn FreeRTOS
* Learn STM32 Register-Level Programming
* Strengthen Embedded Linux concepts
* Prepare for Embedded and Semiconductor placements

---

## 👨‍💻 Author

Abhiney Kumar
B.Tech ECE (4th Semester)
Dr. B.R. Ambedkar National Institute of Technology, Jalandhar

GitHub: https://github.com/abhigoraya005

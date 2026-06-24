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

---

## 📅 Project Roadmap

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
| ⏳ Day 10 | SPI Driver                     | Planned   |
| ⏳ Day 11 | I2C Driver                     | Planned   |
| ⏳ Day 12 | Driver Integration             | Planned   |
| ⏳ Day 13 | Driver Testing Framework       | Planned   |
| ⏳ Day 14 | Complete Driver Library        | Planned   |

---

# ✅ Day 1 – GPIO Driver Development

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

### Skills Learned

* STM32 GPIO Configuration
* Embedded C Programming
* Driver Abstraction
* Firmware Modularity

---

# ✅ Day 2 – GPIO Input/Button Driver

### Features Implemented

* GPIO Input Initialization
* Button State Reading
* Driver-Based Input Handling
* Modular Firmware Structure

### Skills Learned

* Digital Input Handling
* Pull-Up / Pull-Down Concepts
* Embedded Driver Design
* STM32 GPIO Input Configuration

---

# ✅ Day 3 – UART Driver Development

### Features Implemented

* UART Initialization
* UART Transmit Function
* UART Receive Function
* Driver Abstraction Layer

### Files Created

```text
Core/Inc/uart_driver.h
Core/Src/uart_driver.c
```

### Skills Learned

* USART Configuration
* Serial Communication
* Embedded Driver Development
* Modular Firmware Design

---

# ✅ Day 4 – UART Command Processing System

### Features Implemented

* UART Command Reception
* Command Parsing Logic
* Command Response System
* Serial Terminal Communication

### Commands Tested

```text
1 → LED ON
0 → LED OFF
```

### Skills Learned

* UART Command Handling
* Firmware Architecture
* Embedded Debugging
* Serial Terminal Integration

---

# ✅ Day 5 – GPIO Interrupt Driver

### Features Implemented

* External Interrupt (EXTI) Configuration
* Interrupt Callback Handling
* Push Button Triggered Events
* LED Control Using Interrupts

### Files Created

```text
Core/Inc/interrupt_driver.h
Core/Src/interrupt_driver.c
```

### Skills Learned

* EXTI Configuration
* NVIC Configuration
* Interrupt Service Routines
* Event Driven Programming

---

# ✅ Day 6 – ADC Driver Development

### Features Implemented

* ADC Initialization
* Single Channel ADC Read
* Analog Sensor Data Acquisition
* ADC Driver Abstraction

### Files Created

```text
Core/Inc/adc_driver.h
Core/Src/adc_driver.c
```

### Driver APIs

```c
uint32_t ADC_Read(ADC_HandleTypeDef *hadc);
```

### Skills Learned

* Analog-to-Digital Conversion
* ADC Configuration
* Sensor Interfacing
* Embedded Driver Design

---

# ✅ Day 7 – Multi-Channel ADC Driver

### Features Implemented

* Multi-Channel Analog Data Acquisition
* Sequential ADC Channel Reading
* Sensor Monitoring Framework
* UART-Based Data Logging

### Skills Learned

* Multi-Channel ADC
* Data Acquisition Systems
* Sensor Integration
* Embedded Monitoring Systems

---

# ✅ Day 8 – Timer Driver Development

### Features Implemented

* Timer Initialization
* Periodic Time Base Generation
* Software Timing Functions
* Driver Abstraction

### Files Created

```text
Core/Inc/timer_driver.h
Core/Src/timer_driver.c
```

### Skills Learned

* STM32 Timers
* Time Base Generation
* Embedded Scheduling
* Driver Development

---

# ✅ Day 9 – PWM Driver Development

### Features Implemented

* PWM Signal Generation
* PWM Start Function
* Duty Cycle Control
* Brightness Control Simulation

### Files Created

```text
Core/Inc/pwm_driver.h
Core/Src/pwm_driver.c
```

### Driver APIs

```c
void PWM_Start(TIM_HandleTypeDef *htim,
               uint32_t Channel);

void PWM_SetDutyCycle(TIM_HandleTypeDef *htim,
                      uint32_t Channel,
                      uint16_t DutyCycle);
```

### Skills Learned

* Pulse Width Modulation (PWM)
* Timer Output Compare Mode
* Duty Cycle Control
* Motor / LED Control Fundamentals

---

## 📚 Skills Being Developed

* Embedded C
* STM32 Firmware Development
* Driver Development
* Peripheral Programming
* Firmware Architecture
* Embedded Debugging
* ADC Programming
* UART Communication
* Interrupt Programming
* Timer Programming
* PWM Generation
* Sensor Interfacing
* Driver Abstraction

---

## 🚀 Future Goals

* SPI Driver Development
* I2C Driver Development
* Driver Integration Framework
* Driver Testing Framework
* Complete Driver Library
* Register-Level Programming
* FreeRTOS Integration
* Embedded Linux Fundamentals
* Semiconductor Placement Preparation

---

## 👨‍💻 Author

**Abhiney Kumar**
B.Tech ECE (4th Semester)
Dr. B.R. Ambedkar National Institute of Technology, Jalandhar

GitHub: https://github.com/abhigoraya005

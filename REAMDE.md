# MinoOscilloscope – Pin Allocation

## 1. Hardware Configuration

| Parameter | Value |
|---|---|
| MCU | STM32F411RET6 |
| Board | Black Pill |
| Package | LQFP64 |
| CPU | ARM Cortex-M4F |
| SYSCLK | Up to 100 MHz |
| Driver | Register-level CMSIS |
| DSP | CMSIS-DSP |

## 2. Pin Allocation

### 2.1. Analog Input – ADC

| Signal | GPIO | ADC Channel | Description |
|---|---|---|---|
| ADC_CH1 | PA0 | ADC1_IN0 | Analog input 1 |
| ADC_CH2 | PA1 | ADC1_IN1 | Analog input 2 |

### 2.2. Digital Input – Logic Analyzer

| Signal | GPIO | Description |
|---|---|---|
| D0 | PB0 | Digital input |
| D1 | PB1 | Digital input |
| D2 | PB2 | Digital input |
| D3 | PB10 | Digital input |
| D4 | PB11 | Digital input |
| D5 | PC0 | Digital input |
| D6 | PC1 | Digital input |
| D7 | PD2 | Digital input |

### 2.3. USART

| Signal | GPIO | Function |
|---|---|---|
| USART2_TX | PA2 | UART transmit |
| USART2_RX | PA3 | UART receive |

### 2.4. SPI

| Signal | GPIO | Function |
|---|---|---|
| SPI1_SCK | PA5 | SPI clock |
| SPI1_MISO | PA6 | SPI data input |
| SPI1_MOSI | PA7 | SPI data output |
| SPI1_CS | PA4 | Chip select (GPIO) |

### 2.5. I2C

| Signal | GPIO | Function |
|---|---|---|
| I2C1_SCL | PB6 | I2C clock |
| I2C1_SDA | PB7 | I2C data |

### 2.6. Timer / PWM

| Signal | GPIO | Function |
|---|---|---|
| PWM_OUT | PB8 | TIM10_CH1 |

### 2.7. Clock Output

| Signal | GPIO | Function |
|---|---|---|
| MCO1 | PA8 | Clock output |

### 2.8. Debug Interface

| Signal | GPIO | Function |
|---|---|---|
| SWDIO | PA13 | SWD data |
| SWCLK | PA14 | SWD clock |
| NRST | NRST | Hardware reset |

## 3. External Connections

| Connector | Signals |
|---|---|
| J1 – Analog | ADC_CH1, ADC_CH2, GND |
| J2 – Digital | D0–D7, GND |
| J3 – UART | USART2_TX, USART2_RX, GND |
| J4 – SPI | SCK, MISO, MOSI, CS, GND |
| J5 – I2C | SCL, SDA, GND |
| J6 – PWM | PWM_OUT, GND |
| J7 – Debug | SWDIO, SWCLK, NRST, GND, 3.3V |

## 4. Important Notes

- ADC input voltage must remain within the MCU electrical limits.
- ADC1 uses sequential conversion for two analog channels.
- Digital acquisition should use Timer and DMA where appropriate.
- I2C requires external pull-up resistors.
- SPI, UART and I2C use dedicated pin assignments in this configuration.
- Keep PA13 and PA14 available for SWD debugging.
- Digital input pins are reserved for logic analyzer operation.
- External input signals require appropriate voltage protection.

## 5. References

- STM32F411xC/xE Datasheet – Pin definitions and Alternate Function Mapping.
- RM0383 – Reference Manual.
- CMSIS Device STM32F4.

https://www.st.com/resource/en/datasheet/stm32f411re.pdf

https://www.st.com/resource/en/reference_manual/dm00119316.pdf

**Document:** MinoOscilloscope_Pin_Allocation.md

**Version:** V1.0
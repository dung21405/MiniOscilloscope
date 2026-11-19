/*
 * rcc.h
 *
 *  Created on: Nov 19, 2026
 *      Author: dung
 */

#ifndef RCC_H_
#define RCC_H_
#include "stm32f411xe.h"
#include <stdint.h>

/**
 * Clock Enable Macros for GPIOx peripheral
 */
#define GPIOA_PCLK_EN()		(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()		(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()		(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()		(RCC->AHB1ENR |= (1 << 3))

/**
 * Clock Enable Macros for USARTx peripheral
 */
#define USART2_PCLK_EN()    (RCC->APB1ENR |= (1 << 17))

/**
 * Clock Enable Macros for I2Cx peripheral
 */
#define I2C1_PCLK_EN()		(RCC->APB1ENR |= (1 << 21))

/**
 * Clock Enable Macros for SPIx peripheral
 */
#define SPI1_PCLK_EN()      (RCC->APB2ENR |= (1 << 12))


/**
 * Clock Enable Macros for ADCx peripheral
 */
#define ADC1_PCLK_EN()      (RCC->APB2ENR |= (1 << 8))

/**
 * Clock Enable Macros for TIMx peripheral
 */
#define TIM10_PCLK_EN()     (RCC->APB2ENR |= (1  << 17))

/* Clock Disable Macros for CRC peripherals */
#define CRC_PCLK_EN()            (RCC->AHB1ENR |= (1 << 12))

/* Clock Disable Macros for DMA peripherals */
#define DMA1_PCLK_EN()           (RCC->AHB1ENR |= (1 << 21))

/* Window Watchdog timer */
#define WWDG_PCLK_EN()           (RCC->APB1ENR |= (1 << 11))

/**
 * Clock Enable Macros for SYSCFG peripherals
 */
#define SYSCFG_PCLK_EN()    (RCC->APB2ENR |= (1 << 14))





/**
 * Clock Disable Macros for GPIOx peripherals
 */
#define GPIOA_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI()		(RCC->AHB1ENR &= ~(1 << 3))

/**
 * Clock Disable Macros for USARTx peripherals
 */
#define USART2_PCLK_DI()	(RCC->APB1ENR &= ~(1 << 17))

/**
 * Clock Enable Macros for I2Cx peripherals
 */
#define I2C1_PCLK_DI()      (RCC->APB1ENR &= ~(1 << 21))

/**
 * Clock Disable Macros for SPIx peripherals
 */
#define SPI1_PCLK_DI()		(RCC->APB2ENR &= ~(1 << 12))

/**
 * Clock Enable Macros for ADCx peripherals
 */
#define ADC1_PCLK_DI()      (RCC->APB2ENR &= ~(1 << 8))

/**
 * Clock Disable Macros for TIMx peripherals
 */
#define TIM10_PCLK_DI()          (RCC->APB2ENR &= ~(1 << 17))


/**
 * Clock Disable Macros for CRC peripherals
 */
#define CRC_PCLK_DI()            (RCC->AHB1ENR &= ~(1 << 12))

/**
 * Clock Disable Macros for DMA peripherals
 */
#define DMA1_PCLK_DI()           (RCC->AHB1ENR &= ~(1 << 21))

/* WWDG */
#define WWDG_PCLK_DI()      (RCC->APB1ENR &= ~(1 << 11))


/**
 * Clock Disable Macros for SYSCFG peripherals
 */
#define SYSCFG_PCLK_DI()	(RCC->APB2ENR &= ~(1 << 14))


/**
 * Macros to reset GPIOx peripherals
 */
#define GPIOA_REG_RESET()		do{ (RCC->AHB1RSTR |= (1 << 0)); (RCC->AHB1RSTR &= ~(1 << 0)); }while(0)
#define GPIOB_REG_RESET()   	do{ (RCC->AHB1RSTR |= (1 << 1)); (RCC->AHB1RSTR &= ~(1 << 1)); }while(0)
#define GPIOC_REG_RESET()   	do{ (RCC->AHB1RSTR |= (1 << 2)); (RCC->AHB1RSTR &= ~(1 << 2)); }while(0)
#define GPIOD_REG_RESET()   	do{ (RCC->AHB1RSTR |= (1 << 3)); (RCC->AHB1RSTR &= ~(1 << 3)); }while(0)

/**
 * Macros to reset USARTx Reset
 */
#define USART2_REG_RESET()  	do { RCC->APB1RSTR |= (1 << 17); RCC->APB1RSTR &= ~(1 << 17); } while (0)

/**
 * Macros to reset SPIx Reset
 */
#define SPI1_REG_RESET()        do { RCC->APB2RSTR |= (1 << 12); RCC->APB2RSTR &= ~(1 << 12); } while (0)

/**
 * Macros to reset I2Cx Reset
 */
#define I2C1_REG_RESET()    do { RCC->APB1RSTR |= (1 << 21); RCC->APB1RSTR &= ~(1 << 21); } while (0)

/*
 * Macros to reset ADCx Reset
 */
#define ADC1_REG_RESET()        do { RCC->APB2RSTR |= (1 << 8); RCC->APB2RSTR &= ~(1 << 8); } while (0)

/*
 * Macros to reset TIMx Reset
 */
#define TIM10_REG_RESET()   	do { RCC->APB2RSTR |= (1 << 17); RCC->APB2RSTR &= ~(1 << 17); } while (0)

/*
 * Macros to reset CRC Reset
 */
#define CRC_REG_RESET()     	do { RCC->AHB1RSTR |= (1 << 12); RCC->AHB1RSTR &= ~(1 << 12); } while (0)


/*
 * Macros to reset DMA Reset
 */
#define DMA1_REG_RESET()    	do { RCC->AHB1RSTR |= (1 << 21); RCC->AHB1RSTR &= ~(1 << 21); } while (0)

/*
 * Macros to reset SYSCFG Reset
 */
#define SYSCFG_REG_RESET()      do { RCC->APB2RSTR |= (1 << 14); RCC->APB2RSTR &= ~(1 << 14); } while (0)


#endif /* RCC_H_ */

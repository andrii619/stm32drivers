/*
 * memory_map.h
 *
 *  Created on: Oct 24, 2023
 *      Author: andrii
 */

#ifndef INC_STM32F75X_MEMORY_MAP_H_
#define INC_STM32F75X_MEMORY_MAP_H_

//#define PERIPH_BASE

#define APB1PERIPH_BASE			(0x40000000)
#define APB2PERIPH_BASE			(0x40010000)
#define AHB1PERIPH_BASE			(0x40020000)
#define AHB2PERIPH_BASE			(0x50000000)
#define AHB3PERIPH_BASE			(0x60000000)



#define GPIOA_BASEADDR	(AHB1PERIPH_BASE + 0x0000)
#define GPIOB_BASEADDR	(AHB1PERIPH_BASE + 0x0400)
#define GPIOC_BASEADDR	(AHB1PERIPH_BASE + 0x0800)
#define GPIOD_BASEADDR	(AHB1PERIPH_BASE + 0x0C00)
#define GPIOE_BASEADDR	(AHB1PERIPH_BASE + 0x1000)
#define GPIOF_BASEADDR	(AHB1PERIPH_BASE + 0x1400)
#define GPIOG_BASEADDR	(AHB1PERIPH_BASE + 0x1800)
#define GPIOH_BASEADDR	(AHB1PERIPH_BASE + 0x1C00)
#define GPIOI_BASEADDR	(AHB1PERIPH_BASE + 0x2000)
#define GPIOJ_BASEADDR	(AHB1PERIPH_BASE + 0x2400)
#define GPIOK_BASEADDR	(AHB1PERIPH_BASE + 0x2800)
#define CRC_BASEADDR	(AHB1PERIPH_BASE + 0x3000)
#define RCC_BASEADDR	(AHB1PERIPH_BASE + 0x3800)


#endif /* INC_STM32F75X_MEMORY_MAP_H_ */

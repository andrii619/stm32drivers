/*
 * gpio.h
 *
 *  Created on: Oct 24, 2023
 *      Author: andrii
 */

#ifndef INC_STM32F75X_GPIO_H_
#define INC_STM32F75X_GPIO_H_

#include "memory_map.h"

enum GPIORegisterMap_e {
	GPIOx_MODER 	= 		0x00,
	GPIOx_OTYPER 	= 		0x04,
	GPIOx_OSPEEDR 	= 		0x08,
	GPIOx_PUPDR 	=		0x0C,
	GPIOx_IDR		=		0x10,
	GPIOx_ODR 		= 		0x14,
	GPIOx_BSRR		=		0x18,
	GPIOx_LCKR		=		0x1C,
	GPIOx_AFRL 		= 		0x20,		// alternate function low, pin 0 to 7
	GPIOx_AFRH 		= 		0x24,		// alternate function high, pin 8 to 15
};



typedef struct  {
	/**
	 * 00: Input mode (reset state)
	*	01: General purpose output mode
	*	10: Alternate function mode
	*	11: Analog mode
	 */
	uint32_t moder0:2;
	uint32_t moder1:2;
	uint32_t moder2:2;
	uint32_t moder3:2;
	uint32_t moder4:2;
	uint32_t moder5:2;
	uint32_t moder6:2;
	uint32_t moder7:2;
	uint32_t moder8:2;
	uint32_t moder9:2;
	uint32_t moder10:2;
	uint32_t moder11:2;
	uint32_t moder12:2;
	uint32_t moder13:2;
	uint32_t moder14:2;
	uint32_t moder15:2;
}GPIOx_MODER_s;



typedef struct {
	uint32_t ot0:1;
	uint32_t ot1:1;
	uint32_t ot2:1;
	uint32_t ot3:1;
	uint32_t ot4:1;
	uint32_t ot5:1;
	uint32_t ot6:1;
	uint32_t ot7:1;
	uint32_t ot8:1;
	uint32_t ot9:1;
	uint32_t ot10:1;
	uint32_t ot11:1;
	uint32_t ot12:1;
	uint32_t ot13:1;
	uint32_t ot14:1;
	uint32_t ot15:1;
	uint32_t const reserved:16;
}GPIOx_OTYPER_s;


typedef struct {
	uint32_t ospeedr0:2;
	uint32_t ospeedr1:2;
	uint32_t ospeedr2:2;
	uint32_t ospeedr3:2;
	uint32_t ospeedr4:2;
	uint32_t ospeedr5:2;
	uint32_t ospeedr6:2;
	uint32_t ospeedr7:2;
	uint32_t ospeedr8:2;
	uint32_t ospeedr9:2;
	uint32_t ospeedr10:2;
	uint32_t ospeedr11:2;
	uint32_t ospeedr12:2;
	uint32_t ospeedr13:2;
	uint32_t ospeedr14:2;
	uint32_t ospeedr15:2;
} GPIOx_OSPEEDR_s;

//union GPIOx_MODER_u {
//	uint32_t value;
//	struct GPIOx_MODER_s bitfield;
//};
//
//typedef union GPIOx_MODER_u GPIOx_MODER_t;
//

typedef struct {
	uint32_t pupdr0:2;
	uint32_t pupdr1:2;
	uint32_t pupdr2:2;
	uint32_t pupdr3:2;
	uint32_t pupdr4:2;
	uint32_t pupdr5:2;
	uint32_t pupdr6:2;
	uint32_t pupdr7:2;
	uint32_t pupdr8:2;
	uint32_t pupdr9:2;
	uint32_t pupdr10:2;
	uint32_t pupdr11:2;
	uint32_t pupdr12:2;
	uint32_t pupdr13:2;
	uint32_t pupdr14:2;
	uint32_t pupdr15:2;
}GPIOx_PUPDR_s;



typedef struct  {
	uint32_t idr0:1;
	uint32_t idr1:1;
	uint32_t idr2:1;
	uint32_t idr3:1;
	uint32_t idr4:1;
	uint32_t idr5:1;
	uint32_t idr6:1;
	uint32_t idr7:1;
	uint32_t idr8:1;
	uint32_t idr9:1;
	uint32_t idr10:1;
	uint32_t idr11:1;
	uint32_t idr12:1;
	uint32_t idr13:1;
	uint32_t idr14:1;
	uint32_t idr15:1;
	uint32_t const reserved:16;
} GPIOx_IDR_s;


//union GPIOx_IDR_u {
//	uint32_t value;
//	struct GPIOx_IDR_s bitfield;
//};
//
//typedef union GPIOx_IDR_u GPIOx_IDR_t;
//


typedef struct {
	uint32_t odr0:1;
	uint32_t odr1:1;
	uint32_t odr2:1;
	uint32_t odr3:1;
	uint32_t odr4:1;
	uint32_t odr5:1;
	uint32_t odr6:1;
	uint32_t odr7:1;
	uint32_t odr8:1;
	uint32_t odr9:1;
	uint32_t odr10:1;
	uint32_t odr11:1;
	uint32_t odr12:1;
	uint32_t odr13:1;
	uint32_t odr14:1;
	uint32_t odr15:1;
	uint32_t const reserved:16;
} GPIOx_ODR_s ;


typedef struct {
	uint32_t bs0:1;
	uint32_t bs1:1;
	uint32_t bs2:1;
	uint32_t bs3:1;
	uint32_t bs4:1;
	uint32_t bs5:1;
	uint32_t bs6:1;
	uint32_t bs7:1;
	uint32_t bs8:1;
	uint32_t bs9:1;
	uint32_t bs10:1;
	uint32_t bs11:1;
	uint32_t bs12:1;
	uint32_t bs13:1;
	uint32_t bs14:1;
	uint32_t bs15:1;
	uint32_t br0:1;
	uint32_t br1:1;
	uint32_t br2:1;
	uint32_t br3:1;
	uint32_t br4:1;
	uint32_t br5:1;
	uint32_t br6:1;
	uint32_t br7:1;
	uint32_t br8:1;
	uint32_t br9:1;
	uint32_t br10:1;
	uint32_t br11:1;
	uint32_t br12:1;
	uint32_t br13:1;
	uint32_t br14:1;
	uint32_t br15:1;
}GPIOx_BSRR_s;


typedef struct {
	uint32_t lck0:1;
	uint32_t lck1:1;
	uint32_t lck2:1;
	uint32_t lck3:1;
	uint32_t lck4:1;
	uint32_t lck5:1;
	uint32_t lck6:1;
	uint32_t lck7:1;
	uint32_t lck8:1;
	uint32_t lck9:1;
	uint32_t lck10:1;
	uint32_t lck11:1;
	uint32_t lck12:1;
	uint32_t lck13:1;
	uint32_t lck14:1;
	uint32_t lck15:1;
	uint32_t lckk:1;
	uint32_t const reserved:15;
}GPIOx_LCKR_s;


typedef struct {
	uint32_t afr0:4;
	uint32_t afr1:4;
	uint32_t afr2:4;
	uint32_t afr3:4;
	uint32_t afr4:4;
	uint32_t afr5:4;
	uint32_t afr6:4;
	uint32_t afr7:4;
}GPIOx_AFRL_s;



typedef struct {
	uint32_t afr8:4;
	uint32_t afr9:4;
	uint32_t afr10:4;
	uint32_t afr11:4;
	uint32_t afr12:4;
	uint32_t afr13:4;
	uint32_t afr14:4;
	uint32_t afr15:4;
}GPIOx_AFRH_s;



typedef struct {
	GPIOx_MODER_s	volatile	moderReg;
	GPIOx_OTYPER_s	volatile	otyper;
	GPIOx_OSPEEDR_s	volatile 	ospeedReg;
	GPIOx_PUPDR_s 	volatile 	pupdReg;
	GPIOx_IDR_s 	volatile	idReg;
	GPIOx_ODR_s 	volatile	odReg;
	GPIOx_BSRR_s 	volatile 	bsrReg;
	GPIOx_LCKR_s 	volatile 	lckReg;
	GPIOx_AFRL_s	volatile	afRegLow;
	GPIOx_AFRH_s	volatile	afRegHigh;
}Gpio_Reg_s;



//typedef (Gpio_Reg_s *) GpioRegPtr




typedef Gpio_Reg_s* GpioARegPtr;
typedef Gpio_Reg_s* GpioBRegPtr;
typedef Gpio_Reg_s* GpioCRegPtr;
typedef Gpio_Reg_s* GpioDRegPtr;
typedef Gpio_Reg_s* GpioERegPtr;
typedef Gpio_Reg_s* GpioFRegPtr;
typedef Gpio_Reg_s* GpioGRegPtr;
typedef Gpio_Reg_s* GpioHRegPtr;
typedef Gpio_Reg_s* GpioIRegPtr;
typedef Gpio_Reg_s* GpioJRegPtr;
typedef Gpio_Reg_s* GpioKRegPtr;


#define GPIOA ((GpioARegPtr)GPIOA_BASEADDR)
#define GPIOB ((GpioBRegPtr)GPIOB_BASEADDR)
#define GPIOC ((GpioCRegPtr)GPIOC_BASEADDR)
#define GPIOD ((GpioDRegPtr)GPIOD_BASEADDR)
#define GPIOE ((GpioERegPtr)GPIOE_BASEADDR)
#define GPIOF ((GpioFRegPtr)GPIOF_BASEADDR)
#define GPIOG ((GpioGRegPtr)GPIOG_BASEADDR)
#define GPIOH ((GpioHRegPtr)GPIOH_BASEADDR)
#define GPIOI ((GpioIRegPtr)GPIOI_BASEADDR)
#define GPIOJ ((GpioJRegPtr)GPIOJ_BASEADDR)
#define GPIOK ((GpioKRegPtr)GPIOK_BASEADDR)

#endif /* INC_STM32F75X_GPIO_H_ */

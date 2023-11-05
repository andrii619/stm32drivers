/*
 * rcc.h
 *
 *  Created on: Nov 4, 2023
 *      Author: andrii
 */

#ifndef INC_STM32F75X_RCC_H_
#define INC_STM32F75X_RCC_H_

#include "stdint.h"

#include "memory_map.h"
typedef struct {
	uint32_t 		hsion:1;
	uint32_t const 	hsirdy:1;
	uint32_t const 	reserved:1;
	uint32_t 		hsitrim:5;
	uint32_t const 	hsical:8;
	uint32_t 		hseon:1;
	uint32_t const	hserdy:1;
	uint32_t 		hsebyp:1;
	uint32_t 		csson:1;
	uint32_t const 	reserved2:4;
	uint32_t 		pllon:1;
	uint32_t const 	pllrdy:1;
	uint32_t 		plli2son:1;
	uint32_t const 	plli2srdy:1;
	uint32_t 		pllsaion:1;
	uint32_t const 	pllsairdy:1;
	uint32_t const 	reserved3:2;
} RCC_CR_s;


typedef struct {
	uint32_t		pllm:6;
	uint32_t		plln:9;
	uint32_t const	reserved1:1;
	uint32_t		pllp:2;
	uint32_t const	reserved2:4;
	uint32_t		pllsrc:1;
	uint32_t const	reserved3:1;
	uint32_t		pllq:4;
	uint32_t const	reserved4:4;
} RCC_PLLCFGR_s;


typedef struct {
	uint32_t sw0:1;
	uint32_t sw1:1;
	uint32_t const	sws0:1;
	uint32_t const	sws1:1;
	uint32_t 		hpre:4;		//AHB prescaler
	uint32_t const 	reserved:2;
	uint32_t 		ppre1:3;		//APB1 prescaler
	uint32_t 		ppre2:3;		//APB2 prescaler
	uint32_t 		rtcpre:5;		//
	uint32_t 		mco1:2;		//microcontroller clock output 1
	uint32_t 		i2ssc:1;		//
	uint32_t 		mco1pre:3;		//
	uint32_t 		mco2pre:3;		//
	uint32_t 		mco2:2;		//microcontroller clock output 2
} RCC_CFGR_s;


typedef struct {
	uint32_t const	lsiRdyf:1;
	uint32_t const	lseRdyf:1;
	uint32_t const 	hsiRdyf:1;
	uint32_t const 	hseRdyf:1;
	uint32_t const 	pllRdyf:1;
	uint32_t const 	plli2sRdyf:1;
	uint32_t const 	pllsaiRdyf:1;
	uint32_t const 	cssf:1;
	uint32_t 		lsiRdyIe:1;
	uint32_t 		lseRdyIe:1;
	uint32_t 		hsiRdyIe:1;
	uint32_t 		hseRdyIe:1;
	uint32_t 		pllRdyIe:1;
	uint32_t 	 	plli2sRdyIe:1;
	uint32_t 	 	pllSaiRdyIe:1;
	uint32_t const	reserved1:1;
	
	uint32_t		lsiRdyC:1;
	uint32_t		lseRdyC:1;
	uint32_t		hsiRdyC:1;
	uint32_t		hseRdyC:1;
	uint32_t		pllRdyC:1;
	uint32_t		plli2sRdyC:1;
	uint32_t		pllSaiRdyC:1;
	uint32_t		cssc:1;
	uint32_t		reserved2:8;
} RCC_CIR_s;


typedef struct {
	uint32_t		gpioaRst:1;
	uint32_t		gpiobRst:1;
	uint32_t		gpiocRst:1;
	uint32_t		gpiodRst:1;
	uint32_t		gpioeRst:1;
	uint32_t		gpiofRst:1;
	uint32_t		gpiogRst:1;
	uint32_t		gpiohRst:1;
	uint32_t		gpioiRst:1;
	uint32_t		gpiojRst:1;
	uint32_t		gpiokRst:1;
	uint32_t const	reserved1:1;
	uint32_t		crcRst:1;
	uint32_t const	reserved2:3;
	
	uint32_t const	reserved3:5;
	uint32_t		dma1Rst:1;
	uint32_t		dma2Rst:1;
	uint32_t		dma2DRst:1;
	uint32_t const	reserved4:1;
	uint32_t		ethMacRst:1;
	uint32_t const	reserved5:3;
	uint32_t		otghsRst:1;
	uint32_t const	reserved6:2;
} RCC_AHB1RSTR_s;


typedef struct {
	uint32_t		dcmiRst:1;
	uint32_t const	reserved1:3;
	uint32_t		crypRst:1;
	uint32_t		hashRst:1;
	uint32_t		rngRst:1;
	uint32_t		otgfsRst:1;
	uint32_t const	reserved2:8;
	uint32_t const	reserved3:16;
} RCC_AHB2RSTR_s;


typedef struct {
	uint32_t		fmcRst:1;
	uint32_t		qspiRst:1;
	uint32_t const	reserved1:14;
	
	uint32_t const	reserved2:16;
} RCC_AHB3RSTR_s;

//typedef struct {
//	uint32_t reserved;
//}RCC_RESERVED_s;


typedef struct {
	uint32_t		tim2Rst:1;
	uint32_t		tim3Rst:1;
	uint32_t		tim4Rst:1;
	uint32_t		tim5Rst:1;
	uint32_t		tim6Rst:1;
	uint32_t		tim7Rst:1;
	uint32_t		tim12Rst:1;
	uint32_t		tim13Rst:1;
	uint32_t		tim14Rst:1;
	uint32_t		lpTim1Rst:1;
	uint32_t const	reserved1:1;
	uint32_t		wwdgRst:1;
	uint32_t const	reserved2:2;
	uint32_t		spi2Rst:1;
	uint32_t		spi3Rst:1;
	
	uint32_t const	spdifrxRst:1;
	uint32_t		uart2Rst:1;
	uint32_t		uart3Rst:1;
	uint32_t		uart4Rst:1;
	uint32_t		uart5Rst:1;
	uint32_t		i2c1Rst:1;
	uint32_t		i2c2Rst:1;
	uint32_t		i2c3Rst:1;
	uint32_t		i2c4Rst:1;
	uint32_t		can1Rst:1;
	uint32_t const	can2Rst:1;
	uint32_t const	cecRst:1;
	uint32_t		pwrRst:1;
	uint32_t		dacRst:1;
	uint32_t		uart7Rst:1;
	uint32_t		uart8Rst:1;
}RCC_APB1RSTR_s;


typedef struct {
	
}RCC_APB2RSTR_s;


typedef struct {
	uint32_t gpioaen:1; // bit 0
	uint32_t gpioben:1;
	uint32_t gpiocen:1;
	uint32_t gpioden:1;
	uint32_t gpioeen:1;
	uint32_t gpiofen:1;
	uint32_t gpiogen:1;
	uint32_t gpiohen:1;
	uint32_t gpioien:1;
	uint32_t gpiojen:1;
	uint32_t gpioken:1; // bit 10
	uint32_t const reserved:1;
	uint32_t crcEna:1;
	uint32_t const reserved2:3;
	uint32_t const reserved3:2;
	uint32_t bkpsramen:1; // bit 18
	uint32_t const reserved4:1;
	uint32_t dtcmramen:1;
	uint32_t dma1en:1;
	uint32_t dma2en:1;
	uint32_t dma2den:1;
	uint32_t const reserved5:1;
	uint32_t ethmacen:1; // bit 25
	uint32_t ethmactxen:1;
	uint32_t ethmacrxen:1;
	uint32_t ethmacptpen:1;
	uint32_t otghsen:1;
	uint32_t otghsulpien:1;
	uint32_t const reserved6:1;
} RCC_AHB1ENR_s;


typedef struct {
	uint32_t		tim1Rst:1;
}RCC_AHB2ENR_s;

typedef struct {
	uint32_t		test;
} RCC_AHB3ENR_s;


typedef struct {
	uint32_t		test;
} RCC_APB1ENR_s;


typedef struct {
	uint32_t		test;	
} RCC_APB2ENR_s;


typedef struct {
	uint32_t		test;
} RCC_AHB1LPENR_s;

typedef struct {
	uint32_t		test;
} RCC_AHB2LPENR_s;

typedef struct {
	uint32_t		test;
} RCC_AHB3LPENR_s;


typedef struct {
	uint32_t		test;
} RCC_APB1LPENR_s;

typedef struct {
	uint32_t		test;
} RCC_APB2LPENR_s;


typedef struct {
	uint32_t		test;
} RCC_BDCR_s;

typedef struct {
	uint32_t		test;
} RCC_CSR_s;


typedef struct {
	uint32_t		test;
} RCC_SSCGR_s;

typedef struct {
	uint32_t		test;
} RCC_PLLI2SCFGR_s;

typedef struct {
	uint32_t		test;
} RCC_PLLSAICFGR_s;

typedef struct {
	uint32_t		test;
} RCC_DCKCFGR1_s;


typedef struct {
	uint32_t		test;
} RCC_DCKCFGR2_s;



typedef struct {
	RCC_CR_s 			volatile	crReg;
	RCC_PLLCFGR_s		volatile	pllCfgReg;
	RCC_CFGR_s			volatile	cfgReg;
	RCC_CIR_s			volatile	ciReg;
	RCC_AHB1RSTR_s		volatile	ahb1RstReg;
	RCC_AHB2RSTR_s		volatile	ahb2RstReg;
	RCC_AHB3RSTR_s		volatile	ahb3RstReg;
	uint32_t const		volatile	reserved1;
	RCC_APB1RSTR_s		volatile	apb1RstReg;
	RCC_APB2RSTR_s		volatile	apb2RstReg;
	uint32_t const		volatile	reserved2;
	uint32_t const		volatile	reserved3;
	RCC_AHB1ENR_s		volatile	ahb1EnableReg;
	RCC_AHB2ENR_s		volatile	ahb2EnableReg;
	RCC_AHB3ENR_s		volatile	ahb3EnableReg;
	uint32_t const		volatile	reserved4;
	RCC_APB1ENR_s		volatile	apb1EnableReg;
	RCC_APB2ENR_s		volatile	apb2EnableReg;
	uint32_t const		volatile	reserved5;
	uint32_t const		volatile	reserved6;
	RCC_AHB1LPENR_s		volatile	ahb1lpEnableReg;
	RCC_AHB2LPENR_s		volatile	ahb2lpEnableReg;
	RCC_AHB3LPENR_s		volatile	ahb3lpEnableReg;
	uint32_t const 		volatile	reserved7;
	RCC_APB1LPENR_s		volatile	apb1lpEnableReg;
	RCC_APB2LPENR_s		volatile	apb2lpEnableReg;
	uint32_t const		volatile	reserved8;
	uint32_t const 		volatile	reserved9;
	RCC_BDCR_s			volatile	bdcReg;
	RCC_CSR_s			volatile	csReg;
	uint32_t const 		volatile	reserved19;
	uint32_t const		volatile	reserved20;
	RCC_SSCGR_s			volatile	sscgReg;
	RCC_PLLI2SCFGR_s	volatile	plli2sConfReg;
	RCC_PLLSAICFGR_s	volatile	pllsaiConfReg;
	RCC_DCKCFGR1_s		volatile	dckConfReg1;
	RCC_DCKCFGR2_s		volatile	dckConfReg2;
} RccReg_s;



#define RCC		((RccReg_s*)(RCC_BASEADDR))
























#endif /* INC_STM32F75X_RCC_H_ */

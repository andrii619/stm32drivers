/*
 * rcc.h
 *
 *  Created on: Nov 4, 2023
 *      Author: andrii
 */

#ifndef INC_STM32F75X_RCC_H_
#define INC_STM32F75X_RCC_H_


typedef struct {

} RCC_CR_s;


typedef struct {

} RCC_PLLCFGR_s;


typedef struct {

} RCC_CFGR;


typedef struct {

} RCC_CIR_s;


typedef struct {

} RCC_AHB1RSTR_s;


typedef struct {

} RCC_AHB2RSTR_s;


typedef struct {

} RCC_AHB3RSTR;

//typedef struct {
//	uint32_t reserved;
//}RCC_RESERVED_s;


typedef struct {

}RCC_APB1RSTR_s;


typedef struct {

}RCC_APB2RSTR_s;


typedef struct {

} RCC_AHB1ENR_s;


typedef struct {

}RCC_AHB2ENR_s;

typedef struct {

} RCC_AHB3ENR_s;


typedef struct {

} RCC_APB1ENR_s;


typedef struct {

} RCC_APB2ENR_s;


typedef struct {

} RCC_AHB1LPENR_s;

typedef struct {

} RCC_AHB2LPENR_s;

typedef struct {

} RCC_AHB3LPENR_s;


typedef struct {

} RCC_APB1LPENR_s;

typedef struct {

} RCC_APB2LPENR_s;


typedef struct {

} RCC_BDCR_s;

typedef struct {

} RCC_CSR_s;


typedef struct {

} RCC_SSCGR_s;

typedef struct {

} RCC_PLLI2SCFGR_s;

typedef struct {

} RCC_PLLSAICFGR_s;

typedef struct {

} RCC_DCKCFGR1_s;


typedef struct {

} DCKCFGR2_s;



typedef struct {
	RCC_CR 			crReg;
	RCC_PLLCFGR		pllCfgReg;
	RCC_CFGR		cfgReg;
	RCC_CIR			ciReg;
	RCC_AHB1RSTR	ahb1RstReg;
	RCC_AHB2RSTR	ahb2RstReg;
	RCC_AHB3RSTR	ahb3RstReg;
	uint32_t		reserved1;
} RccReg_s;




























#endif /* INC_STM32F75X_RCC_H_ */

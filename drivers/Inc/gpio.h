/*
 * gpio.h
 *
 *  Created on: Oct 23, 2023
 *      Author: andrii
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_


#if defined(STM32F75x) || defined(STM32F74x)
#include "stm32f75x/gpio.h"
#elif defined(STM32F4xx)
#include "stm32f4x/gpio.h"
#endif

#endif /* INC_GPIO_H_ */

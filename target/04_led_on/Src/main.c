/**
 ******************************************************************************
 * @file           : main.c
 * @author         : souravjena
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

int main(void){

	uint32_t *RCC_AHB1ENR = (uint32_t*) (0x40023800 + 0x30);	// Peripheral Clock Enable Register
	uint32_t *GPIOA_MODER = (uint32_t*) (0x40020000 + 0x00);	// GPIOA Mode Register
	uint32_t *GPIOA_ODR = (uint32_t*) (0x40020000 + 0x14);		// GPIOA Output Register

	*RCC_AHB1ENR |= (0x01 << 0);		// 1. Enable GPIOA Peripheral

	*GPIOA_MODER &= ~(0x03 << 10);		// 2.1. Clear bit 11 & 10
	*GPIOA_MODER |= (0x01 << 10);		// 2.2. Set bit 11 & 10, to 0 and 1 resp., to enable output mode.

	*GPIOA_ODR |= (0x01 << 5);			// 3. Set PA5 bit, to turn on User LED

	while(1);	// Infinite Loop

	return 0;
}

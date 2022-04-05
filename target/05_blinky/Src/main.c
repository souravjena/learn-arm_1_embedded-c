/**
 ******************************************************************************
 * @file           : main.c
 * @author         : souravjena
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

uint32_t *RCC_AHB1ENR = (uint32_t*) (0x40023800 + 0x30);	// Peripheral Clock Enable Register
uint32_t *GPIOA_MODER = (uint32_t*) (0x40020000 + 0x00);	// GPIOA Mode Register
uint32_t *GPIOA_ODR = (uint32_t*) (0x40020000 + 0x14);		// GPIOA Output Register


void led_init(void);
void sleep(void);
void led_on(void);
void led_off(void);



int main(void){

	led_init();

	while(1){
		led_on();
		sleep();

		led_off();
		sleep();
	}

	return 0;
}



void led_init(void){

	*RCC_AHB1ENR |= (0x01 << 0);		// 1. Enable GPIOA Peripheral

	*GPIOA_MODER &= ~(0x03 << 10);		// 2.1. Clear bit 11 & 10
	*GPIOA_MODER |= (0x01 << 10);		// 2.2. Set bit 11 & 10, to 0 and 1 resp., to enable output mode.

}


void sleep(void){
	for(uint32_t i = 0; i < 300000; i++){}
}


void led_on(void){
	*GPIOA_ODR |= (0x01 << 5);			// 3. Set PA5 bit, to turn on User LED
}
void led_off(void){
	*GPIOA_ODR &= ~(0x01 << 5);			// 3. Clear PA5 bit, to turn off User LED
}

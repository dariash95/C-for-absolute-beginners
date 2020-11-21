/*
 * main.c
 *
 *  Created on: Mar 24, 2020
 *      Author: Daniela
 */


#include<stdio.h>
#include<stdint.h>

#include"main.h"

int main(void){
	RCC_AHB1ENR_t volatile *const pClkCtrlReg = (RCC_AHB1ENR_t*) 0x40023830; // Create a pointer variable (of the type typedef struct) and then initialize the pointer to the required address
	GPIOx_MODE_t volatile *const pPortDModeReg = (GPIOx_MODE_t*) 0x40020C00;
	GPIOx_ODR_t volatile *const pPortDOutReg = (GPIOx_ODR_t*) 0x40020C14;

	pClkCtrlReg->gpiod_en = 1;
	pPortDModeReg->pin_12 = 1;

	while(1){
		pPortDOutReg->pin_12 = 1;
		for (uint32_t i=0; i<300000 ;i++);
		pPortDOutReg->pin_12 = 0;
		for (uint32_t i=0; i<300000; i++);
	}


}


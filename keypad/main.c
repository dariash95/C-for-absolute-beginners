/*
 * main.c
 *
 *  Created on: Mar 25, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

void delay (void){
	for(uint32_t i=0; i<300000; i++);
}

int main(void){

	//Peripherals register addresses
	uint32_t volatile *const pGPIOModeReg = (uint32_t*) 0x40020C00;
	uint32_t volatile *const pInputDataReg = (uint32_t*) (0x40020C00+0x10);
	uint32_t volatile *const pOutputDataReg = (uint32_t*) (0x40020C00+0x14);
	uint32_t volatile *const pClkCtrlReg = (uint32_t*) (0x40023800+0x30);
	uint32_t volatile *const pPullupDownReg = (uint32_t*) (0x40020C00+0x0C);

	//Enable the peripheral clock of GPIOD peripheral
	*pClkCtrlReg |= (1<<3);
	//Configure PD0, PD1, PD2, PD3 as outputs (Rows)
	*pGPIOModeReg &= ~(0xFF); //To clear
	*pGPIOModeReg |= 0x55;

	//Configure PD8, PD9, PD10, PD11 as inputs (Columns)
	*pGPIOModeReg &= ~(0xFF << 16); // 0 to set output is pins 16 - 23

	//Enable internal pull-up resistors in PD8, PD9, PD10, PD11
	*pPullupDownReg &=  ~(0xFF << 16);
	*pPullupDownReg |= (0x55 << 16);

	while(1){
	//Make all GPIOs of rows HIGH
	* pOutputDataReg |= 0x0F;

	//Make Row 1 Low
	* pOutputDataReg &= ~(1<<0);

	//Scan the columns and check if Column 1 is H or L
	if ( !(*pInputDataReg & (1<<8)) ){
		//Key is pressed
		delay();
		printf("1\n");
	}

	//Scan the columns and check if Column 2 is H or L
	if ( !(*pInputDataReg & (1<<9)) ){
		//Key is pressed
		delay();
		printf("2\n");
	}

	//Scan the columns and check if Column 3 is H or L
	if ( !(*pInputDataReg & (1<<10)) ){
		//Key is pressed
		delay();
		printf("3\n");
	}

	//Scan the columns and check if Column 4 is H or L
	if ( !(*pInputDataReg & (1<<11)) ){
		//Key is pressed
		delay();
		printf("A\n");
	}

	//Make all GPIOs of rows HIGH
	* pOutputDataReg |= 0x0F;

	//Make Row 2 Low
	* pOutputDataReg &= ~(1<<1);

	//Scan the columns and check if Column 1 is H or L
	if ( !(*pInputDataReg & (1<<8)) ){
		//Key is pressed
		delay();
		printf("3\n");
	}

	//Scan the columns and check if Column 2 is H or L
	if ( !(*pInputDataReg & (1<<9)) ){
		//Key is pressed
		delay();
		printf("4\n");
	}

	//Scan the columns and check if Column 3 is H or L
	if ( !(*pInputDataReg & (1<<10)) ){
		//Key is pressed
		delay();
		printf("5\n");
	}

	//Scan the columns and check if Column 4 is H or L
	if ( !(*pInputDataReg & (1<<11)) ){
		//Key is pressed
		delay();
		printf("B\n");
	}

	//Make all GPIOs of rows HIGH
	* pOutputDataReg |= 0x0F;

	//Make Row 3 Low
	* pOutputDataReg &= ~(1<<2);

	//Scan the columns and check if Column 1 is H or L
	if ( !(*pInputDataReg & (1<<8)) ){
		//Key is pressed
		delay();
		printf("7\n");
	}

	//Scan the columns and check if Column 2 is H or L
	if ( !(*pInputDataReg & (1<<9)) ){
		//Key is pressed
		delay();
		printf("8\n");
	}

	//Scan the columns and check if Column 3 is H or L
	if ( !(*pInputDataReg & (1<<10)) ){
		//Key is pressed
		delay();
		printf("9\n");
	}

	//Scan the columns and check if Column 4 is H or L
	if ( !(*pInputDataReg & (1<<11)) ){
		//Key is pressed
		delay();
		printf("C\n");
	}

	//Make all GPIOs of rows HIGH
	* pOutputDataReg |= 0x0F;

	//Make Row 4 Low
	* pOutputDataReg &= ~(1<<3);

	//Scan the columns and check if Column 1 is H or L
	if ( !(*pInputDataReg & (1<<8)) ){
		//Key is pressed
		delay();
		printf("*\n");
	}

	//Scan the columns and check if Column 2 is H or L
	if ( !(*pInputDataReg & (1<<9)) ){
		//Key is pressed
		delay();
		printf("0\n");
	}

	//Scan the columns and check if Column 3 is H or L
	if ( !(*pInputDataReg & (1<<10)) ){
		//Key is pressed
		delay();
		printf("#\n");
	}

	//Scan the columns and check if Column 4 is H or L
	if ( !(*pInputDataReg & (1<<11)) ){
		//Key is pressed
		delay();
		printf("D\n");
	}
}

}



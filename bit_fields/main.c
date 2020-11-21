/*
 * main.c
 *
 *  Created on: Mar 20, 2020
 *      Author: Daniela
 */

#include<stdio.h>
#include<stdint.h>

struct Packet {
	uint32_t crc       :2; //Of the 32 bits, use 2 for the crc. The order doesn't matter, but don't
	uint32_t status    :1;
	uint32_t payload   :12;
	uint32_t bat       :3;
	uint32_t sensor    :3;
	uint32_t longAddr  :8;
	uint32_t shortAddr :2;
	uint32_t addrMode  :1;
};

void wait_for_user_input(void);

int main (void){
	uint32_t packetValue;
	printf("Enter the value: ");
	scanf("%x",&packetValue);

	struct Packet packet;
	packet.crc = (uint8_t)(packetValue & 0x3);
	packet.status = (uint8_t)((packetValue >> 2) & 0x1);
	packet.payload = (uint16_t)((packetValue >> 3)  & 0xFFF);
	packet.bat = (uint8_t)((packetValue >> 15)  & 0x7);
	packet.sensor = (uint8_t)((packetValue >> 18)  & 0x7);
	packet.longAddr = (uint8_t)((packetValue >> 21)  & 0xFF);
	packet.shortAddr = (uint8_t)((packetValue >> 29)  & 0x3);
	packet.addrMode = (uint8_t)((packetValue >> 31)  & 0x1);

	printf("The CRC value is %#X\n",packet.crc);
	printf("The Status value is %#X\n",packet.status);
	printf("The Payload value is %#X\n",packet.payload);
	printf("The Battery value is %#X\n",packet.bat);
	printf("The Sensor value is %#X\n",packet.sensor);
	printf("The Long Address value is %#X\n",packet.longAddr);
	printf("The Short Address value is %#X\n",packet.shortAddr);
	printf("The Address Mode value is %#X\n",packet.addrMode);

	printf("The size of the structure is %u\n", sizeof(packet));
	wait_for_user_input();

}

void wait_for_user_input(void){

	printf("Please press enter to exit");
	while(getchar() != '\n'){
	}
		getchar();
	}

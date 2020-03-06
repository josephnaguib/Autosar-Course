/*
 * main.c
 *
 *  Created on: Feb 21, 2020
 *      Author: mnaguib
 */


#include <avr/io.h>
#include "RW.h"
#include "Rte.h"
#include "Std_Types.h"
extern uint8  State;
int main(){
	DDRD=0XFF;
	DDRC=0xFF;
	PORTC=0x00;
	PORTD=0x00;
	uint16 temp=5;
	Process(temp);
	if(State=='C'){
PORTC|=(1<<2);
	}
	if(State=='M'){
	PORTC|=(1<<7);
		}
	if(State=='H'){
	PORTD|=(1<<3);
		}
}



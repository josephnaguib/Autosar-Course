/*
 * RW.c
 *
 *  Created on: Feb 21, 2020
 *      Author: mnaguib
 */

#include "RW.h"
#include "Rte.h"
#include "Std_Types.h"
#include "stdlib.h"
#include "string.h"

uint16 temp;
uint8 State;
uint8 Status;
uint8 Frame[10];

void Process (uint16 temp){
	if (temp<=10){
		State='C';
		Status=0;
	}
	else if(temp>10 && temp<50){
		State='M';
		Status=0;
	}
	else if(temp>=50){
		State='H';
		Status=1;
	}
	sprintf(Frame,"%d,%c,%c",temp,State,Status);
}

void Swc1_task(){

while(1){
	RTE_ReadTemp(&temp);
	RTE_SendFrame(Frame);


}
}

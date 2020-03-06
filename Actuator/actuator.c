/*
 * actuator.c
 *
 *  Created on: Mar 6, 2020
 *      Author: mnaguib
 */
#include "actuator.h"
uint16 temp;
uint8 State;
uint8 Status;
uint8 Frame[10];
void Read_Status(uint8* Frame){
	 if (Frame[3]==0){
		 Status=0;
	 }
	 else if(Frame[3]==1){
		Status=1;
		}

}
uint8 Send_Action(uint8 Status){
	return Status;
}

/*
 * Rte.c
 *
 * Created: 2/21/2020 01:39:45 PM
 *  Author: User
 */ 
#include "Rte.h"


uint8 frameBuffer[FRAME_BYTES] = {-1};
uint8 frameReceivedFlag = NOT_RECEIVED;
	
uint16 tempReceived;
uint8 tempReceivedFlag = NOT_RECEIVED;

void RTE_WriteTemp(uint16 temp)				//read temperature from SPI (MCAL)
{
	tempReceived = temp;
	tempReceivedFlag = RECEIVED;
}

void RTE_ReadTemp(uint16* temp)				//write temperature to SWC (application)
{
	if(tempReceivedFlag == RECEIVED)
	{
		*temp = tempReceived;
		tempReceivedFlag = NOT_RECEIVED;
	}
}

void RTE_SendFrame(uint8* frame)			//receive frame from application (temp+status+state)
{
	uint8 i = 0;
	for(i=0; i<FRAME_BYTES; i++)
	{
		frameBuffer[i] = *(frame+i);
	}
	frameReceivedFlag = RECEIVED;	
}

void RTE_WriteFrame(SWC_TYPE swc, uint8* frame)			//send frame from RTE to other SWCs through CAN
{
	if (frameReceivedFlag == RECEIVED)
	{
		//callback function for CAN
		frameReceivedFlag == NOT_RECEIVED;
	}	
}
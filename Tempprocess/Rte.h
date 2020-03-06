/*
 * Rte.h
 *
 * Created: 2/21/2020 01:39:32 PM
 *  Author: User
 */ 


#ifndef RTE_H_
#define RTE_H_

#include "Std_Types.h"
#include "SWC_Types.h"

#define RECEIVED		1
#define NOT_RECEIVED	0
#define FRAME_BYTES		10

void RTE_WriteTemp(uint16 temp);					//read temperature from SPI (MCAL)
void RTE_ReadTemp(uint16* temp);					//write temperature to SWC (application)

void RTE_SendFrame(uint8* frame);					//receive frame from application (temp+status+state)
void RTE_WriteFrame(SWC_TYPE swc, uint8* frame);		//send frame from RTE to other SWCs through CAN


#endif /* RTE_H_ */
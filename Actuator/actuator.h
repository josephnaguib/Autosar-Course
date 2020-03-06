/*
 * actuator.h
 *
 *  Created on: Mar 6, 2020
 *      Author: mnaguib
 */

#ifndef ACTUATOR_H_
#define ACTUATOR_H_
#include "Std_types.h"
void  Read_Status(uint8* frame);
uint8 Send_Action(uint8 Status);

#endif /* ACTUATOR_H_ */

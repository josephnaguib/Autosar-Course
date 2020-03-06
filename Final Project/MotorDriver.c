#include "motorDriver.h"
void Init_motordriver(){
Port_Init(GPIOF);
Port_SetPinDirection(Dio_Channel_F0,PORT_PIN_OUT);
Port_SetPinDirection(Dio_Channel_F1,PORT_PIN_OUT);
Port_SetPinDirection(Dio_Channel_F2,PORT_PIN_OUT);
Dio_WriteChannel(Dio_Channel_F0,STD_high);
}
void Motor_ONN(){
Dio_WriteChannel(Dio_Channel_F1,STD_low);
Dio_WriteChannel(Dio_Channel_F2,STD_high);
}
void Motor_OFF(){
Dio_WriteChannel(Dio_Channel_F1,STD_low);
Dio_WriteChannel(Dio_Channel_F2,STD_low);
}
uint8 Read_Action(uint8 Status){
	if(Status==0)
		return 0;
	else if(Status==1)
		return 1;
}
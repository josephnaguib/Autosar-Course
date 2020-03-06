#include "motorDriver.h"

int main(){
	uint8 Status=1;
			Init_motordriver();

	while(1){


	if (Read_Action(Status)==0){
		Motor_OFF();
		for(int i=0;i<10000;i++){
}
	}
	else if(Read_Action(Status)==1){
		Motor_ONN();
				for(int i=0;i<10000;i++){
}
}

	}
}
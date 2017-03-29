#include "servoMotor.h"

StepMotor stepMotor1(8);
StepMotor stepMotor2(9);

void Reverse(){
	stepMotor1.turnDgree(0);
	stepMotor2.turnDgree(180);
	int a;
	int reverse ;
	while(1){
		delay(1000);
		if(reverse){
			a = stepMotor1.addDgree(15);
			stepMotor2.addDgree(-15);
			if(a == 1)
				reverse = 0;
			a = 0 ;
		}
		else{
			a = stepMotor1.addDgree(-15);
			stepMotor2.addDgree(15);
			if(a == 1)
				reverse = 1;
			a = 0 ;
		}
	}	
}
void StepMotor(){
	stepMotor1.turnDgree(0);
	stepMotor2.turnDgree(180);
	while(1){
		
	}
}
int main(){
	Reverse();
	return 0 ;
}

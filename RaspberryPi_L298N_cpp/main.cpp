#include "l298n.h"

int main(){
	L298N motors(25,24,23,22,29,28);
	
	motors.setPwm1(30);		// between to [0-100] 
	motors.setPwm2(70);
	
	motors.forwardMotor1();	
	motors.backMotor2();
	
	//.........
	while(1){			
		//............
	}
	
	return 0 ;
}
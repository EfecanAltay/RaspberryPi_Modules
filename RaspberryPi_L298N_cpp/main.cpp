#include "l298n.h"

int main(){
	L298N motors(25,24,23,22,29,28);
	
	motors.forwardMotor1();
	motors.forwardMotor2();
	
	return 0 ;
}
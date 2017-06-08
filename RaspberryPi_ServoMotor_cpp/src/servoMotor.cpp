#include "../include/servoMotor.h"

ServoMotor::ServoMotor(int pwmPin){
	wiringPiSetup () ;
	int status = softPwmCreate (pwmPin,0, 200);
	minValue = 6;
	maxValue = 23;
	sleep = 100;
	currentValue = 6;
	pwm_Pin = pwmPin;
	softPwmWrite(pwmPin,minValue);
}
void ServoMotor::turnDgree(int dgree){
	currentValue = minValue + (float)((maxValue-minValue)/180.f) * dgree;
	softPwmWrite(pwm_Pin,currentValue);
}
int ServoMotor::addDgree(int dgree){
	currentValue = currentValue + (float)((maxValue-minValue)/180.f) * dgree;
	if(currentValue > maxValue){
		currentValue = maxValue;
		return 1;
	}
	if(currentValue < minValue){
		currentValue = minValue;
		return 1;
	}
	softPwmWrite(pwm_Pin,currentValue);
	return 0;
}
int ServoMotor::addDgreeAndReturn(int dgree){
	currentValue = currentValue + (float)((maxValue-minValue)/180.f) * dgree;
	if(currentValue > maxValue){
		currentValue = maxValue;
		softPwmWrite(pwm_Pin,currentValue);
		return 1;
	}
	if(currentValue < minValue){
		currentValue = minValue;
		softPwmWrite(pwm_Pin,currentValue);
		return 1;
	}
	softPwmWrite(pwm_Pin,currentValue);
}
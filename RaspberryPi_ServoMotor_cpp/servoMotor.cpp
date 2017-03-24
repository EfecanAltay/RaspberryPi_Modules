#include "servoMotor.h"

StepMotor::StepMotor(int pwmPin){
	wiringPiSetup () ;
	int status = softPwmCreate (pwmPin,0, 200);
	minValue = 6;
	maxValue = 23;
	sleep = 100;
	currentValue = 6;
	pwm_Pin = pwmPin;
	softPwmWrite(pwmPin,minValue);
}
void StepMotor::turnDgree(int dgree){
	currentValue = minValue + (float)((maxValue-minValue)/180.f) * dgree;
	softPwmWrite(pwm_Pin,currentValue);
}
int StepMotor::addDgree(int dgree){
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
int StepMotor::addDgreeAndReturn(int dgree){
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
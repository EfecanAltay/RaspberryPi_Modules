#include "rgbLed.h"

RgbLed::RgbLed(int redPin,int greenPin,int bluePin){
	wiringPiSetup();
	pwm_RPin = redPin ;
	pwm_GPin = greenPin;
	pwm_BPin = bluePin;
	maxDuty = 200;
	softPwmCreate(redPin,0,maxDuty) ;
	softPwmCreate(greenPin,0,maxDuty) ;
	softPwmCreate(bluePin,0,maxDuty) ;
	softPwmWrite(redPin,maxDuty);
	softPwmWrite(greenPin,maxDuty);
	softPwmWrite(bluePin,maxDuty);
}
void RgbLed::setLigthRed(int duty){
	softPwmWrite(pwm_RPin,maxDuty-duty);
}
void RgbLed::setLigthGreen(int duty){
	softPwmWrite(pwm_GPin,maxDuty-duty);
}
void RgbLed::setLigthBlue(int duty){
	softPwmWrite(pwm_BPin,maxDuty-duty);
}

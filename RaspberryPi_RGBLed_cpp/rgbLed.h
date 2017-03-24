#ifndef ServoMotor_H
#define ServoMotor_H

#include "wiringPi.h"
#include <softPwm.h>

class RgbLed{
	public:
		RgbLed(int,int,int);
		void setLigthRed(int);
		void setLigthGreen(int);
		void setLigthBlue(int);
	private:
		int pwm_RPin,pwm_BPin,pwm_GPin;
		int maxDuty;
};

#endif
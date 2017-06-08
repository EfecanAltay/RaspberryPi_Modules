#ifndef ServoMotor_H
#define ServoMotor_H

#include "wiringPi.h"
#include <softPwm.h>

class ServoMotor{
	public:
		ServoMotor(int);
		int minValue;
		int maxValue;
		int sleep;
		int currentValue;
		void turnDgree(int);
		int addDgree(int);
		int addDgreeAndReturn(int);
	private:
		int pwm_Pin;
};
#endif
#ifndef _L298N_H_INCLUDED_
#define _L298N_H_INCLUDED_

#include<wiringPi.h>
#include <softPwm.h>
#include <iostream>

using namespace std;

class L298N{
	public :
		L298N(int,int,int,int);
		L298N(int,int,int,int,int,int);
		void setPwm1(int);
		void setPwm2(int);
		void forwardMotor1();
		void backMotor1();
		void forwardMotor2();
		void backMotor2();
	private:
		int m11,m12,m21,m22;
		int pwm1,pwm2;
		bool usePwm;
};

#endif
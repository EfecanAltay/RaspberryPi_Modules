#ifndef _L298N_H_INCLUDED_
#define _L298N_H_INCLUDED_

#include<wiringPi.h>
#include <softPwm.h>
#include <iostream>

using namespace std;

class L298N{
	public :
		L298N(int,int,int,int);				//L298N(motor1_IN1,motor1_IN2,motor2_IN1,motor2_IN2)
		L298N(int,int,int,int,int,int);		//L298N(motor1_IN1,motor1_IN2,motor2_IN1,motor2_IN2,motor1_pwm,motor2_pwm)
		void setPwm1(int);					//if first you've setPwm(this is up row code),you can use this.
		void setPwm2(int);					//this func. is same the up row func.
		void forwardMotor1();				//you can turn forward motor1 
		void backMotor1();					//you can turn back motor1
		void forwardMotor2();				//you can turn forward motor2
		void backMotor2();					//you can turn back motor2
	private:
		int m11,m12,m21,m22;
		int pwm1,pwm2;
		bool usePwm;
};

#endif
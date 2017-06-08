#include "l298n.h"

L298N::L298N(int _m11,int _m12,int _m21,int _m22){
	m11 = _m11;m12 = _m12;m21 = _m21;m22 = _m22;
	usePwm = false ;
	wiringPiSetup();
	pinMode(m11,OUTPUT);pinMode(m12,OUTPUT);pinMode(m21,OUTPUT);pinMode(m22,OUTPUT);
	
}
L298N::L298N(int _m11,int _m12,int _m21,int _m22,int _pwm1,int _pwm2){
	m11 = _m11;m12 = _m12;m21 = _m21;m22 = _m22;
	pwm1 = _pwm1;pwm2 = _pwm2;
	usePwm = true ;
	wiringPiSetup();
	pinMode(m11,OUTPUT);pinMode(m12,OUTPUT);pinMode(m21,OUTPUT);pinMode(m22,OUTPUT);
	if(softPwmCreate(_pwm1,0,100) != 0){
		cerr << "Pwm1 Kurulamadı"<< endl;
	}
	if(softPwmCreate(_pwm2,0,100) != 0){
		cerr << "Pwm2 Kurulamadı"<< endl;
	}
}
void L298N::setPwm1(int duty){
	if(usePwm){
		 softPwmWrite(pwm1,duty);
	}else{
		cout << "Pwm Kullanmadın" << endl;
	}
}
void L298N::setPwm2(int duty){
	if(usePwm){
		softPwmWrite(pwm1,duty);
	}else{
		cout << "Pwm Kullanmadın" << endl;
	}
}
void L298N::forwardMotor1(){
	digitalWrite (m11, 1) ;
	digitalWrite (m12, 0) ;
}
void L298N::backMotor1(){
	digitalWrite (m11, 0) ;
	digitalWrite (m12, 1) ;
}
void L298N::forwardMotor2(){
	digitalWrite (m21, 1) ;
	digitalWrite (m22, 0) ;
}
void L298N::backMotor2(){
	digitalWrite (m21, 0) ;
	digitalWrite (m22, 1) ;
}



#include "wiringPi.h"


class StepMotor{
	public : 
		void setup(void);
		void clearPins(void);
		void turnRight(int);
		void turnLeft(int);
		void turnFastLeft(int);
		void turnFastRight(int);
		StepMotor(int,int,int,int);
		
	private :
		int in0,in1,in2,in3;
	
};
StepMotor::StepMotor(int _in0,int _in1 ,int _in2,int _in3 ){
	in0 = _in0;
	in1 = _in1;
	in2 = _in2;
	in3 = _in3;
}

void StepMotor::setup(){
	//setenv("WIRINGPI_GPIOMEM", "1", 1);
	wiringPiSetup();
	//Birinci Motorun girişleri Z eksen dönüşü
	pinMode(in0,OUTPUT);
	pinMode(in1,OUTPUT);
	pinMode(in2,OUTPUT);
	pinMode(in3,OUTPUT);
	}
void StepMotor::turnRight(int speed_milisec){
		digitalWrite(in0,HIGH);
		digitalWrite(in1,LOW);
		digitalWrite(in2,LOW);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,HIGH);
		digitalWrite(in2,LOW);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,LOW);
		digitalWrite(in2,HIGH);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,LOW);
		digitalWrite(in2,LOW);
		digitalWrite(in3,HIGH);
		delay(speed_milisec);
}
void StepMotor::turnLeft(int speed_milisec){
		digitalWrite(in0,HIGH);
		digitalWrite(in1,LOW);
		digitalWrite(in2,LOW);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,LOW);
		digitalWrite(in2,LOW);
		digitalWrite(in3,HIGH);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,LOW);
		digitalWrite(in2,HIGH);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
		digitalWrite(in0,LOW);
		digitalWrite(in1,HIGH);
		digitalWrite(in2,LOW);
		digitalWrite(in3,LOW);
		delay(speed_milisec);
}
void StepMotor::turnFastRight(int speed_milisec){
			digitalWrite(in0,LOW);
			digitalWrite(in1,LOW);
			digitalWrite(in2,HIGH);
			digitalWrite(in3,LOW);
			delay(speed_milisec);
			digitalWrite(in0,HIGH);
			digitalWrite(in1,LOW);
			digitalWrite(in2,LOW);
			digitalWrite(in3,LOW);
			delay(speed_milisec);
}
void StepMotor::turnFastLeft(int speed_milisec){
			digitalWrite(in0,LOW);
			digitalWrite(in1,HIGH);
			digitalWrite(in2,LOW);
			digitalWrite(in3,LOW);
			delay(speed_milisec);
			digitalWrite(in0,LOW);
			digitalWrite(in1,LOW);
			digitalWrite(in2,LOW);
			digitalWrite(in3,HIGH);
			delay(speed_milisec);
}
void StepMotor::clearPins(){
	digitalWrite(in0,LOW);
	digitalWrite(in1,LOW);
	digitalWrite(in2,LOW);
	digitalWrite(in3,LOW);
}

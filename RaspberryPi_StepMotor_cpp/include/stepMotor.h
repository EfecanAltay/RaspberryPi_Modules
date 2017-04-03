#ifndef StepMotor_H
#define StepMotor_H

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

#endif
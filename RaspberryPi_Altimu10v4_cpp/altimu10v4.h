#ifndef Altimu10v4_H
#define Altimu10v4_H

#include<wiringPi.h>
#include <wiringPiI2C.h>
#include<iostream>


using namespace std ;

enum AltiumDevice{
		Gyro,Acc,Magno
};
struct vector3D{
	int x;
	int y;
	int z;
};
class Altimu10v4{
	public:
		Altimu10v4(int,int,int);
		vector3D readData();
		void selectDevice(AltiumDevice);
		
	private:
		int fd;
		int gyroAddr,accAddr,magnoAddr;
		void gyroInit();
		void accInit();
		vector3D gyroPos,accPos ;
		
};
#endif
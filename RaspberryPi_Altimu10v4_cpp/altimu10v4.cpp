
/*
	Author : Efecan Altay
	RaspberryPi2
	date : 2.3.17
	abstract : Altimu10v4 data read 
*/


#include "altimu10v4.h"
//I2C Haberleþmesi yapýlacak

//******setup Accelerometer***********************
// Register adress : CTRL1_XL  : 0b00010000
//   		power    - Acc-full-S(x,y,z) - BandWidth
// CTRL1_XL ODRXL3*4 - FSXL0*2           - BWXL*2
// 			0110     - 01       	     - 11 
// 			416 Hz   - 16g      	     - 50hz 

//Read X 
//OUTX_L_XL 0x28
//OUTX_H_XL 0x29
//OUTY_L_XL 0x2A
//OUTY_H_XL 0x2B
//OUTZ_L_XL 0x2C
//OUTZ_H_XL 0x2D
//****************************************************



Altimu10v4::Altimu10v4(int _gyroAddr,int _accAddr,int _magnoAddr){
	gyroAddr = _gyroAddr;
	accAddr = _accAddr;
	magnoAddr = _magnoAddr;
	wiringPiSetup();
}
void Altimu10v4::selectDevice(AltiumDevice dev){
	switch(dev){
		case Gyro :
			fd = wiringPiI2CSetup(gyroAddr);
			if(fd < 0){
				cout<< "baglanti hatasi : adreste gyro modulu bulunamadi!!!" << endl;
			}else{
				gyroInit();	
			}
		break;
		case Acc :
			fd = wiringPiI2CSetup(accAddr);
			if(fd < 0){
			cout<< "baglanti hatasi : adreste acc modulu bulunamadi!!!" << endl;
			}else{
				accInit();	
			}
		break;
		case Magno:
			fd = wiringPiI2CSetup(magnoAddr);
			if(fd < 0){
			cout<< "baglanti hatasi : adreste magno modulu bulunamadi!!!" << endl;
			}	
		break;
	}	
}
void Altimu10v4::gyroInit(){
//Gyro adress : 0b1101011
//-------------
// CTRL1 : 0x20
// data 0b00001111
//-------------
// CTRL4: 0x23
// data 0b00110000
	int a = wiringPiI2CWriteReg8(fd,0x20,0b00001111);
	cout << "write a :"<< a << endl;
	delay(100);
	wiringPiI2CWriteReg8(fd,0x23,0b00110000);
	cout << "write a :"<< a << endl;
	delay(100);
}
vector3D Altimu10v4::readData(){
	int xl ,xh,yl ,yh,zl,zh;
	
	vector3D data;
	
	xl = wiringPiI2CReadReg8(fd,0x28);
	xh = wiringPiI2CReadReg8(fd,0x29);
	yl = wiringPiI2CReadReg8(fd,0x2a);
	yh = wiringPiI2CReadReg8(fd,0x2b);
	zl = wiringPiI2CReadReg8(fd,0x2c);
	zh = wiringPiI2CReadReg8(fd,0x2d);
	
	//cout <<"x: " << xh << " y: " << yh<< " z: " << zh <<endl;
	
	if(xh >190)
		accPos.x = (xh-255)/2*3 ;
	else
		accPos.x = xh/2*3;
	if(yh >190)
		accPos.y = (yh-255)/2*3 ;
	else
		accPos.y = yh/2*3 ;
	if(zh >190)
		accPos.z = (zh-255)/2*3 ;
	else
		accPos.z = zh/2*3;
	
	if(accPos.z < 0){
		accPos.x = 180 - accPos.x;
		accPos.y = 180 - accPos.y;
	}
	if(accPos.x < 0){
		accPos.x = 360 + accPos.x   ;
	}
	if(accPos.y < 0){
		accPos.y = 360 + accPos.y;
	}
		
	
	return accPos;
}
void Altimu10v4::accInit(){
//Gyro adress : 0b1101011
//-------------
// CTRL1 : 0x20
// data 0b01010111
//-------------
// CTRL4: 0x23
// data 0b00101000
	wiringPiI2CWriteReg8(fd,0x20,0b01010111);
	delay(100);
	wiringPiI2CWriteReg8(fd,0x23,0b00101000);
	delay(100);
}
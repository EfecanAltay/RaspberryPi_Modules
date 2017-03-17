/*
	Author : Efecan Altay
	RaspberryPi2
	date : 2.3.17
	abstract : stm32f8 discovery kitile spý haberlesmesi.
*/

#include<wiringPi.h>
#include <wiringPiI2C.h>
#include<iostream>

using namespace std ;

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
//Gyro adress : 0b1101011
//-------------
// CTRL1 : 0x20
// data 0b00001111
//-------------
// CTRL4: 0x23
// data 0b00110000

int selectDevice(int,int);
int main(){
	
	wiringPiSetup();
	
	int fd = wiringPiI2CSetup(0x6b);
	
	if(fd < 0){
		cout<< "baglanti hatasi : modul bulunamadi" << endl;
		return 0 ;
	}
	delay(100);
	int c = wiringPiI2CReadReg8(0x6b,0x26);
	cout << "c :"<< c << endl;
	
	delay(100);
	int a = wiringPiI2CWriteReg8(fd,0x20,0b00001111);
	cout << "a :"<< a << endl;
	delay(100);
	int b = wiringPiI2CWriteReg8(fd,0x23,0b00110000);
	cout << "b :"<< b << endl;
	

	
	
	delay(10);
		
	return 0 ;
}
int selectDevice(int file ,int addr){
	return wiringPiI2CWrite(file,addr);
}

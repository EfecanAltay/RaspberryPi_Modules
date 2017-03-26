#include "altimu10v4.h"
#include <cmath>

#define red 25
#define green 24
#define blue 23

int main(){
	Altimu10v4 altimu(0x6b,0x1d,0x5d);
	altimu.selectDevice(Acc);
	wiringPiSetup() ;
	
	 pinMode (red, OUTPUT) ;
	 pinMode (green, OUTPUT) ;
	 pinMode (blue, OUTPUT) ;
	 
	digitalWrite (red, HIGH);
	digitalWrite (green, HIGH);
	digitalWrite (blue, HIGH);
	
	vector3D pos;
	while(1){
		pos = altimu.readData();
		cout << "x :"<< pos.x ;
		cout << " y :"<< pos.y;
		cout << " z :"<< pos.z << endl;
		
		if(pos.x >= 0 && pos.x < 180){
			digitalWrite (red, LOW);
			digitalWrite (green, HIGH);
			digitalWrite (blue, HIGH);
		}	
		else if(pos.x >= 180 && pos.x < 360){
			digitalWrite(red, HIGH);
			digitalWrite (green,HIGH);
			digitalWrite (blue,LOW);
		}else{
			digitalWrite(red, HIGH);
			digitalWrite (green,HIGH);
			digitalWrite (blue,HIGH);
		}
			
		delay(100);
	}
	return 0;
}
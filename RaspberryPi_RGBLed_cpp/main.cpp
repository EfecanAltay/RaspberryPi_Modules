#include "rgbLed.h"

int main(){
	RgbLed rgbled(8,9,7);	//create rgbLed class
	int a = 0 ;
	while(1){
		delay(100);
		a+=10;
		if(a > 200)
			a=0;
		rgbled.setLigthGreen(a);	//setLigthGreen function set greenled duty values (duty [0-200] between );  
		rgbled.setLigthRed(200-a);	//setLigthRed is same setLigthGreen function.
	}
	return 0 ;
}
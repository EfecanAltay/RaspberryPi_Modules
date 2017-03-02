/*
	date : 02.03.17
	author : Efecan Altay
	RaspberryPi2
	name : UltraSonikSensor Mod�l�
*/
#include<wiringPi.h>
#include<iostream>

using namespace std ;

void setup(int,int);   //ultrasonic sens�rden veri okuyabilmek i�in ilk olarak setup edilmesi ve echo ,trig pinlerinin ayarlanmas� gerekir.
int getDistance(void); //bu fonk tek mesafe �l��m� g�stermektedir.
void setLogging(char); //E�er Loglama yap�lmak isteniyorsa ilk bu komut �a�r�l�r. ve 1 yap�l�r.
int runOrt(int);	   //setup i�lemi ger�ekle�ir ise run ort Komutu �al���r. 

char isSetup = 0 ;
char isLogging = 0 ; 
int echoPin,trigPin;
int distance ;


int main(){
	setLogging(1);
	setup(15,16);
	while(1){
		int distance = runOrt(3);
		cout << "mesafe :" << distance << endl;
		delay(500);
	}
	return 0 ;
}
void setup(int _echoPin,int _trigPin){
	echoPin = _echoPin; trigPin = _trigPin ;
	if(isLogging){
		cout << "ultraSonic initilaze..." << echoPin << endl;
		cout << "echoPin: " << echoPin << endl;
		cout << "trigPin: " << trigPin << endl;
	}
	wiringPiSetup();
	pinMode(echoPin,INPUT);
	pinMode(trigPin,OUTPUT);
	digitalWrite(trigPin,HIGH);
	isSetup = 1 ;
}
void setLogging(char _isLogging){
	isLogging = _isLogging ;
}
int getDistance(){
	if(isSetup){
		digitalWrite(trigPin,HIGH);
		delay(20);
		digitalWrite(trigPin,LOW);
		
		while(digitalRead(echoPin) == LOW);
		long startTime = micros();
        while(digitalRead(echoPin) == HIGH);
        long travelTime = micros() - startTime;
		int distance = travelTime / 58;
		return distance ;
	}else {
		cout << "!!!(UltraSonik Sens�r)Hata: ilk setup fonksiyonunu �a��rmal�s�n�z."
		return 0 ;
	}
}
int runOrt(int ex){
	int sumDistance = 0;
	for(int i = 0; i <ex ; i++)
		sumDistance += getDistance();
	return sumDistance/ex ;
}
int runExOrt(int ex){
	int sumDistance = 0;
	for(int i = 0; i <ex ; i++)
		sumDistance += getDistance();
	return sumDistance/ex ;
}

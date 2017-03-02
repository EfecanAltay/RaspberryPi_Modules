/*
	date : 02.03.17
	author : Efecan Altay
	RaspberryPi2
	name : UltraSonikSensor Modülü
*/
#include<wiringPi.h>
#include<iostream>

using namespace std ;

void setup(int,int);   //ultrasonic sensörden veri okuyabilmek için ilk olarak setup edilmesi ve echo ,trig pinlerinin ayarlanmasý gerekir.
int getDistance(void); //bu fonk tek mesafe ölçümü göstermektedir.
void setLogging(char); //Eðer Loglama yapýlmak isteniyorsa ilk bu komut çaðrýlýr. ve 1 yapýlýr.
int runOrt(int);	   //setup iþlemi gerçekleþir ise run ort Komutu çalýþýr. 

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
		cout << "!!!(UltraSonik Sensör)Hata: ilk setup fonksiyonunu çaðýrmalýsýnýz."
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

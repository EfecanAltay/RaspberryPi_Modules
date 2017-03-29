# RaspberryPi_Modules
This project include raspberrypi's modules

- [x] HttpClient<br>
    - [x] GetData
    - [x] PostData
- [x] StepMotor<br>
- [x] ServoMotor<br>
- [x] UltroSonicSen<br>
- [x] RGBLed<br>
- [x] L298N MotorDriver<br>
- [ ] Altimu<br>
    - [x] Accelerometer
    - [x] Gyro
	- [ ] Magnometer
	- [ ] Barometer

# How To Use

first,you need wiringPi Lib on Raspberry

you repo update,
```
$ sudo apt-get update
$ sudo apt-get upgrade
```
now intall git:
```
$ sudo apt-get install git-core
```
clone wiringPi Project in documants
```
$ cd
$ git clone git://git.drogon.net/wiringPi
```
and push project
```
$ cd ~/wiringPi
$ git pull origin
```
now you can built on your raspberryPi :)
```
$ cd ~/wiringPi
$ ./build
```
ok ,next scene,install cmake for debugger and libcurl for httpClient

```
sudo apt-get install cmake

//if you wont use httpClient,you wont need install libcurl and libjsoncpp
$ sudo apt-get install libcurl4-openssl-dev 
$ sudo apt-get install libjsoncpp-dev libjsoncpp0
```
Last one ,You need FindWiringPi.cmake file for CMake can see wiringPi

Can you see this links.
[eng](http://stackoverflow.com/questions/30424236/add-wiringpi-lib-to-cmake-on-raspberrypi)
[turkish](http://efecanaltay.esy.es/2017/03/02/cpp-ile-wiringpi-kutuphanesini-kullanmak)

That's ALL...
This help is here [WiringPi Setup](http://wiringpi.com/download-and-install/)

Now you can running modules...!!! :D 

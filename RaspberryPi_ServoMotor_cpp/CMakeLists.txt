cmake_minimum_required(VERSION 2.8)
project(ServoMotor)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable( ServoMotor servoMotor.cpp main.cpp)

target_link_libraries( ServoMotor ${WIRINGPI_LIBRARIES})
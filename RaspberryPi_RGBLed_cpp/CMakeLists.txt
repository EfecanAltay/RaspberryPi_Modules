cmake_minimum_required(VERSION 2.8)
project(RGBLed)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable( RGBLed rgbLed.cpp main.cpp)

target_link_libraries( RGBLed ${WIRINGPI_LIBRARIES})
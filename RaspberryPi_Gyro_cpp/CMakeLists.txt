cmake_minimum_required(VERSION 2.8)
project(Gyro)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable( Gyro gyro.cpp )

target_link_libraries( Gyro ${WIRINGPI_LIBRARIES})
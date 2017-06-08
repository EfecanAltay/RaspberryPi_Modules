cmake_minimum_required(VERSION 2.8)
project(ServoMotor)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

file(GLOB SOURCES src/*.cpp)

add_executable( ${PROJECT_NAME} ${SOURCES} main.cpp)

target_link_libraries( ${PROJECT_NAME} ${WIRINGPI_LIBRARIES})
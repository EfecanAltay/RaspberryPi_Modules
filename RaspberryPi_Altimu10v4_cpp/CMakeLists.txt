cmake_minimum_required(VERSION 2.8)
project(Altimu10v4)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable( Altimu10v4 altimu10v4.cpp main.cpp)

target_link_libraries( Altimu10v4 ${WIRINGPI_LIBRARIES})
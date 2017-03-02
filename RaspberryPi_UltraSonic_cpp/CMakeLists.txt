cmake_minimum_required(VERSION 2.8)
project(UltraSonic)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable( UltraSonic ultraSonic.cpp )

target_link_libraries( UltraSonic ${WIRINGPI_LIBRARIES})
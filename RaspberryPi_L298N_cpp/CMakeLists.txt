cmake_minimum_required(VERSION 2.8)
project(L298N)

find_package(WiringPi REQUIRED)

include_directories(${WIRINGPI_INCLUDE_DIRS})

add_executable(L298N l298n.cpp main.cpp)

target_link_libraries( L298N ${WIRINGPI_LIBRARIES})
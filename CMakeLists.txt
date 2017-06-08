cmake_minimum_required(VERSION 2.8)
project(WiringPiModules)

set(CMAKE_BUILD_TYPE Release)

file(GLOB SOURCES RaspberryPi_ServoMotor_cpp/src/*.cpp)

include_directories(include)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

file(GLOB HEADERS include/*.h)
install(FILES ${HEADERS} DESTINATION include)

file(GLOB HEADERS RaspberryPi_ServoMotor_cpp/include/*.h)
install(FILES ${HEADERS} DESTINATION include/WiringPiModules/RaspberryPi_ServoMotor_cpp)

cmake_minimum_required(VERSION 2.8)
project(Http)

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})

add_executable(Http httpClient.cpp)

target_link_libraries(Http ${CURL_LIBRARIES})
cmake_minimum_required(VERSION 2.8)
project(Http)

find_package(CURL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp)

link_libraries(${JSONCPP_LIBRARIES})

include_directories(${CURL_INCLUDE_DIRS})

add_executable(Http httpClient.cpp)

target_link_libraries(Http ${CURL_LIBRARIES})
target_link_libraries(Http ${JSONCPP_LIBRARIES})



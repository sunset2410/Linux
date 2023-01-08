cmake_minimum_required(VERSION 3.0.0)
project (hello)
#include_directories(~/usr/include)
add_executable(out main.cpp)


#g++ main.cpp -lmosquitto
#g++ main.cpp 
target_link_libraries(out PRIVATE mosquitto)




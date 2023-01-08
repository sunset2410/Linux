
cmake_minimum_required(VERSION 2.8.9)
project(directory_test)

include_directories(include)

#set(SOURCES src/main.cpp src/Student.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})
target_link_libraries(main PRIVATE pthread)

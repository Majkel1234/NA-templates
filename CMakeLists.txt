cmake_minimum_required(VERSION 2.8)

project(myProject CXX)

add_definitions(-std=c++11 -Wall)

add_custom_target(run-all)

add_subdirectory(fun1)
add_subdirectory(fun2)

add_executable(myProgram main.cpp)
target_link_libraries(myProgram fun1/fun1Lib fun2/fun2Lib)

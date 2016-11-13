cmake_minimum_required(VERSION 2.8)

project(templates-examples CXX)

add_definitions(-DCATCH_CONFIG_MAIN)
add_definitions(-std=c++11 -Wall -Wextra -Wpedantic -Werror -Wfatal-errors)
include_directories(vendor SYSTEM)

add_custom_target(run-all)

add_subdirectory(10-algos)
add_subdirectory(20-type-template)
add_subdirectory(30-traits)
add_subdirectory(40-algos-impl)
# add_subdirectory(50-sfinae)
# add_subdirectory(60-stm)


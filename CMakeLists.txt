cmake_minimum_required(VERSION 3.7)

project(sdl2_test)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(sdl2_test sdl2_test.c)
target_link_libraries(sdl2_test ${SDL2_LIBRARIES})

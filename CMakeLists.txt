cmake_minimum_required(VERSION 3.23)
project(libs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)


add_executable(main main.cpp)


add_library(sort INTERFACE)
target_include_directories(sort INTERFACE sort)

target_link_libraries(main PRIVATE sort)




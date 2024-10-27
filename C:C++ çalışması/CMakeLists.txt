cmake_minimum_required(VERSION 3.0)
project(MatplotlibCppExample)

set(CMAKE_CXX_STANDARD 11)

find_package(Python3 COMPONENTS Development NumPy REQUIRED)

include_directories(${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/matplotlib-cpp)

add_executable(example example.cpp)

target_link_libraries(example ${Python3_LIBRARIES})
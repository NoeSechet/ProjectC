cmake_minimum_required(VERSION 3.15)
project(ProjectC)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(ProjectC_calc main.cpp calc.cpp includes/math/Calc.cpp)
add_library(CalcLib STATIC calc.cpp)

include_directories(includes/math)
include_directories(includes/general)

#find_library(TEST_LIBRARY CalcLib lib)
#target_link_libraries(ProjectC LINK_PUBLIC ${TEST_LIBRARY})
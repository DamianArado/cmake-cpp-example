cmake_minimum_required(VERSION 3.0.0)
project(MathLibrary VERSION 0.1.0)

add_library(MathLibrary src/MathLibrary.cpp include/MathLibrary.h)
add_executable(MathClient src/MathClient.cpp)

target_include_directories(MathLibrary PUBLIC include /usr/include/c++/10)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

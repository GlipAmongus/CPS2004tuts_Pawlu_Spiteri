cmake_minimum_required(VERSION 3.5.0)
project(cplusplus VERSION 0.1.0 LANGUAGES C CXX)

# Add the executable and include all necessary source files
add_executable(main main.cpp binops.cpp)

include(CTest)
enable_testing()

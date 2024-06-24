cmake_minimum_required(VERSION 3.10)

project(ADTPP
  DESCRIPTION "A Complete DSA Package package in C++"
  VERSION 0.1
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(Config.cmake)

add_subdirectory(src/Array)

enable_testing()

add_subdirectory(tests/Array)
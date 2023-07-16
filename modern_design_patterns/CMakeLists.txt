cmake_minimum_required(VERSION 3.22)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set (CMAKE_CXX_STANDARD 14)
message ("CXX Standard: ${CMAKE_CXX_STANDARD}")

project(design_patterns_modern_cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_subdirectory(creational)
add_subdirectory(structural)
add_subdirectory(behavioral)
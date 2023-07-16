cmake_minimum_required(VERSION 3.22)

set (CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
message("C++ Standard: ${CMAKE_CXX_STANDARD}")
message("1: ${CMAKE_BINARY_DIR}")
message("2: ${PROJECT_BINARY_DIR}")
project(Function_Passing)
message("${CMAKE_BINARY_DIR}")
message("${PROJECT_BINARY_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


add_executable(func_passing  "${PROJECT_SOURCE_DIR}/func_passing.cpp")
add_executable(func_passing_ptr "${PROJECT_SOURCE_DIR}/func_passing_ptr.cpp")

target_include_directories(func_passing PUBLIC "${PROJECT_SOURCE_DIR}/")
target_include_directories(func_passing_ptr PUBLIC "${PROJECT_SOURCE_DIR}/")

install(TARGETS func_passing RUNTIME DESTINATION bin)
install(TARGETS func_passing_ptr RUNTIME DESTINATION bin)

#target_link_libraries(func_passing )
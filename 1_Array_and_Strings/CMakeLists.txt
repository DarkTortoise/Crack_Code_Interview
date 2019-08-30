CMAKE_MINIMUM_REQUIRED(VERSION 3.13)
project(array_and_strings)

file(GLOB SOURCE_FILES "*.cpp")
add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})
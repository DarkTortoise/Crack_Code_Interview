cmake_minimum_required(VERSION 3.0)
project(Arrays)

file(GLOB SOURCE_FILES "*.h" "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

find_package(Catch2 REQUIRED)
target_link_libraries(${PROJECT_NAME} Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(${PROJECT_NAME})
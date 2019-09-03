CMAKE_MINIMUM_REQUIRED(VERSION 3.13)
project(BinaryTree)

file(GLOB SOURCE_FILES "*.cpp" "*.h")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

find_package(Catch2 REQUIRED)
target_link_libraries(${PROJECT_NAME} Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(${PROJECT_NAME})
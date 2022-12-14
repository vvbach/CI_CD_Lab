cmake_minimum_required(VERSION 3.1)
 
project(test)
find_package(GTest REQUIRED)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(triangle_test test.cpp)
target_link_libraries(triangle_test ${GTEST_LIBRARIES} pthread)


add_test(triangle_test triangle_test)
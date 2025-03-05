cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)


add_subdirectory(external/googletest)

add_executable(my_tests test/test.cpp src/functions.cpp)

target_link_libraries(my_tests gtest gtest_main)


enable_testing()
add_test(NAME MyTests COMMAND my_tests)

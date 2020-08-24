cmake_minimum_required(VERSION 3.0.0)
project(SampleProject)

enable_testing() # must be in root CMakeLists.txt

add_subdirectory("test")

add_executable(SampleProject main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

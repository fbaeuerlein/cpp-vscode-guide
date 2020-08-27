cmake_minimum_required(VERSION 3.0.0)
project(SampleProject)

enable_testing() # must be in root CMakeLists.txt

add_subdirectory("test")
add_subdirectory("include")

add_executable(SampleProject main.cpp include/MyClass2.cpp)
target_link_libraries(SampleProject LINK_PUBLIC my_lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

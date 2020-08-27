
cmake_minimum_required(VERSION 3.0.0)

# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (my_lib MyClass2.cpp)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (my_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
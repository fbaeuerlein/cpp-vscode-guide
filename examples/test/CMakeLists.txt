cmake_minimum_required(VERSION 3.0.0)

add_subdirectory("ext/googletest")

include_directories("ext/googletest/googletest/include")

include(CTest)

macro(simply_add_test TESTNAME FILES)
    add_executable(${TESTNAME} ${FILES})
    target_link_libraries(${TESTNAME} gtest gmock gtest_main)
    add_test(${TESTNAME} ${TESTNAME})
endmacro()

simply_add_test(TestMyClass1 TestMyClass1.cpp )

simply_add_test(TestMyClass2 TestMyClass2.cpp )

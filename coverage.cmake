SET(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage" CACHE STRING "CXX compiler flags")
SET(CMAKE_C_FLAGS "-fprofile-arcs -ftest-coverage" CACHE STRING "C compiler flags")
SET(CMAKE_EXE_LINKER_FLAGS "--coverage" CACHE STRING "linker flags")
    
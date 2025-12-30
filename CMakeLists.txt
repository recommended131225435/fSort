cmake_minimum_required(VERSION 3.12)
project(FileSorter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FileSorter src/fileSorter.cpp)

# Link filesystem library for older Linux/GCC versions if necessary
if(UNIX AND NOT APPLE AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
    target_link_libraries(FileSorter stdc++fs)
endif()
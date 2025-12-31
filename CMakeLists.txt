cmake_minimum_required(VERSION 3.17)
project(fSort VERSION 1.0 LANGUAGES CXX)

#  C++ Standards 
# Require C++17 for std::filesystem
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#  Sources 
# Explicitly listing files 
set(SOURCES
    src/main.cpp
    src/DirectoryManager.cpp
    src/File.cpp
    src/FileSorter.cpp
    src/FileTypeClassifier.cpp
    src/FileWatcher.cpp
    src/Utils.cpp
)

# Executable 
add_executable(fSort ${SOURCES})

#  Paths 
#  CMake for .hpp files
target_include_directories(fSort PRIVATE include)

#  Specific Linking (std::filesystem) 
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
    # Older Linux GCC versions (roughly < 9) require linking stdc++fs explicitly
    target_link_libraries(fSort PRIVATE stdc++fs)
endif()

# Windows (MSVC) and macOS generally handle filesystem automatically in C++17 mode.
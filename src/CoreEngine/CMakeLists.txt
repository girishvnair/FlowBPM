cmake_minimum_required(VERSION 3.10)
project(CoreEngine)

set(CMAKE_CXX_STANDARD 11)

# Source files for CoreEngine module
set(SOURCE_FILES
    ProcessEngine.cpp
    TaskManager.cpp
    StateManager.cpp
)

# Include header files
include_directories(.)

add_library(CoreEngine STATIC ${SOURCE_FILES})

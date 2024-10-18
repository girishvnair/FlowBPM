cmake_minimum_required(VERSION 3.10)
project(SecurityModule)

set(CMAKE_CXX_STANDARD 11)

# Source files for SecurityModule
set(SOURCE_FILES
    SecurityManager.cpp
    User.cpp
    Role.cpp
)

# Include header files
include_directories(.)

add_library(SecurityModule STATIC ${SOURCE_FILES})

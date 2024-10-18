cmake_minimum_required(VERSION 3.10)
project(PluginSystem)

set(CMAKE_CXX_STANDARD 11)

# Source files for PluginSystem module
set(SOURCE_FILES
    PluginManager.cpp
    SamplePlugin.cpp
)

# Include header files
include_directories(.)

add_library(PluginSystem STATIC ${SOURCE_FILES})

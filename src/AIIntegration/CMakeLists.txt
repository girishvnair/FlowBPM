cmake_minimum_required(VERSION 3.10)
project(AIIntegration)

set(CMAKE_CXX_STANDARD 11)

# Source files for AI/ML Integration module
set(SOURCE_FILES
    AIManager.cpp
    ModelLoader.cpp
    PredictionEngine.cpp
)

# Include header files
include_directories(.)

add_library(AIIntegration STATIC ${SOURCE_FILES})

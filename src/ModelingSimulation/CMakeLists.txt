cmake_minimum_required(VERSION 3.10)
project(ModelingSimulation)

set(CMAKE_CXX_STANDARD 11)

# Source files for Workflow Modeling & Simulation module
set(SOURCE_FILES
    WorkflowModeler.cpp
    SimulationEngine.cpp
    Scenario.cpp
)

# Include header files
include_directories(.)

add_library(ModelingSimulation STATIC ${SOURCE_FILES})

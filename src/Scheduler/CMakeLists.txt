cmake_minimum_required(VERSION 3.10)
project(Scheduler)

set(CMAKE_CXX_STANDARD 11)

# Source files for Scheduler & Job Management module
set(SOURCE_FILES
    SchedulerManager.cpp
    Job.cpp
    TaskScheduler.cpp
)

# Include header files
include_directories(.)

add_library(Scheduler STATIC ${SOURCE_FILES})

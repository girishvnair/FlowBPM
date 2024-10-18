cmake_minimum_required(VERSION 3.10)
project(AnalyticsReporting)

set(CMAKE_CXX_STANDARD 11)

# Source files for Analytics & Reporting module
set(SOURCE_FILES
    AnalyticsManager.cpp
    Report.cpp
    Metrics.cpp
)

# Include header files
include_directories(.)

add_library(AnalyticsReporting STATIC ${SOURCE_FILES})

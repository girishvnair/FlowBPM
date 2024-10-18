cmake_minimum_required(VERSION 3.10)
project(MonitoringAuditing)

set(CMAKE_CXX_STANDARD 11)

# Source files for Monitoring & Auditing module
set(SOURCE_FILES
    AuditManager.cpp
    Log.cpp
    MonitoringManager.cpp
)

# Include header files
include_directories(.)

add_library(MonitoringAuditing STATIC ${SOURCE_FILES})

cmake_minimum_required(VERSION 3.10)
project(CaseManagement)

set(CMAKE_CXX_STANDARD 11)

# Source files for CaseManagement module
set(SOURCE_FILES
    CaseManager.cpp
    Case.cpp
    CaseStatus.cpp
)

# Include header files
include_directories(.)

add_library(CaseManagement STATIC ${SOURCE_FILES})

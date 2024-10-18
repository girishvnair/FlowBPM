cmake_minimum_required(VERSION 3.10)
project(DataManagement)

set(CMAKE_CXX_STANDARD 11)

# Source files for DataManagement module
set(SOURCE_FILES
    DataManager.cpp
    DatabaseConnector.cpp
    QueryBuilder.cpp
)

# Include header files
include_directories(.)

add_library(DataManagement STATIC ${SOURCE_FILES})

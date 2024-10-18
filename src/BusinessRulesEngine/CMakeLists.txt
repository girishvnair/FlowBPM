cmake_minimum_required(VERSION 3.10)
project(BusinessRulesEngine)

set(CMAKE_CXX_STANDARD 11)

# Source files for BusinessRulesEngine module
set(SOURCE_FILES
    BusinessRulesEngine.cpp
    Rule.cpp
    RuleEvaluator.cpp
)

# Include header files
include_directories(.)

add_library(BusinessRulesEngine STATIC ${SOURCE_FILES})

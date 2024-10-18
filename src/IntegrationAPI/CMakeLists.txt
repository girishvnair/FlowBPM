cmake_minimum_required(VERSION 3.10)
project(IntegrationAPI)

set(CMAKE_CXX_STANDARD 11)

# Source files for API Gateway module
set(SOURCE_FILES
    APIGateway.cpp
    RequestHandler.cpp
    Response.cpp
)

# Include header files
include_directories(.)

add_library(IntegrationAPI STATIC ${SOURCE_FILES})

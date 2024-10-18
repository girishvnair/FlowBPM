cmake_minimum_required(VERSION 3.10)
project(DocumentManagement)

set(CMAKE_CXX_STANDARD 11)

# Source files for Document Management module
set(SOURCE_FILES
    DocumentManager.cpp
    Document.cpp
    DocumentVersion.cpp
)

# Include header files
include_directories(.)

add_library(DocumentManagement STATIC ${SOURCE_FILES})

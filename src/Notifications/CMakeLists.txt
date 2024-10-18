cmake_minimum_required(VERSION 3.10)
project(Notifications)

set(CMAKE_CXX_STANDARD 11)

# Source files for Notification module
set(SOURCE_FILES
    NotificationManager.cpp
    EmailNotification.cpp
    SMSNotification.cpp
)

# Include header files
include_directories(.)

add_library(Notifications STATIC ${SOURCE_FILES})

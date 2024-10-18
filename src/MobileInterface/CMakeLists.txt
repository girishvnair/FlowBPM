cmake_minimum_required(VERSION 3.10)
project(MobileInterface)

# Since it's a mobile-friendly web UI, no need for C++ compilation
add_custom_target(copy_mobile_ui ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/src/MobileInterface/MobileUI
        ${CMAKE_BINARY_DIR}/MobileUI
)

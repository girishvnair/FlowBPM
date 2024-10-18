cmake_minimum_required(VERSION 3.10)
project(UserInterface)

# Since it's a web-based UI, we don't need to compile any C++ code here.
add_custom_target(copy_assets ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/src/UserInterface/WebUI
        ${CMAKE_BINARY_DIR}/WebUI
)

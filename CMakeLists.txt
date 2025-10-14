cmake_minimum_required(VERSION 3.16)
project(FlowBPM LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Release)

# Output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include all module directories
add_subdirectory(src/CoreEngine)
add_subdirectory(src/BusinessRulesEngine)
add_subdirectory(src/AnalyticsReporting)
add_subdirectory(src/AIIntegration)
add_subdirectory(src/CaseManagement)
add_subdirectory(src/DataManagement)
add_subdirectory(src/DocumentManagement)
add_subdirectory(src/IntegrationAPI)
add_subdirectory(src/MonitoringAuditing)
add_subdirectory(src/Notifications)
add_subdirectory(src/PluginSystem)
add_subdirectory(src/Scheduler)
add_subdirectory(src/SecurityModule)

# Example: Build the main executable that links all module libraries
add_executable(FlowBPMApp src/main.cpp)

# Collect all libraries built by the submodules automatically
# (Each module CMakeLists should define add_library(module_name ...))
target_link_libraries(FlowBPMApp
    CoreEngine
    BusinessRulesEngine
    AnalyticsReporting
    AIIntegration
    CaseManagement
    DataManagement
    DocumentManagement
    IntegrationAPI
    MonitoringAuditing
    Notifications
    PluginSystem
    Scheduler
    SecurityModule
)

target_include_directories(FlowBPMApp PRIVATE ${CMAKE_SOURCE_DIR}/src)


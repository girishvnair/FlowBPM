#include "ProcessEngine.h"
#include <iostream>

ProcessEngine::ProcessEngine() {}

void ProcessEngine::defineProcess(const std::string &processName) {
    definedProcesses.push_back(processName);
    std::cout << "Process defined: " << processName << std::endl;
}

void ProcessEngine::startProcess(const std::string &processName) {
    std::cout << "Starting process: " << processName << std::endl;
    stateManager.initializeState(processName);
}

void ProcessEngine::completeTask(const std::string &taskName) {
    std::cout << "Completing task: " << taskName << std::endl;
    taskManager.completeTask(taskName);
    stateManager.updateState(taskName);
}

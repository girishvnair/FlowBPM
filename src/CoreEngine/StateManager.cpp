#include "StateManager.h"
#include <iostream>

StateManager::StateManager() {}

void StateManager::initializeState(const std::string &processName) {
    std::cout << "Initializing state for process: " << processName << std::endl;
}

void StateManager::updateState(const std::string &taskName) {
    std::cout << "Updating state for task: " << taskName << std::endl;
}

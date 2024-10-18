#include "TaskManager.h"
#include <iostream>

TaskManager::TaskManager() {}

void TaskManager::assignTask(const std::string &taskName) {
    std::cout << "Task assigned: " << taskName << std::endl;
}

void TaskManager::completeTask(const std::string &taskName) {
    std::cout << "Task completed: " << taskName << std::endl;
}

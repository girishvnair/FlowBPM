#include "Scenario.h"

Scenario::Scenario(const std::string &workflowName) : workflowName(workflowName) {}

std::string Scenario::getWorkflowName() const {
    return workflowName;
}

void Scenario::addTask(const std::string &taskName) {
    tasks.push_back(taskName);
}

const std::vector<std::string>& Scenario::getTasks() const {
    return tasks;
}

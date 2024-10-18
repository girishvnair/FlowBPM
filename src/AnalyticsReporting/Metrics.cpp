#include "Metrics.h"

Metrics::Metrics(const std::string &workflowName, int totalTasks, int completedTasks)
    : workflowName(workflowName), totalTasks(totalTasks), completedTasks(completedTasks) {}

std::string Metrics::getWorkflowName() const {
    return workflowName;
}

int Metrics::getTotalTasks() const {
    return totalTasks;
}

int Metrics::getCompletedTasks() const {
    return completedTasks;
}

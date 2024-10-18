#include "WorkflowModeler.h"
#include <iostream>

WorkflowModeler::WorkflowModeler() {}

void WorkflowModeler::defineWorkflow(const std::string &workflowName) {
    Scenario scenario(workflowName);
    scenarios.push_back(scenario);
    std::cout << "Workflow defined: " << workflowName << std::endl;
}

void WorkflowModeler::addTask(const std::string &workflowName, const std::string &taskName) {
    for (auto &scenario : scenarios) {
        if (scenario.getWorkflowName() == workflowName) {
            scenario.addTask(taskName);
            std::cout << "Task '" << taskName << "' added to workflow '" << workflowName << "'" << std::endl;
        }
    }
}

Scenario WorkflowModeler::createScenario(const std::string &workflowName) {
    for (const auto &scenario : scenarios) {
        if (scenario.getWorkflowName() == workflowName) {
            std::cout << "Scenario created for workflow: " << workflowName << std::endl;
            return scenario;
        }
    }
    return Scenario("");  // Return an empty scenario if workflow not found
}

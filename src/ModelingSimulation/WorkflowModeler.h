#ifndef WORKFLOW_MODELER_H
#define WORKFLOW_MODELER_H

#include "Scenario.h"
#include <string>
#include <vector>

class WorkflowModeler {
public:
    WorkflowModeler();
    void defineWorkflow(const std::string &workflowName);
    void addTask(const std::string &workflowName, const std::string &taskName);
    Scenario createScenario(const std::string &workflowName);

private:
    std::vector<Scenario> scenarios;
};

#endif // WORKFLOW_MODELER_H

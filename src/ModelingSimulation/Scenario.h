#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>
#include <vector>

class Scenario {
public:
    Scenario(const std::string &workflowName);
    std::string getWorkflowName() const;
    void addTask(const std::string &taskName);
    const std::vector<std::string>& getTasks() const;

private:
    std::string workflowName;
    std::vector<std::string> tasks;
};

#endif // SCENARIO_H

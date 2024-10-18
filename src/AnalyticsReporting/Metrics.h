#ifndef METRICS_H
#define METRICS_H

#include <string>

class Metrics {
public:
    Metrics(const std::string &workflowName, int totalTasks, int completedTasks);
    std::string getWorkflowName() const;
    int getTotalTasks() const;
    int getCompletedTasks() const;

private:
    std::string workflowName;
    int totalTasks;
    int completedTasks;
};

#endif // METRICS_H

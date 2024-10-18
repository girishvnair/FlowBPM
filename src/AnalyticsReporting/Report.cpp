#include "Report.h"
#include <iostream>

Report::Report(const std::string &reportName, const std::vector<Metrics> &metricsList)
    : reportName(reportName), metricsList(metricsList) {}

void Report::displayReport() const {
    std::cout << "Report: " << reportName << std::endl;
    for (const auto &metrics : metricsList) {
        std::cout << "Workflow: " << metrics.getWorkflowName() 
                  << ", Total Tasks: " << metrics.getTotalTasks() 
                  << ", Completed Tasks: " << metrics.getCompletedTasks() 
                  << std::endl;
    }
}

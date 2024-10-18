#include "AnalyticsManager.h"
#include <iostream>

AnalyticsManager::AnalyticsManager() {}

void AnalyticsManager::collectMetrics(const std::string &workflowName) {
    // Simulating the collection of metrics for a workflow
    Metrics metrics(workflowName, 10, 5);  // Simulate 10 tasks, 5 completed
    metricsList.push_back(metrics);
    std::cout << "Collected metrics for workflow: " << workflowName << std::endl;
}

void AnalyticsManager::generateReport(const std::string &reportName) {
    Report report(reportName, metricsList);
    reports.push_back(report);
    std::cout << "Generated report: " << reportName << std::endl;
}

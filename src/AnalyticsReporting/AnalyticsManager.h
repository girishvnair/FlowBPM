#ifndef ANALYTICS_MANAGER_H
#define ANALYTICS_MANAGER_H

#include "Metrics.h"
#include "Report.h"
#include <string>
#include <vector>

class AnalyticsManager {
public:
    AnalyticsManager();
    void collectMetrics(const std::string &workflowName);
    void generateReport(const std::string &reportName);

private:
    std::vector<Metrics> metricsList;
    std::vector<Report> reports;
};

#endif // ANALYTICS_MANAGER_H

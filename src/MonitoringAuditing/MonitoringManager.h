#ifndef MONITORING_MANAGER_H
#define MONITORING_MANAGER_H

#include <string>

class MonitoringManager {
public:
    MonitoringManager();
    void monitorPerformance(const std::string &metric, double value);
    void displayPerformanceMetrics() const;

private:
    std::string currentMetric;
    double currentValue;
};

#endif // MONITORING_MANAGER_H

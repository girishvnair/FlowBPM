#include "MonitoringManager.h"
#include <iostream>

MonitoringManager::MonitoringManager() {}

void MonitoringManager::monitorPerformance(const std::string &metric, double value) {
    currentMetric = metric;
    currentValue = value;
    std::cout << "Monitoring " << metric << ": " << value << std::endl;
}

void MonitoringManager::displayPerformanceMetrics() const {
    std::cout << "Current Metric: " << currentMetric << " = " << currentValue << std::endl;
}

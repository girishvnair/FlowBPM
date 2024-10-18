#ifndef REPORT_H
#define REPORT_H

#include "Metrics.h"
#include <string>
#include <vector>

class Report {
public:
    Report(const std::string &reportName, const std::vector<Metrics> &metricsList);
    void displayReport() const;

private:
    std::string reportName;
    std::vector<Metrics> metricsList;
};

#endif // REPORT_H

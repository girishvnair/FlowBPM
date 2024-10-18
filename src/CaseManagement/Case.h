#ifndef CASE_H
#define CASE_H

#include <string>
#include <vector>
#include "CaseStatus.h"

class Case {
public:
    Case(const std::string &name, const std::string &description);
    std::string getName() const;
    std::string getDescription() const;
    void addTask(const std::string &taskName);
    void setStatus(CaseStatus status);
    CaseStatus getStatus() const;

private:
    std::string name;
    std::string description;
    std::vector<std::string> tasks;
    CaseStatus status;
};

#endif // CASE_H

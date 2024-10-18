#ifndef CASE_MANAGER_H
#define CASE_MANAGER_H

#include <string>
#include <vector>
#include "Case.h"

class CaseManager {
public:
    CaseManager();
    void createCase(const std::string &caseName, const std::string &description);
    void assignTaskToCase(const std::string &caseName, const std::string &taskName);
    void updateCaseStatus(const std::string &caseName, CaseStatus status);
    void closeCase(const std::string &caseName);
    std::vector<Case> getOpenCases() const;

private:
    std::vector<Case> cases;
};

#endif // CASE_MANAGER_H

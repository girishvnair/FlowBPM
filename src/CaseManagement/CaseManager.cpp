#include "CaseManager.h"
#include <iostream>

CaseManager::CaseManager() {}

void CaseManager::createCase(const std::string &caseName, const std::string &description) {
    cases.emplace_back(caseName, description);
    std::cout << "Case created: " << caseName << std::endl;
}

void CaseManager::assignTaskToCase(const std::string &caseName, const std::string &taskName) {
    for (auto &caseItem : cases) {
        if (caseItem.getName() == caseName) {
            caseItem.addTask(taskName);
            std::cout << "Task '" << taskName << "' assigned to case '" << caseName << "'" << std::endl;
        }
    }
}

void CaseManager::updateCaseStatus(const std::string &caseName, CaseStatus status) {
    for (auto &caseItem : cases) {
        if (caseItem.getName() == caseName) {
            caseItem.setStatus(status);
            std::cout << "Case status updated: " << caseName << std::endl;
        }
    }
}

void CaseManager::closeCase(const std::string &caseName) {
    for (auto &caseItem : cases) {
        if (caseItem.getName() == caseName) {
            caseItem.setStatus(CaseStatus::Closed);
            std::cout << "Case closed: " << caseName << std::endl;
        }
    }
}

std::vector<Case> CaseManager::getOpenCases() const {
    std::vector<Case> openCases;
    for (const auto &caseItem : cases) {
        if (caseItem.getStatus() == CaseStatus::Open) {
            openCases.push_back(caseItem);
        }
    }
    return openCases;
}

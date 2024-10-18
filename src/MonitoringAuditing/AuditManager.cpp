#include "AuditManager.h"
#include <iostream>

AuditManager::AuditManager() {}

void AuditManager::logEvent(const std::string &eventType, const std::string &description) {
    Log log(eventType, description);
    auditLogs.push_back(log);
    std::cout << "Logged event: " << eventType << " - " << description << std::endl;
}

void AuditManager::printAuditLog() const {
    std::cout << "Audit Log:" << std::endl;
    for (const auto &log : auditLogs) {
        std::cout << log.getEventType() << ": " << log.getDescription() << std::endl;
    }
}

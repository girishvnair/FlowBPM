#ifndef AUDIT_MANAGER_H
#define AUDIT_MANAGER_H

#include "Log.h"
#include <string>
#include <vector>

class AuditManager {
public:
    AuditManager();
    void logEvent(const std::string &eventType, const std::string &description);
    void printAuditLog() const;

private:
    std::vector<Log> auditLogs;
};

#endif // AUDIT_MANAGER_H

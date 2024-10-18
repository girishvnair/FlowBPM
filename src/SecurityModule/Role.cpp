#include "Role.h"

Role::Role(const std::string &roleName) : roleName(roleName) {}

std::string Role::getRoleName() const {
    return roleName;
}

void Role::addPermission(const std::string &action) {
    permissions.push_back(action);
}

bool Role::canPerformAction(const std::string &action) const {
    for (const auto &permission : permissions) {
        if (permission == action) {
            return true;
        }
    }
    return false;
}

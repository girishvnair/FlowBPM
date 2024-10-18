#ifndef ROLE_H
#define ROLE_H

#include <string>
#include <vector>

class Role {
public:
    Role(const std::string &roleName);
    std::string getRoleName() const;
    void addPermission(const std::string &action);
    bool canPerformAction(const std::string &action) const;

private:
    std::string roleName;
    std::vector<std::string> permissions;
};

#endif // ROLE_H

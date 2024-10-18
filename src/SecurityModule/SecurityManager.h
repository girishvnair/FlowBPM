#ifndef SECURITY_MANAGER_H
#define SECURITY_MANAGER_H

#include "User.h"
#include "Role.h"
#include <string>
#include <vector>

class SecurityManager {
public:
    SecurityManager();
    bool authenticate(const std::string &username, const std::string &password);
    bool authorize(const std::string &username, const std::string &action);
    void addUser(const User &user);
    void addRole(const Role &role);

private:
    std::vector<User> users;
    std::vector<Role> roles;
};

#endif // SECURITY_MANAGER_H

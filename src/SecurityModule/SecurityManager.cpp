#include "SecurityManager.h"
#include <iostream>

SecurityManager::SecurityManager() {}

bool SecurityManager::authenticate(const std::string &username, const std::string &password) {
    for (const auto &user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            std::cout << "User authenticated: " << username << std::endl;
            return true;
        }
    }
    std::cout << "Authentication failed for user: " << username << std::endl;
    return false;
}

bool SecurityManager::authorize(const std::string &username, const std::string &action) {
    for (const auto &user : users) {
        if (user.getUsername() == username) {
            for (const auto &role : roles) {
                if (role.getRoleName() == user.getRole() && role.canPerformAction(action)) {
                    std::cout << "Authorization successful for action: " << action << std::endl;
                    return true;
                }
            }
        }
    }
    std::cout << "Authorization failed for action: " << action << std::endl;
    return false;
}

void SecurityManager::addUser(const User &user) {
    users.push_back(user);
}

void SecurityManager::addRole(const Role &role) {
    roles.push_back(role);
}

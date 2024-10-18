#include "User.h"

User::User(const std::string &username, const std::string &password, const std::string &role)
    : username(username), password(password), role(role) {}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

std::string User::getRole() const {
    return role;
}

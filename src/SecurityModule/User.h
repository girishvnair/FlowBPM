#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string &username, const std::string &password, const std::string &role);
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getRole() const;

private:
    std::string username;
    std::string password;
    std::string role;
};

#endif // USER_H

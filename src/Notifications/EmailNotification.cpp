#include "EmailNotification.h"
#include <iostream>

EmailNotification::EmailNotification() {}

void EmailNotification::send(const std::string &recipient, const std::string &subject, const std::string &body) {
    // Simulating sending an email
    std::cout << "Sending email to: " << recipient << std::endl;
    std::cout << "Subject: " << subject << std::endl;
    std::cout << "Body: " << body << std::endl;
}

#include "SMSNotification.h"
#include <iostream>

SMSNotification::SMSNotification() {}

void SMSNotification::send(const std::string &recipient, const std::string &message) {
    // Simulating sending an SMS
    std::cout << "Sending SMS to: " << recipient << std::endl;
    std::cout << "Message: " << message << std::endl;
}

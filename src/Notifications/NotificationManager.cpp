#include "NotificationManager.h"
#include <iostream>

NotificationManager::NotificationManager() {}

void NotificationManager::sendEmailNotification(const std::string &recipient, const std::string &subject, const std::string &body) {
    emailNotification.send(recipient, subject, body);
}

void NotificationManager::sendSMSNotification(const std::string &recipient, const std::string &message) {
    smsNotification.send(recipient, message);
}

#ifndef NOTIFICATION_MANAGER_H
#define NOTIFICATION_MANAGER_H

#include "EmailNotification.h"
#include "SMSNotification.h"
#include <string>

class NotificationManager {
public:
    NotificationManager();
    void sendEmailNotification(const std::string &recipient, const std::string &subject, const std::string &body);
    void sendSMSNotification(const std::string &recipient, const std::string &message);

private:
    EmailNotification emailNotification;
    SMSNotification smsNotification;
};

#endif // NOTIFICATION_MANAGER_H

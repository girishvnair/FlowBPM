#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H

#include <string>

class SMSNotification {
public:
    SMSNotification();
    void send(const std::string &recipient, const std::string &message);
};

#endif // SMS_NOTIFICATION_H

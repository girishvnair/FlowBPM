#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include <string>

class EmailNotification {
public:
    EmailNotification();
    void send(const std::string &recipient, const std::string &subject, const std::string &body);
};

#endif // EMAIL_NOTIFICATION_H

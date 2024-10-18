#ifndef LOG_H
#define LOG_H

#include <string>

class Log {
public:
    Log(const std::string &eventType, const std::string &description);
    std::string getEventType() const;
    std::string getDescription() const;

private:
    std::string eventType;
    std::string description;
};

#endif // LOG_H

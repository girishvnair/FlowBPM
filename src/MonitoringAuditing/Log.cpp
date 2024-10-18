#include "Log.h"

Log::Log(const std::string &eventType, const std::string &description)
    : eventType(eventType), description(description) {}

std::string Log::getEventType() const {
    return eventType;
}

std::string Log::getDescription() const {
    return description;
}

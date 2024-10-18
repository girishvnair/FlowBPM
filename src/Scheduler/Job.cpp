#include "Job.h"
#include <iostream>

Job::Job(const std::string &name, int intervalInSeconds)
    : name(name), intervalInSeconds(intervalInSeconds) {}

std::string Job::getName() const {
    return name;
}

int Job::getInterval() const {
    return intervalInSeconds;
}

void Job::execute() const {
    std::cout << "Executing job: " << name << std::endl;
    // Simulate a long-running job or periodic task
}

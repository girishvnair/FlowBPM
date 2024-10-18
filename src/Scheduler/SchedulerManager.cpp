#include "SchedulerManager.h"
#include <iostream>

SchedulerManager::SchedulerManager() {}

void SchedulerManager::scheduleJob(const Job &job) {
    scheduledJobs.push_back(job);
    std::cout << "Job scheduled: " << job.getName() << std::endl;
}

void SchedulerManager::runScheduledJobs() {
    for (auto &job : scheduledJobs) {
        std::cout << "Running job: " << job.getName() << std::endl;
        job.execute();
    }
}

#ifndef SCHEDULER_MANAGER_H
#define SCHEDULER_MANAGER_H

#include "Job.h"
#include <vector>

class SchedulerManager {
public:
    SchedulerManager();
    void scheduleJob(const Job &job);
    void runScheduledJobs();

private:
    std::vector<Job> scheduledJobs;
};

#endif // SCHEDULER_MANAGER_H

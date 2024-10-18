#ifndef TASK_SCHEDULER_H
#define TASK_SCHEDULER_H

#include "Job.h"
#include <vector>

class TaskScheduler {
public:
    TaskScheduler();
    void scheduleTask(const Job &job);
    void runTasks();

private:
    std::vector<Job> tasks;
};

#endif // TASK_SCHEDULER_H

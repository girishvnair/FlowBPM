#include "TaskScheduler.h"
#include <iostream>
#include <chrono>
#include <thread>

TaskScheduler::TaskScheduler() {}

void TaskScheduler::scheduleTask(const Job &job) {
    tasks.push_back(job);
    std::cout << "Task scheduled: " << job.getName() << std::endl;
}

void TaskScheduler::runTasks() {
    for (auto &task : tasks) {
        std::cout << "Running task: " << task.getName() << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(task.getInterval()));
        task.execute();
    }
}

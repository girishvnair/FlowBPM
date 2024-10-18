#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <string>

class TaskManager {
public:
    TaskManager();
    void assignTask(const std::string &taskName);
    void completeTask(const std::string &taskName);
};

#endif // TASK_MANAGER_H

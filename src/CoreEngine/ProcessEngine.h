#ifndef PROCESS_ENGINE_H
#define PROCESS_ENGINE_H

#include <string>
#include <vector>
#include "TaskManager.h"
#include "StateManager.h"

class ProcessEngine {
public:
    ProcessEngine();
    void defineProcess(const std::string &processName);
    void startProcess(const std::string &processName);
    void completeTask(const std::string &taskName);

private:
    TaskManager taskManager;
    StateManager stateManager;
    std::vector<std::string> definedProcesses;
};

#endif // PROCESS_ENGINE_H

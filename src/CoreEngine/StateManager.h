#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <string>

class StateManager {
public:
    StateManager();
    void initializeState(const std::string &processName);
    void updateState(const std::string &taskName);
};

#endif // STATE_MANAGER_H

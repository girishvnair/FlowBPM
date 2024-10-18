#ifndef SIMULATION_ENGINE_H
#define SIMULATION_ENGINE_H

#include "Scenario.h"
#include <string>

class SimulationEngine {
public:
    SimulationEngine();
    void simulateScenario(const Scenario &scenario);
};

#endif // SIMULATION_ENGINE_H

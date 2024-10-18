#include "SimulationEngine.h"
#include <iostream>

SimulationEngine::SimulationEngine() {}

void SimulationEngine::simulateScenario(const Scenario &scenario) {
    std::cout << "Simulating workflow: " << scenario.getWorkflowName() << std::endl;
    for (const auto &task : scenario.getTasks()) {
        std::cout << "Simulating task: " << task << std::endl;
        // Simulate time delay or other behavior for task
    }
    std::cout << "Simulation complete for workflow: " << scenario.getWorkflowName() << std::endl;
}

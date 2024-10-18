#include "PluginInterface.h"
#include <iostream>

class SamplePlugin : public PluginInterface {
public:
    std::string getName() const override {
        return "SamplePlugin";
    }

    void execute() override {
        std::cout << "Executing Sample Plugin!" << std::endl;
    }
};

// Function to create a sample plugin
extern "C" PluginInterface* createPlugin() {
    return new SamplePlugin();
}

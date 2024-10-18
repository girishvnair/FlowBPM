#ifndef PLUGIN_MANAGER_H
#define PLUGIN_MANAGER_H

#include "PluginInterface.h"
#include <string>
#include <vector>

class PluginManager {
public:
    PluginManager();
    void loadPlugin(PluginInterface* plugin);
    void executePlugin(const std::string &pluginName);

private:
    std::vector<PluginInterface*> plugins;
};

#endif // PLUGIN_MANAGER_H

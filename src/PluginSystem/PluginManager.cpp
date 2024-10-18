#include "PluginManager.h"
#include <iostream>

PluginManager::PluginManager() {}

void PluginManager::loadPlugin(PluginInterface* plugin) {
    plugins.push_back(plugin);
    std::cout << "Plugin loaded: " << plugin->getName() << std::endl;
}

void PluginManager::executePlugin(const std::string &pluginName) {
    for (auto *plugin : plugins) {
        if (plugin->getName() == pluginName) {
            plugin->execute();
            return;
        }
    }
    std::cout << "Plugin not found: " << pluginName << std::endl;
}

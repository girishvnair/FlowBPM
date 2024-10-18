#ifndef AI_MANAGER_H
#define AI_MANAGER_H

#include "ModelLoader.h"
#include "PredictionEngine.h"
#include <string>

class AIManager {
public:
    AIManager();
    void loadModel(const std::string &modelPath);
    double runPrediction(const std::string &data);

private:
    ModelLoader modelLoader;
    PredictionEngine predictionEngine;
};

#endif // AI_MANAGER_H

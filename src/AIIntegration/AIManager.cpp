#include "AIManager.h"
#include <iostream>

AIManager::AIManager() {}

void AIManager::loadModel(const std::string &modelPath) {
    modelLoader.loadModelFromFile(modelPath);
    std::cout << "Model loaded from: " << modelPath << std::endl;
}

double AIManager::runPrediction(const std::string &data) {
    double prediction = predictionEngine.predict(data);
    std::cout << "Prediction result: " << prediction << std::endl;
    return prediction;
}

#ifndef PREDICTION_ENGINE_H
#define PREDICTION_ENGINE_H

#include <string>

class PredictionEngine {
public:
    PredictionEngine();
    double predict(const std::string &data);

private:
    std::string model;
};

#endif // PREDICTION_ENGINE_H

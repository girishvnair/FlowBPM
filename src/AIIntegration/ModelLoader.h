#ifndef MODEL_LOADER_H
#define MODEL_LOADER_H

#include <string>

class ModelLoader {
public:
    ModelLoader();
    void loadModelFromFile(const std::string &filePath);

private:
    std::string modelPath;
};

#endif // MODEL_LOADER_H

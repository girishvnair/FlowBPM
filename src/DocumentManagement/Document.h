#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "DocumentVersion.h"
#include <string>
#include <vector>

class Document {
public:
    Document(const std::string &name, const std::string &content);
    std::string getName() const;
    void addVersion(const DocumentVersion &version);
    const std::vector<DocumentVersion>& getVersions() const;

private:
    std::string name;
    std::string content;
    std::vector<DocumentVersion> versions;
};

#endif // DOCUMENT_H

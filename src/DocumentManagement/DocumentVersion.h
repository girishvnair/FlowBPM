#ifndef DOCUMENT_VERSION_H
#define DOCUMENT_VERSION_H

#include <string>

class DocumentVersion {
public:
    DocumentVersion(int versionNumber, const std::string &content);
    int getVersionNumber() const;
    std::string getContent() const;

private:
    int versionNumber;
    std::string content;
};

#endif // DOCUMENT_VERSION_H

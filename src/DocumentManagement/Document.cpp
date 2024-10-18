#include "Document.h"

Document::Document(const std::string &name, const std::string &content)
    : name(name), content(content) {}

std::string Document::getName() const {
    return name;
}

void Document::addVersion(const DocumentVersion &version) {
    versions.push_back(version);
}

const std::vector<DocumentVersion>& Document::getVersions() const {
    return versions;
}

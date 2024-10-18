#include "DocumentVersion.h"

DocumentVersion::DocumentVersion(int versionNumber, const std::string &content)
    : versionNumber(versionNumber), content(content) {}

int DocumentVersion::getVersionNumber() const {
    return versionNumber;
}

std::string DocumentVersion::getContent() const {
    return content;
}

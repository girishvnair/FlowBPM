#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include "Document.h"
#include <string>
#include <vector>

class DocumentManager {
public:
    DocumentManager();
    void uploadDocument(const Document &document);
    Document retrieveDocument(const std::string &docName);
    void deleteDocument(const std::string &docName);
    void listDocuments() const;

private:
    std::vector<Document> documents;
};

#endif // DOCUMENT_MANAGER_H

#include "DocumentManager.h"
#include <iostream>

DocumentManager::DocumentManager() {}

void DocumentManager::uploadDocument(const Document &document) {
    documents.push_back(document);
    std::cout << "Document uploaded: " << document.getName() << std::endl;
}

Document DocumentManager::retrieveDocument(const std::string &docName) {
    for (const auto &doc : documents) {
        if (doc.getName() == docName) {
            std::cout << "Retrieving document: " << docName << std::endl;
            return doc;
        }
    }
    std::cerr << "Document not found: " << docName << std::endl;
    return Document("", "");  // Return an empty document if not found
}

void DocumentManager::deleteDocument(const std::string &docName) {
    for (auto it = documents.begin(); it != documents.end(); ++it) {
        if (it->getName() == docName) {
            std::cout << "Deleting document: " << docName << std::endl;
            documents.erase(it);
            return;
        }
    }
    std::cerr << "Document not found: " << docName << std::endl;
}

void DocumentManager::listDocuments() const {
    std::cout << "Listing all documents:" << std::endl;
    for (const auto &doc : documents) {
        std::cout << doc.getName() << std::endl;
    }
}

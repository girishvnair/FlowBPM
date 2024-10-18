#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H

#include <string>
#include "DatabaseConnector.h"
#include "QueryBuilder.h"

class DataManager {
public:
    DataManager();
    void storeData(const std::string &tableName, const std::string &data);
    std::string retrieveData(const std::string &tableName, const std::string &query);

private:
    DatabaseConnector dbConnector;
    QueryBuilder queryBuilder;
};

#endif // DATA_MANAGER_H

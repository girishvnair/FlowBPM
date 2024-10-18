#include "DataManager.h"
#include <iostream>

DataManager::DataManager() {}

void DataManager::storeData(const std::string &tableName, const std::string &data) {
    std::string insertQuery = queryBuilder.buildInsertQuery(tableName, data);
    dbConnector.execute(insertQuery);
    std::cout << "Data stored in table: " << tableName << std::endl;
}

std::string DataManager::retrieveData(const std::string &tableName, const std::string &query) {
    std::string selectQuery = queryBuilder.buildSelectQuery(tableName, query);
    return dbConnector.fetch(selectQuery);
}

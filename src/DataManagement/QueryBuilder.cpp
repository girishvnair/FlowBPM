#include "QueryBuilder.h"

QueryBuilder::QueryBuilder() {}

std::string QueryBuilder::buildInsertQuery(const std::string &tableName, const std::string &data) {
    return "INSERT INTO " + tableName + " VALUES (" + data + ")";
}

std::string QueryBuilder::buildSelectQuery(const std::string &tableName, const std::string &conditions) {
    return "SELECT * FROM " + tableName + " WHERE " + conditions;
}

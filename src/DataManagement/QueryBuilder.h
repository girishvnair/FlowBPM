#ifndef QUERY_BUILDER_H
#define QUERY_BUILDER_H

#include <string>

class QueryBuilder {
public:
    QueryBuilder();
    std::string buildInsertQuery(const std::string &tableName, const std::string &data);
    std::string buildSelectQuery(const std::string &tableName, const std::string &conditions);
};

#endif // QUERY_BUILDER_H

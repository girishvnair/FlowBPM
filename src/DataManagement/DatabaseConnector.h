#ifndef DATABASE_CONNECTOR_H
#define DATABASE_CONNECTOR_H

#include <string>

class DatabaseConnector {
public:
    DatabaseConnector();
    void connect();
    void execute(const std::string &query);
    std::string fetch(const std::string &query);

private:
    std::string dbConnection;
};

#endif // DATABASE_CONNECTOR_H

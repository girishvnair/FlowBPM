#include "APIGateway.h"
#include <iostream>

APIGateway::APIGateway() {}

void APIGateway::routeRequest(const std::string &endpoint, const std::string &method, const std::string &body) {
    std::cout << "Routing request: " << method << " " << endpoint << std::endl;
    requestHandler.handleRequest(endpoint, method, body);
}

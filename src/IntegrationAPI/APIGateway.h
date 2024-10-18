#ifndef API_GATEWAY_H
#define API_GATEWAY_H

#include "RequestHandler.h"
#include <string>

class APIGateway {
public:
    APIGateway();
    void routeRequest(const std::string &endpoint, const std::string &method, const std::string &body);

private:
    RequestHandler requestHandler;
};

#endif // API_GATEWAY_H

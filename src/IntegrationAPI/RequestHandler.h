#ifndef REQUEST_HANDLER_H
#define REQUEST_HANDLER_H

#include <string>
#include "Response.h"

class RequestHandler {
public:
    RequestHandler();
    Response handleRequest(const std::string &endpoint, const std::string &method, const std::string &body);
};

#endif // REQUEST_HANDLER_H

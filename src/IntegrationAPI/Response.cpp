#include "Response.h"

Response::Response(int statusCode, const std::string &body) : statusCode(statusCode), body(body) {}

int Response::getStatusCode() const {
    return statusCode;
}

std::string Response::getBody() const {
    return body;
}

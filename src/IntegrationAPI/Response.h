#ifndef RESPONSE_H
#define RESPONSE_H

#include <string>

class Response {
public:
    Response(int statusCode, const std::string &body);
    int getStatusCode() const;
    std::string getBody() const;

private:
    int statusCode;
    std::string body;
};

#endif // RESPONSE_H

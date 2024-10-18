#include "RequestHandler.h"
#include <iostream>

RequestHandler::RequestHandler() {}

Response RequestHandler::handleRequest(const std::string &endpoint, const std::string &method, const std::string &body) {
    std::cout << "Handling request for endpoint: " << endpoint << std::endl;
    
    if (endpoint == "/workflow/create" && method == "POST") {
        // Simulate workflow creation
        std::cout << "Creating workflow with data: " << body << std::endl;
        return Response(200, "Workflow created successfully");
    }
    
    return Response(404, "Endpoint not found");
}

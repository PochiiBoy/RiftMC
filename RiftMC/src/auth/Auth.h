#pragma once
#include <string>

class Auth {
public:
    Auth(const std::string& username);
    bool authenticate();
private:
    std::string username;
};

#include "Auth.h"
#include <iostream>
#include <thread>
#include <chrono>

Auth::Auth(const std::string& username) : username(username) {}

bool Auth::authenticate() {
    std::cout << "Authenticating user: " << username << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    // Simulate simple check
    if (username.empty()) return false;
    std::cout << "Authenticated: " << username << "!" << std::endl;
    return true;
}

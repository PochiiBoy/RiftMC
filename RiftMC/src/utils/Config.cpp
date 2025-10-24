#include "Config.h"
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp> // if you don’t have this, swap for dummy parsing
using json = nlohmann::json;

Config::Config(const std::string& path) : path(path) {}

bool Config::load() {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cout << "Could not open " << path << std::endl;
        return false;
    }

    json j;
    file >> j;
    data["username"] = j.value("username", "");
    data["minecraft_version"] = j.value("minecraft_version", "1.21.1");
    return true;
}

std::string Config::get(const std::string& key) const {
    if (data.find(key) != data.end()) return data.at(key);
    return "";
}

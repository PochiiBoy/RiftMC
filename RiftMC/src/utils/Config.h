#pragma once
#include <string>
#include <unordered_map>

class Config {
public:
    Config(const std::string& path);
    bool load();
    std::string get(const std::string& key) const;
private:
    std::string path;
    std::unordered_map<std::string, std::string> data;
};

#pragma once
#include <string>

class Launcher {
public:
    Launcher(const std::string& version);
    void launch();
private:
    std::string version;
};

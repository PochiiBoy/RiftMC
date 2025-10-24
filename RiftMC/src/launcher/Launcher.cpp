#include "Launcher.h"
#include <iostream>
#include <thread>
#include <chrono>

Launcher::Launcher(const std::string& version) : version(version) {}

void Launcher::launch() {
    std::cout << "Preparing to launch Minecraft version " << version << "..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
    std::cout << "Launching Minecraft..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
    std::cout << "Minecraft launched successfully." << std::endl;
}

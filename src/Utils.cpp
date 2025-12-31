#include "Utils.hpp"
#include <iostream>
#include <cstdlib>

std::string getUserDownloadsPath() {
    const char* home = std::getenv("HOME");
    if (!home) {
        home = std::getenv("USERPROFILE");
    }
    
    if (!home) {
        std::cerr << "[Error] HOME/USERPROFILE environment variable missing.\n";
        return "";
    }
    return std::string(home) + "/Downloads";
}
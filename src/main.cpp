#include "FileWatcher.hpp"
#include "Utils.hpp"
#include <iostream>
#include <stdexcept>

int main() {
    std::string path = getUserDownloadsPath();
    if (path.empty()) return 1;

    try {
        FileWatcher watcher(path);
        watcher.startOnce();
    } catch (const std::exception& e) {
        std::cerr << "[Fatal] " << e.what() << "\n";
        return 1;
    }
    return 0;
}
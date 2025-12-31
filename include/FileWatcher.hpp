#ifndef FILEWATCHER_HPP
#define FILEWATCHER_HPP

#include "FileSorter.hpp"
#include <string>

class FileWatcher {
private:
    FileSorter sorter;

public:
    FileWatcher(const std::string& path);
    void startOnce();
};

#endif
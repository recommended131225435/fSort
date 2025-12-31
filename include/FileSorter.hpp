#ifndef FILESORTER_HPP
#define FILESORTER_HPP

#include "DirectoryManager.hpp"
#include <string>

class FileSorter {
private:
    DirectoryManager dirManager;

public:
    FileSorter(const std::string& path);
    void sortFiles();
};

#endif
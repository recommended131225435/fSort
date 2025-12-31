#include "FileSorter.hpp"
#include <iostream>

FileSorter::FileSorter(const std::string& path) : dirManager(path) {}

void FileSorter::sortFiles() { 
    std::cout << "\n[Sorting] " << dirManager.getDirectoryPath() << "\n";
    dirManager.sortFilesByType(); 
}
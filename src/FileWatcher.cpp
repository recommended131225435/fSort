#include "FileWatcher.hpp"

FileWatcher::FileWatcher(const std::string& path) : sorter(path) {}

void FileWatcher::startOnce() {
    sorter.sortFiles();
}
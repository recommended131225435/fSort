#include "FileTypeClassifier.hpp"

std::string FileTypeClassifier::getFolderForExtension(const std::string& ext) const {
    if (ext == "png" || ext == "jpg" || ext == "jpeg" || ext == "gif") return "images";
    if (ext == "pdf") return "pdfs";
    if (ext == "zip" || ext == "rar" || ext == "7z") return "archives";
    if (ext == "mp4" || ext == "mkv" || ext == "mov") return "videos";
    if (ext == "mp3" || ext == "wav") return "audio";
    return "others";
}
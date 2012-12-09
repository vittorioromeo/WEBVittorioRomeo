#ifndef UTILS_H
#define UTILS_H

#include <json/json.h>
#include <string>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <sstream>

Json::Value getJsonFileRoot(std::string mFilePath);
std::vector<std::string> getAllSubFolderNames(std::string mPath);
std::vector<std::string> getAllFilePaths(std::string mFolderPath, std::string mExtension);
std::string getFileNameFromFilePath(std::string mFilePath, std::string mPrefix, std::string mSuffix);

#endif // UTILS_H

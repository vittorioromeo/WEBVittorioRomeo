#include "Utils.h"

using namespace std;

Json::Value getJsonFileRoot(string mFilePath)
{
	Json::Value root;
	Json::Reader reader;
	ifstream stream{mFilePath, ifstream::binary};
	bool parsingSuccessful{reader.parse(stream, root, false)};
	if (!parsingSuccessful) cout << reader.getFormatedErrorMessages() << endl;

	return root;
}

vector<string> getAllSubFolderNames(string mPath)
{
	vector<string> result;
	DIR *dir{opendir(mPath.c_str())};
	struct dirent *entry{readdir(dir)};

	while (entry != NULL)
	{
		struct stat s;
		stat(entry->d_name, &s);
		if (S_ISDIR(s.st_mode))
		{
			string name{entry->d_name};
			if(name != "." && name != "..") result.push_back(name);
		}
		entry = readdir(dir);
	}

	closedir(dir);
	return result;
}
vector<string> getAllFilePaths(string mFolderPath, string mExtension)
{
	vector<string> result;
	struct dirent *foundFile;
	DIR *directoryHandle;

	directoryHandle = opendir(mFolderPath.c_str());
	if (directoryHandle == NULL)
	{
		cout << "Error querying directory " << mFolderPath;
		return result;
	}
	while ((foundFile = readdir(directoryHandle)))
	{
		const char *dotCheck = strrchr(foundFile->d_name, '.');
		if (dotCheck == NULL || dotCheck == foundFile->d_name) continue; // No extension?
		if (strcmp(mExtension.c_str(), dotCheck) != 0) continue; // Mismatch.
		ostringstream pass;
		pass << mFolderPath << foundFile->d_name;
		result.push_back(pass.str());
	}
	closedir(directoryHandle);

	return result;
}
string getFileNameFromFilePath(string mFilePath, string mPrefix, string mSuffix)
{
	return mFilePath.substr(mPrefix.length(), mFilePath.length() - mPrefix.length() - mSuffix.length());
}

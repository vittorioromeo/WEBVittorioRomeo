#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>
#include "Utils.h"
#include "Content.h"
#include "ContentEntry.h"
#include "Header.h"
#include "Page.h"
#include "Selector.h"
#include "SelectorItem.h"

using namespace std;

string getContentEntriesOutput(string mPath)
{
	string contentEntriesOutput;
	vector<ContentEntry> contentEntries;
	Json::Value root{getJsonFileRoot(mPath + "contentEntries.json")};
	for(Json::Value value : root["entries"]) contentEntries.push_back({value[0].asString(), value[1].asString()});
	for(auto contentEntry : contentEntries) contentEntriesOutput += contentEntry.getOutput() += "\n";
	return contentEntriesOutput;
}

string getSelectorItemsOutput(string mPath)
{
	string selectorItemsOutput;
	vector<SelectorItem> selectorItems;
	Json::Value root{getJsonFileRoot(mPath)};
	for(Json::Value value : root["items"])
	{
		string additional{""};
		if(!value[2].empty()) additional = value[2].asString();

		selectorItems.push_back({value[0].asString(), value[1].asString(), additional});	
	}
	for(auto selectorItem : selectorItems) selectorItemsOutput += selectorItem.getOutput() += "\n";
	return selectorItemsOutput;
}

int main()
{
	map<string, Page> pageMap;
	map<string, string> selectorItemsOutputMap;

	for(string pageFolderName : getAllSubFolderNames("Json/Pages/"))
	{
		Json::Value pageRoot{getJsonFileRoot("Json/Pages/" + pageFolderName + "/page.json")};
		Page page{pageRoot["id"].asString(), pageRoot["name"].asString()};
		for(Json::Value selectorTypeValue : pageRoot["selectors"]) page.selectorTypes.push_back(selectorTypeValue.asString());
		pageMap.insert(make_pair(page.id, page));
	}

	for(string filePath : getAllFilePaths("Json/SelectorTypes/", ".json"))
	{
		Json::Value root{getJsonFileRoot(filePath)};
		selectorItemsOutputMap.insert(make_pair(root["id"].asString(), getSelectorItemsOutput(filePath)));
	}
	
	string headerOutput{Header{}.getOutput()};
	string selectorOutput{};

	for(pair<string, Page> pagePair : pageMap)
	{
		Page page{pagePair.second};

		string path{"Result/" + page.id + ".html"};
		string folderPath{"Json/Pages/" + page.id + "/"};

		page.headerOutput = headerOutput;

		for(string selectorType : page.selectorTypes) page.selectorOutput += Selector{selectorItemsOutputMap[selectorType]}.getOutput();

		page.contentOutput = Content{page.name, getContentEntriesOutput(folderPath)}.getOutput();

		ofstream o(path);
		o << page.getOutput();
		o.flush();
		o.close();
	}

    return 0;
}

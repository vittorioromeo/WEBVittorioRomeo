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
	for(auto value : root["entries"]) contentEntries.push_back({value[0].asString(), value[1].asString()});
	for(auto contentEntry : contentEntries) contentEntriesOutput += contentEntry.getOutput() += "\n";
	return contentEntriesOutput;
}

string getSelectorItemsOutput(string mPath)
{
	string selectorItemsOutput;
	vector<SelectorItem> selectorItems;
	Json::Value root{getJsonFileRoot(mPath)};
	for(auto value : root["items"])
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
	for(auto folderName : getAllSubFolderNames("Json/Pages/"))
	{
		Json::Value root{getJsonFileRoot("Json/Pages/" + folderName + "/page.json")};
		string id		{ root["id"].asString() };
		string name		{ root["name"].asString() };

		Page page{id, name};
		for(auto selector : root["selectors"]) page.selectors.push_back(selector.asString());
		pageMap.insert(make_pair(id, page));
	}

	map<string, Selector> selectorMap;
	for(auto filePath : getAllFilePaths("Json/SelectorTypes/", ".json"))
	{
		Json::Value root{getJsonFileRoot(filePath)};
		string id		{ root["id"].asString() };

		selectorMap.insert(make_pair(id, Selector{id, getSelectorItemsOutput(filePath)}));
	}
	
	string headerOutput{Header{}.getOutput()};
	for(auto pagePair : pageMap)
	{
		Page page{pagePair.second};

		string path{"Result/" + page.id + ".html"};
		string folderPath{"Json/Pages/" + page.id + "/"};

		page.headerOutput = headerOutput;

		for(string selector : page.selectors) page.selectorOutput += selectorMap[selector].getOutput();

		page.contentOutput = Content{page.name, getContentEntriesOutput(folderPath)}.getOutput();

		ofstream o(path);
		o << page.getOutput();
		o.flush();
		o.close();
	}

    return 0;
}

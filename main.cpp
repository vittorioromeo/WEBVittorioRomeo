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
#include "MenuItem.h"
#include "Global.h"

using namespace std;

string getContentEntriesOutput(string mPath)
{
	string contentEntriesOutput;
	vector<ContentEntry> contentEntries;
	Json::Value root{getJsonFileRoot(mPath + "contentEntries.json")};
	for(auto value : root["entries"])
	{
		string sTemplate{value["template"].asString()};
		string title	{value["title"].asString()};
		string text		{value["text"].asString()};
		string textLeft	{value["textLeft"].asString()};
		string textRight{value["textRight"].asString()};
		string imgLeft	{value["imgLeft"].asString()};
		string imgRight	{value["imgRight"].asString()};
		string html		{value["html"].asString()};
		string menu		{value["menu"].asString()};
		string image	{value["image"].asString()};

		contentEntries.push_back({sTemplate, title, text, textLeft, textRight, imgLeft, imgRight, html, menu, image});
	}
	for(auto contentEntry : contentEntries) contentEntriesOutput += contentEntry.getOutput() += "\n";
	return contentEntriesOutput;
}

string getMenuItemsOutput(string mPath)
{
	string menuItemsOutput;
	vector<MenuItem> menuItems;
	Json::Value root{getJsonFileRoot(mPath)};
	for(auto value : root["items"])
	{
		string additional{""};
		if(!value[2].empty()) additional = value[2].asString();

		menuItems.push_back({value[0].asString(), value[1].asString(), additional});
	}
	for(auto menuItem : menuItems) menuItemsOutput += menuItem.getOutput() += "\n";
	return menuItemsOutput;
}

int main()
{
	for(auto folderName : getAllSubFolderNames("Json/Pages/"))
	{
		Json::Value root{getJsonFileRoot("Json/Pages/" + folderName + "/page.json")};
		string id		{root["id"].asString()};
		string name		{root["name"].asString()};

		Page page{id, name};
		for(auto menu : root["menus"]) page.menus.push_back(menu.asString());
		getPageMap().insert(make_pair(id, page));
	}

	for(auto filePath : getAllFilePaths("Json/Menus/", ".json"))
	{
		Json::Value root{getJsonFileRoot(filePath)};
		string id		{root["id"].asString()};

		getMenuMap().insert(make_pair(id, Menu{id, getMenuItemsOutput(filePath)}));
	}

	string headerOutput{Header{}.getOutput()};
	for(auto pagePair : getPageMap())
	{
		Page page{pagePair.second};

		string path{"Result/" + page.id + ".html"};
		string folderPath{"Json/Pages/" + page.id + "/"};

		page.headerOutput = headerOutput;

		for(auto menu : page.menus) page.menuOutput += getMenuMap()[menu].getOutput();

		page.contentOutput = Content{page.name, getContentEntriesOutput(folderPath)}.getOutput();

		ofstream o{path};
		o << page.getOutput();
		o.flush();
		o.close();
	}

    return 0;
}

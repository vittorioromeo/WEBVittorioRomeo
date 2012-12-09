#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
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

int main()
{
	string selectorItemsOutput;
	{
		vector<SelectorItem> selectorItems;
		Json::Value root{getJsonFileRoot("Json/selectorItems.json")};
		for(Json::Value value : root["items"]) selectorItems.push_back({value[0].asString(), value[1].asString()});
		for(auto selectorItem : selectorItems) selectorItemsOutput += selectorItem.getOutput() += "\n";
	}

	string contentEntriesOutput;
	{
		vector<ContentEntry> contentEntries;
		Json::Value root{getJsonFileRoot("Json/contentEntries.json")};
		for(Json::Value value : root["entries"]) contentEntries.push_back({value[0].asString(), value[1].asString()});
		for(auto contentEntry : contentEntries) contentEntriesOutput += contentEntry.getOutput() += "\n";
	}

	string headerOutput{Header{}.getOutput()};
	string selectorOutput{Selector{selectorItemsOutput}.getOutput()};
	string contentOutput{Content{"this is revolutionary", contentEntriesOutput}.getOutput()};
	string pageOutput{Page{headerOutput, selectorOutput, contentOutput}.getOutput()};

	ofstream o("RESULT/index.html");
	o << pageOutput;
	o.flush();
	o.close();

    return 0;
}

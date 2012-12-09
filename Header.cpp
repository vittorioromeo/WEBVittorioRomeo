#include "Header.h"

using namespace std;

string Header::getOutput()
{
	Json::Value root		{getJsonFileRoot("Json/header.json")};
	float scaleFactor		{root["scaleFactor"].asFloat()};
	int logoWidth			{(int)(root["logoWidth"].asFloat() * scaleFactor)};
	int logoHeight			{(int)(root["logoHeight"].asFloat() * scaleFactor)};
	int smallLogoWidth		{(int)(root["smallLogoWidth"].asFloat() * scaleFactor)};
	int smallLogoHeight		{(int)(root["smallLogoHeight"].asFloat() * scaleFactor)};
	int textHeaderWidth		{(int)(root["textHeaderWidth"].asFloat() * scaleFactor)};
	int textHeaderHeight	{(int)(root["textHeaderHeight"].asFloat() * scaleFactor)};

	string result;
	ctemplate::TemplateDictionary dict("header");
	dict["LogoWidth"] = logoWidth;
	dict["LogoHeight"] = logoHeight;
	dict["SmallLogoWidth"] = smallLogoWidth;
	dict["SmallLogoHeight"] = smallLogoHeight;
	dict["TextHeaderWidth"] = textHeaderWidth;
	dict["TextHeaderHeight"] = textHeaderHeight;
	ctemplate::ExpandTemplate("Templates/header.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

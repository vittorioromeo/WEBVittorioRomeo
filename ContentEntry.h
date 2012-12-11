#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct ContentEntry
{
	std::string templateName;
	std::string title;
	std::string text;
	std::string textLeft;
	std::string textRight;
	std::string imgLeft;
	std::string imgRight;
	std::string html;
	std::string menu;
	std::string image;

	std::string getOutput();
};

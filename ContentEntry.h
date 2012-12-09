#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct ContentEntry
{
	std::string title;
	std::string text;

	std::string getOutput();
};

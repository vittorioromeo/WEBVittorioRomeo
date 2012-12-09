#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct Content
{
	std::string title;
	std::string entriesOutput;

	std::string getOutput();
};

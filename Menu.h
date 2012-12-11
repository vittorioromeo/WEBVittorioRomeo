#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct Menu
{
	std::string id;
	std::string itemsOutput;

	std::string getOutput();
};

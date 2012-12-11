#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct MenuItem
{
	std::string name;
	std::string url;
	std::string additional;

	std::string getOutput();
};

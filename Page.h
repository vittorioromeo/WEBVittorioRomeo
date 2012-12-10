#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct Page
{
	std::string id;
	std::string name;	
	std::vector<std::string> selectors;

	std::string headerOutput;
	std::string selectorOutput;
	std::string contentOutput;

	Page(std::string mId, std::string mName);

	std::string getOutput();
};

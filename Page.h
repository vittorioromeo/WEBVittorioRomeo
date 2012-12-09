#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>

struct Page
{
	std::string headerOutput;
	std::string selectorOutput;
	std::string contentOutput;

	std::string getOutput();
};

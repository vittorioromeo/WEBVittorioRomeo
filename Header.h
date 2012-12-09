#ifndef HEADER_H
#define HEADER_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>
#include "Utils.h"

struct Header
{
	std::string getOutput();
};

#endif // HEADER_H

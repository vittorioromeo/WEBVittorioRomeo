#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <ctemplate/template.h>
#include <json/json.h>
#include "Menu.h"
#include "Page.h"

std::map<std::string, Page>& getPageMap();
std::map<std::string, Menu>& getMenuMap();

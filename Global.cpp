#include "Global.h"

using namespace std;

map<string, Page> pageMap;
map<string, Menu> menuMap;


std::map<std::string, Page>& getPageMap() { return pageMap; }
std::map<std::string, Menu>& getMenuMap() { return menuMap; }

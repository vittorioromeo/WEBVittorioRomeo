#include "MenuItem.h"

using namespace std;

string MenuItem::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("menuItems");
	dict["MenuItemName"] = name;
	dict["MenuItemUrl"] = url;
	dict["MenuItemAdditional"] = additional;
	ctemplate::ExpandTemplate("Templates/menuItem.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

#include "SelectorItem.h"

using namespace std;

string SelectorItem::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("menuItems");
	dict["MenuItemName"] = name;
	dict["MenuItemUrl"] = url;
	dict["MenuItemAdditional"] = additional;
	ctemplate::ExpandTemplate("Templates/menuItem.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

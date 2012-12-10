#include "Selector.h"

using namespace std;

string Menu::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("menu");
	dict["MenuItems"] = itemsOutput;
	ctemplate::ExpandTemplate("Templates/menu.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

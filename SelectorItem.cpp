#include "SelectorItem.h"

using namespace std;

string SelectorItem::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("selectorItems");
	dict["SelectorItemName"] = name;
	dict["SelectorItemUrl"] = url;
	ctemplate::ExpandTemplate("Templates/selectorItem.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

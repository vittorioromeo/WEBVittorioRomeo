#include "Selector.h"

using namespace std;

string Selector::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("selector");
	dict["SelectorItems"] = itemsOutput;
	ctemplate::ExpandTemplate("Templates/selector.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

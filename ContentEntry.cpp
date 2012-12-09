#include "ContentEntry.h"

using namespace std;

string ContentEntry::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("contentEntry");
	dict["ContentEntryTitle"] = title;
	dict["ContentEntryText"] = text;
	ctemplate::ExpandTemplate("Templates/contentEntry.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

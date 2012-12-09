#include "Content.h"

using namespace std;

string Content::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("content");
	dict["ContentTitle"] = title;
	dict["ContentEntries"] = entriesOutput;
	ctemplate::ExpandTemplate("Templates/content.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

#include "Page.h"

using namespace std;

Page::Page(string mId, string mName) : id{mId}, name{mName}
{
	
}

string Page::getOutput()
{
	string result;
	ctemplate::TemplateDictionary dict("page");
	dict["Header"] = headerOutput;
	dict["Selector"] = selectorOutput;
	dict["Content"] = contentOutput;
	ctemplate::ExpandTemplate("Templates/page.tpl", ctemplate::DO_NOT_STRIP, &dict, &result);
	return result;
}

#include "ListItem.h"
#include <string>

using namespace std;

int main()
{
    string t("tomatos");
    ListItem<string> l(1,t);
    l.getCompleted();
	return 0;
}

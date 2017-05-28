#include "ProxyObj.h"

int main()
{
	ProxyObj obj(std::string("the quick brown fox jumped over the dog"));
	obj->execute();
	obj.execute();
	return 0;
}
#include "Singleton.h"
#include "Obj.h"
#include "Obj1.h"


Factory* createFactory(const char* name)
{
	if (name == "Object")
	{
		return new Obj("sally");
	}
	else if(name == "Object1")
	{
		return new Obj1("Made");
	}
}

int main()
{
	Singleton* single1 = Singleton::getInstance();

	Singleton* single2 = Singleton::getInstance();


	Singleton* single3 = Singleton::getInstance();
	b
	const Factory* fact = createFactory("Object");
	const Factory* fact1 = createFactory("Object1");

	fact->printName();
	fact1->printName();

	delete fact;
	delete fact1;



	return 0;
}
#include "Singleton.h"
#include "Obj.h"
#include "Obj1.h"
#include "ShapeMaker.h"

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

	return NULL;
}

int main()
{

	/* Test Singleton*/
	/////////////////////////////////////////////////////////////////////////////

	Singleton* single1 = Singleton::getInstance();

	Singleton* single2 = Singleton::getInstance();


	Singleton* single3 = Singleton::getInstance();

	////////////////////////////////////////////////////////////////////////////

	/* Test Factory pattern*/
	const Factory* fact = createFactory("Object");
	const Factory* fact1 = createFactory("Object1");

	fact->printName();
	fact1->printName();

	delete fact;
	delete fact1;

	///////////////////////////////////////////////////////////////////////////

	/* Test Facade Pattern*/

	ShapeMaker maker;
	maker.drawCircle();
	//maker.drawRectangle();
	//maker.drawSquare();

	///////////////////////////////////////////////////////////////////////////

	return 0;
}
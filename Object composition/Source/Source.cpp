#include "Aggregation.h"
#include "Composition.h"

int main()
{
	Teacher *t1 = new Teacher("Bob"); // create a teacher
	Teacher *t2 = new Teacher("Frank");
	Teacher *t3 = new Teacher("Beth");

	{
		// Create a department and use the constructor parameter to pass
		// the teacher to it.
		Department dept; // create an empty Department
		dept.addTeacher(t1);
		dept.addTeacher(t2);
		dept.addTeacher(t3);

		std::cout << dept;

	} // dept goes out of scope here and is destroyed

	std::cout << t1->getName() << " still exists!\n";
	std::cout << t2->getName() << " still exists!\n";
	std::cout << t3->getName() << " still exists!\n";

	delete t1;
	delete t2;
	delete t3;

	return 0;
}
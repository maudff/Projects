#include "Penny.h"
#include "Fraction.h"


int main()
{

	Penny penny(2);
	Penny penny1(5);

	Penny penny3(penny + penny1);
	Penny penny4(penny3 + 3);
	Penny penny5( 3 + penny4);

	std::cout << "I have " << penny3.getPenny() << std::endl;
	std::cout << "I have " << penny5.getPenny() << std::endl;

	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();

	std::cout << f6 << std::endl;

	return 0;
}
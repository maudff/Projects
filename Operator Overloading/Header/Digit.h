#pragma once
#include <iostream>

/////////////////////////////////////////////////////////////////////////

class Digit
{
private:

	int m_digit;

public:
	Digit(int digit);
	Digit& operator++(); //prefix increment
	Digit& operator++(int); //postfix increment 
	friend std::ostream& operator<<(std::ostream& out, const Digit& digit);
};

/////////////////////////////////////////////////////////////////////////
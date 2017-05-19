#include "Penny.h"

//////////////////////////////////////////////////////////////////////////

Penny::Penny(int penny) : m_penny(penny)
{

}

/* Overloading operator + using friends */
//////////////////////////////////////////////////////////////////////////

Penny operator+(const Penny& penny, const Penny& penny2)
{
	return Penny(penny.m_penny + penny2.m_penny);
}

//////////////////////////////////////////////////////////////////////////

Penny operator-(const Penny& penny, const Penny& penny2)
{
	return Penny(penny.m_penny - penny2.m_penny);
}

//////////////////////////////////////////////////////////////////////////

Penny operator*(const Penny& penny, const Penny& penny2)
{
	return Penny(penny.m_penny * penny2.m_penny);
}

//////////////////////////////////////////////////////////////////////////

int Penny::getPenny() const
{
	return this->m_penny;
}

/* Overloading the operator+ using operands of different types*/
//////////////////////////////////////////////////////////////////////////

Penny operator+(const Penny& penny, int number)
{
	return Penny(penny.m_penny + number);
}

//////////////////////////////////////////////////////////////////////////

/* When overloading operators using operands of different types, the order in 
	which the operands matters, so you have to overload the operator+ to cover both
	cases, i.e. if operand x is int, and operant y is a user defined type, x + y
	is not the same as y + x. 
*/
//////////////////////////////////////////////////////////////////////////

Penny operator+(int number, const Penny& penny)
{
	return Penny(penny.m_penny + number);
}

//////////////////////////////////////////////////////////////////////////
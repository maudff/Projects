#include "Fraction.h"

//////////////////////////////////////////////////////////////////////////////////

Fraction::Fraction(int numerator, int denominator) :m_numerator( numerator) , m_denominator( denominator)
{

}

//////////////////////////////////////////////////////////////////////////////////

void Fraction::print() const
{
	std::cout << m_numerator << "/" << m_denominator << std::endl;
}

//////////////////////////////////////////////////////////////////////////////////

Fraction operator*(const Fraction& frac, const Fraction& frac1)
{
	return Fraction(frac.m_numerator * frac1.m_numerator, frac.m_denominator * frac1.m_denominator);
}

//////////////////////////////////////////////////////////////////////////////////

Fraction operator/(const Fraction& frac, const Fraction& frac1)
{
	if (frac.m_denominator != frac1.m_denominator)
	{
		return Fraction(frac.m_numerator * frac1.m_denominator, frac.m_denominator * frac.m_numerator);
	}
	else
	{
		return Fraction(frac.m_numerator / frac1.m_denominator, frac.m_denominator );
	}
}

//////////////////////////////////////////////////////////////////////////////////

Fraction operator*(const Fraction& frac, int number)
{
	return Fraction(frac.m_numerator * number, frac.m_denominator);
}

//////////////////////////////////////////////////////////////////////////////////

Fraction operator*(int number, const Fraction& frac)
{
	return frac * number;
}

/* Overloaded output operator */
//////////////////////////////////////////////////////////////////////////////////

std::ostream& operator<<(std::ostream& out, const Fraction& obj)
{
	out << "Fraction:" << " " << obj.m_numerator << "/" << obj.m_denominator;
	return out;
}

//////////////////////////////////////////////////////////////////////////////////

/* Only overload operators by members if the left operand is a class and needs to be
	modified.
*/
void Fraction::operator+=(int value)
{
	m_numerator += value;
}

//////////////////////////////////////////////////////////////////////////////////

void Fraction::operator++() 
{
	unsigned value = 1 * m_denominator;
	m_numerator += value;
}

//////////////////////////////////////////////////////////////////////////////////

bool operator<=(const Fraction& frac, const Fraction& frac1)
{
	double fraction = frac.m_numerator / frac.m_denominator;
	double fraction1 = frac1.m_numerator / frac1.m_denominator;

	if (fraction < fraction1 || fraction == fraction1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//////////////////////////////////////////////////////////////////////////////////


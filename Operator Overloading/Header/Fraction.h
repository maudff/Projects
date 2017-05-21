#pragma once
#include <iostream>


////////////////////////////////////////////////////////////////////////

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	void operator++();
	void print() const;
	void operator+=(int value);
	Fraction(int numerator, int denominator);
	friend Fraction operator*(const Fraction& frac, int number);
	friend Fraction operator*(int number, const Fraction& frac);
	friend bool operator<=(const Fraction& frac, const Fraction& frac1);
	friend Fraction operator*(const Fraction& frac, const Fraction& frac1);
	friend Fraction operator/(const Fraction& frac, const Fraction& frac1);
	friend std::ostream& operator<<(std::ostream& out, const Fraction& obj);


};

////////////////////////////////////////////////////////////////////////
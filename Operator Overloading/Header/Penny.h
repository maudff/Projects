#pragma once
#include <iostream>

////////////////////////////////////////////////////////////////

class Penny
{
private:
	int m_penny;

public:
	Penny(int penny);
	int getPenny() const;
	friend Penny operator+(const Penny& penny, int number);
	friend Penny operator+(int number, const Penny& penny);
	friend Penny operator+(const Penny& penny, const Penny& penny2);
	friend Penny operator-(const Penny& penny, const Penny& penny2);
	friend Penny operator*(const Penny& penny, const Penny& penny2);
};

////////////////////////////////////////////////////////////////
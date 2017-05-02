#pragma once
#include <iostream>
#include "Factory.h"

class Obj1 : public Factory
{
private:
	std::string m_name;

public:
	Obj1(const char* name);
	virtual void printName() const;
};
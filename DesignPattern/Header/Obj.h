#pragma once
#include <iostream>
#include "Factory.h"

class Obj : public Factory
{
private:
	std::string m_name;

public:
	Obj(const char* name);
	virtual void printName() const;
};
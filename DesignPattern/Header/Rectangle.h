#pragma once
#include <iostream>
#include "IShape.h"

class Rectangle : public IShape
{
public:
	virtual void draw();
};
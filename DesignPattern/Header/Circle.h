#pragma once
#include <iostream>
#include "IShape.h"

class Circle : public IShape
{
public:
	virtual void draw();
};
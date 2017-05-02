#pragma once
#include <iostream>
#include "IShape.h"

class Square : public IShape
{
public:
	virtual void draw();
};
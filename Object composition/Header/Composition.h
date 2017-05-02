#pragma once
#include <iostream>
#include "Position.h"

///////////////////////////////////////////////////////////////////////

class Creature
{
private:
	Position m_position;

public:
	Creature();
	Creature( int x , int y);
	void move(int x, int y);
};

///////////////////////////////////////////////////////////////////////
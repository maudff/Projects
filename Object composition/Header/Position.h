#pragma once
#include <iostream>

///////////////////////////////////////////////////////////////////////

class Position
{
private:
	int m_xPosition;
	int m_yPosition;

public:
	Position(int x, int y);
	void setPosition(int x, int y);
};

///////////////////////////////////////////////////////////////////////
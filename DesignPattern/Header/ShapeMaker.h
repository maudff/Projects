#pragma once
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

/////////////////////////////////////////////////////////////////////

class ShapeMaker
{
private:
	IShape* m_square;
	IShape* m_circle;
	IShape* m_rectangle;

public:
	ShapeMaker();
	~ShapeMaker();
	void drawSquare();
	void drawCircle();
	void drawRectangle();

};

/////////////////////////////////////////////////////////////////////
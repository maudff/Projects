#pragma once
#include <iostream>
////////////////////////////////////////////////////////////////

class Stack
{
private:
	signed m_top;
	unsigned* m_stack;
	unsigned m_maxSize;

public:
	void pop();
	bool isEmpty();
	unsigned peek();
	Stack(unsigned size);
	void push(int number);
};

////////////////////////////////////////////////////////////////
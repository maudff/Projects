#include "Stack.h"

/////////////////////////////////////////////////////////////////////////

Stack::Stack(unsigned max) : m_top(-1), m_stack(new unsigned[max]), m_maxSize(max)
{

}

/////////////////////////////////////////////////////////////////////////

void Stack::push(int number)
{
	if (m_top >= m_maxSize)
	{
		std::cout << "Stack is full" << std::endl;
	}
	else
	{
		m_top++;
		m_stack[m_top] = number;
	}
}

/////////////////////////////////////////////////////////////////////////

void Stack::pop()
{
	if (m_top < 0)
	{
		std::cout << "Can not pop empty array" << std::endl;
	}
	else
	{
		m_stack[m_top] = 0;
		--m_top;
	}
}

/////////////////////////////////////////////////////////////////////////

unsigned Stack::peek()
{

	if (m_top < 0)
	{
		std::cout << "Stack is empty" << std::endl;
	}
	else
	{
		return m_stack[m_top];
	}
}

/////////////////////////////////////////////////////////////////////////
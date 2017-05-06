#include "Queue.h"
//////////////////////////////////////////////////////////////

Queue::Queue(int size) : m_size(size) , m_queue( new int[size]) , m_numOfElements( 0 )
{

}

//////////////////////////////////////////////////////////////

Queue::~Queue()
{
	delete m_queue;
}

//////////////////////////////////////////////////////////////

void Queue::enqueue(int number)
{
	if (isFull())
	{
		std::cout << "Queue is full, can't insert any more elements" << std::endl;
		return;
	}

	m_queue[m_numOfElements] = number;
	++m_numOfElements;
}

//////////////////////////////////////////////////////////////

void Queue::dequeue()
{
	if (isEmpty())
	{
		std::cout << "Queue is empty" << std::endl;
		return;
	}
	else if (m_numOfElements == 1)
	{
		m_queue[m_numOfElements - 1] = 0;
	}
	else
	{
		for (unsigned i = 1; i < m_numOfElements; i++)
		{
			if (i == m_numOfElements - 1)
			{
				m_queue[i - 1] = m_queue[i];
				m_queue[i] = 0;
			}
			else
			{
				m_queue[i - 1] = m_queue[i];
			}
		}
	}

	--m_numOfElements;
}

//////////////////////////////////////////////////////////////

void enqueue(Node* node);

//////////////////////////////////////////////////////////////

int Queue::peek()
{
	if (isEmpty())
	{
		std::cout << "Queue is full" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Number is " << m_queue[0] << std::endl;
		return m_queue[0];
	}
}

//////////////////////////////////////////////////////////////

bool Queue::isEmpty()
{
	return (m_numOfElements == 0) ? true : false;

}

//////////////////////////////////////////////////////////////

bool Queue::isFull()
{
	return (m_numOfElements >= m_size) ? true : false;
}

//////////////////////////////////////////////////////////////
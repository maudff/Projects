#include "Queue.h"
//////////////////////////////////////////////////////////////

Queue::Queue(int size) : m_size(size) , m_rear(0),m_queue( new int[size]) , m_front(0) , m_numOfElements( 0 )
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

	++m_rear;
	m_queue[m_rear] = number;
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

	m_queue[m_front] = NULL;
	++m_front;
	--m_numOfElements;
}

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
		std::cout << "Number is " << m_queue[m_front] << std::endl;
		return m_queue[m_front];
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
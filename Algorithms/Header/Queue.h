#pragma once
#include <iostream>
#include "SinglyLL-Node.h"

class Queue
{
private :
	unsigned	m_size;
	int*		m_queue;
	unsigned	m_numOfElements;

public:
	~Queue();
	Queue(int size);
	int				peek();
	bool			isFull();
	bool			isEmpty();
	void			dequeue();
	void			enqueue(int number);
	void			enqueue(Node* node);
};



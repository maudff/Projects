#pragma once
#include <iostream>

class Queue
{
private :
	unsigned	m_size;
	int*		m_queue;
	unsigned	m_numOfElements;

public:
	~Queue();
	void dequeue();
	Queue(int size);
	void enqueue(int number);
	int& peek();
	bool isFull();
	bool isEmpty();
};



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
	void enqueue(int number);
	int& peek();
	bool isFull();
	bool isEmpty();
	void enqueue(Node* node);
	void dequeue(bool isSInglyNode = false);
};



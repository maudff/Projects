#pragma once
#include <vector>
#include "SinglyLL-Node.h"

/////////////////////////////////////////////////////////////////////////

class NQueue
{
private:
	std::vector<unsigned> m_queue;

public:
	NQueue();
	void dequeue();
	bool isEmpty();
	unsigned peek();
	void enqueue(unsigned vertex);
};

/////////////////////////////////////////////////////////////////////////
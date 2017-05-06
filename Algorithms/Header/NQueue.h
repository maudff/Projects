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
	unsigned	peek();
	void		dequeue();
	bool		isEmpty();
	void		enqueue(unsigned vertex);
};

/////////////////////////////////////////////////////////////////////////
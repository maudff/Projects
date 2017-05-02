#pragma once
#include "SinglyLL.h"

///////////////////////////////////////////////////////////////////

class AdjacentList
{
public:
	unsigned m_size;
	SinglyLinkedList* m_adjacentList;

	~AdjacentList();
	AdjacentList(unsigned size);
	void addEdge(unsigned vertex, unsigned vertex1);
	bool queryEdge(unsigned vertex, unsigned vertex1);
};

///////////////////////////////////////////////////////////////////
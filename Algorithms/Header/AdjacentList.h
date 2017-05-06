#pragma once
#include "SinglyLL.h"

///////////////////////////////////////////////////////////////////

class AdjacentList
{
private:
	unsigned m_size;
	SinglyLinkedList* m_adjacentList;

public:
	~AdjacentList();
	AdjacentList(unsigned size);
	unsigned getSize() const;
	void addEdge(unsigned vertex, unsigned vertex1);
	bool queryEdge(unsigned vertex, unsigned vertex1);
	const SinglyLinkedList* getVertex(int vertex) const;
};

///////////////////////////////////////////////////////////////////
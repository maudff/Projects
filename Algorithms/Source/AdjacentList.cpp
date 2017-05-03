#include "AdjacentList.h"

/////////////////////////////////////////////////////////////////////

AdjacentList::AdjacentList(unsigned size) : m_size( size) , m_adjacentList( new SinglyLinkedList[size])
{
}

/////////////////////////////////////////////////////////////////////

void AdjacentList::addEdge(unsigned vertex, unsigned vertex1)
{
	if (vertex <= m_size && vertex1 <= m_size)
	{
		m_adjacentList[vertex].addLink(new Node(vertex1));
		m_adjacentList[vertex1].addLink(new Node(vertex));
	}
	else
	{
		std::cout << "Node does not exist" << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////

bool AdjacentList::queryEdge(unsigned vertex, unsigned vertex1)
{

	Node* node1 = m_adjacentList[vertex].searchLink(vertex1);
	Node* node2 = m_adjacentList[vertex1].searchLink(vertex);

	if (node1 && node2)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/////////////////////////////////////////////////////////////////////

AdjacentList::~AdjacentList()
{
	for (unsigned i = 0; i < m_size; i++)
	{
		SinglyLinkedList* list = m_adjacentList + i;
		list->~SinglyLinkedList();
	}
}

/////////////////////////////////////////////////////////////////////

SinglyLinkedList* AdjacentList::getVertex(int vertex)
{
	if (vertex <= m_size && vertex >= 0)
	{
		return m_adjacentList + vertex;
	}
}

/////////////////////////////////////////////////////////////////////
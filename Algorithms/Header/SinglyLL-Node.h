#pragma once
#include <iostream>

////////////////////////////////////////////////////////////

class Node
{
private:
	unsigned		m_key;
	Node*			m_next;
	std::string		m_element;
	unsigned		m_adjacentVertex;

	/////////////////////////////////////////////////////

public:
	Node();
	Node(int adjacentNode);
	Node(const char* element);
	Node(const std::string& element);

	unsigned			getKey() const;
	Node*				getNext() const;
	unsigned			getVertex() const;
	const char*			getElement() const;
	void				setNext(Node* node);
	void				setKey(unsigned key);
	
};

////////////////////////////////////////////////////////////

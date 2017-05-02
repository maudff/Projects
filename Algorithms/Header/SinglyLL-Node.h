#pragma once
#include <iostream>

////////////////////////////////////////////////////////////

class Node
{
private:
	std::string m_element;

public:
	Node();
	unsigned m_adjacentVertex;
	Node(const char* element);
	Node* m_next;
	unsigned int m_key;
	void setNext(Node* node);
	Node(unsigned adjacentNode);
	const std::string& getElement() const;
	Node(const std::string& element);
};

////////////////////////////////////////////////////////////

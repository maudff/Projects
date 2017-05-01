#pragma once
#include "SinglyLL-Node.h"

/////////////////////////////////////////////////////


class SinglyLinkedList
{
private:
	Node* m_head;
	unsigned m_key;

public:
	~SinglyLinkedList();
	SinglyLinkedList();
	void DisplayList()const;
	void addLink(Node* node);
	void removeLink(int key);
	Node* searchLink(int key);
	Node* searchLink(unsigned vertex);
};

/////////////////////////////////////////////////////

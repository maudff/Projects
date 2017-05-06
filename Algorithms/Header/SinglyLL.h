#pragma once
#include "SinglyLL-Node.h"

/////////////////////////////////////////////////////


class SinglyLinkedList
{
private:
	unsigned	m_key;
	Node*		m_head;

public:
	SinglyLinkedList();
	~SinglyLinkedList();

	void				DisplayList()const;
	void				addLink(Node* node);
	void				removeLink(int key);
	Node*				searchLink(int key);
	Node*				getHead() const;
	Node*				searchLink(unsigned vertex);
};

/////////////////////////////////////////////////////

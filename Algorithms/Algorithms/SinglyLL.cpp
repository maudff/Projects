#include "SinglyLL.h"

/////////////////////////////////////////////////////////////////////

SinglyLinkedList::SinglyLinkedList() :m_key(0) , m_head(new Node()) 
{
}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::DisplayList() const
{
	const Node* node;
	for (node = m_head; node; node = node->m_next)
	{
		std::cout <<  &node->getElement()[0] << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::addLink(Node* node)
{
	Node* temp = m_head;
	while (temp->m_next != NULL)
	{
		temp = temp->m_next;
	}
	m_key++;
	node->m_key = m_key;
	temp->m_next = node;

}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::removeLink(int key)
{
	Node* prev;
	Node* lastNode;
	Node* currNode = searchLink(key);

	for (Node* node = m_head; node; node = node->m_next)
	{
		if (node->m_next == currNode)
		{
			prev = node;
		}
		lastNode = node;
	}

	if (currNode == m_head)
	{
		if (m_head->m_next != NULL)
		{
			m_head = m_head->m_next;
			delete currNode;
			return;
		}
		else
		{
			delete m_head;
		}
	}
	else if (currNode == lastNode)
	{
		if (currNode->m_next != NULL)
		{
			prev->m_next = currNode->m_next;
			currNode->m_next = NULL;
			delete currNode;
			return;
		}
		else
		{
			prev->m_next = NULL;
			delete currNode;
			return;
		}
	}
	else if (currNode == NULL)
	{
		return;
	}
	else
	{
		prev->m_next = currNode->m_next;
		currNode->m_next = NULL;
		delete currNode;
	}

}

/////////////////////////////////////////////////////////////////////

Node* SinglyLinkedList::searchLink(int key)
{
	Node* ptr;

	for (ptr = m_head; ptr; ptr = ptr->m_next)
	{
		if (key == ptr->m_key)
		{
			return ptr;
		}
	}

	return NULL;
}

/////////////////////////////////////////////////////////////////////

Node*  SinglyLinkedList::searchLink(unsigned vertex)
{
	Node* ptr;

	for (ptr = m_head; ptr; ptr = ptr->m_next)
	{
		if (vertex == ptr->m_adjacentVertex)
		{
			return ptr;
		}
	}

	return NULL;
}

SinglyLinkedList::~SinglyLinkedList()
{
	Node *ptr = m_head;

	while (m_head->m_next != NULL)
	{
		m_head = m_head->m_next;
		delete ptr;
		ptr = m_head;
	}

	delete m_head;
	m_head = 0;
}


/////////////////////////////////////////////////////////////////////
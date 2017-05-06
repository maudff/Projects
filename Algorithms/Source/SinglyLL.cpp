#include "SinglyLL.h"

/////////////////////////////////////////////////////////////////////

SinglyLinkedList::SinglyLinkedList() :m_key(0) , m_head(new Node()) 
{
}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::DisplayList() const
{
	const Node* node;
	for (node = m_head; node; node = node->getNext())
	{
		std::cout <<  node->getElement() << std::endl;
	}
}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::addLink(Node* node)
{
	Node* temp = m_head;
	while (temp->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	m_key++;
	node->setKey(m_key);
	temp->setNext(node);

}

/////////////////////////////////////////////////////////////////////

void SinglyLinkedList::removeLink(int key)
{
	Node* prev;
	Node* lastNode;
	Node* currNode = searchLink(key);

	for (Node* node = m_head; node; node = node->getNext())
	{
		if (node->getNext() == currNode)
		{
			prev = node;
		}
		lastNode = node;
	}

	if (currNode == m_head)
	{
		if (m_head->getNext() != NULL)
		{
			m_head = m_head->getNext();
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
		if (currNode->getNext() != NULL)
		{
			prev->setNext(currNode->getNext());
			currNode->setNext(NULL);
			delete currNode;
			return;
		}
		else
		{
			prev->setNext(NULL);
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
		prev->setNext(currNode->getNext());
		currNode->setNext(NULL);
		delete currNode;
	}

}

/////////////////////////////////////////////////////////////////////

Node* SinglyLinkedList::searchLink(int key)
{
	Node* ptr;

	for (ptr = m_head; ptr; ptr = ptr->getNext())
	{
		if (key == ptr->getKey())
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

	for (ptr = m_head; ptr; ptr = ptr->getNext())
	{
		if (vertex == ptr->getVertex())
		{
			return ptr;
		}
	}

	return NULL;
}

SinglyLinkedList::~SinglyLinkedList()
{
	Node *ptr = m_head;

	while (m_head->getNext() != NULL)
	{
		m_head = m_head->getNext();
		delete ptr;
		ptr = m_head;
	}

	delete m_head;
	m_head = 0;
}


/////////////////////////////////////////////////////////////////////

Node* SinglyLinkedList::getHead() const
{
	return m_head;
}

/////////////////////////////////////////////////////////////////////
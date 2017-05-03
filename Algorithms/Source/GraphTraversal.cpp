#include "GraphTraversal.h"

//////////////////////////////////////////////////////////////////

void GraphTraversal::BreadthFirstSearch(AdjacentList* list , Node* source)
{
	NQueue queue;
	int* level = new int[list->m_size];
	bool* visitedNodes = new bool[list->m_size]();

	queue.enqueue(source->m_adjacentVertex);
	level[source->m_adjacentVertex] = 0;
	visitedNodes[source->m_adjacentVertex] = true;

	while (!queue.isEmpty())
	{
		unsigned vertex = queue.peek();
		queue.dequeue();
		const SinglyLinkedList* adjacentList = list->getVertex(vertex);
		const Node* head = adjacentList->getHead();
		head = head->m_next;

		while (head != NULL)
		{
			if (!visitedNodes[head->m_adjacentVertex])
			{
				queue.enqueue(head->m_adjacentVertex);
				unsigned num = level[vertex] + 1;
				level[head->m_adjacentVertex] = num;
				visitedNodes[head->m_adjacentVertex] = true;
			}
			head = head->m_next;
		}
	}

	delete visitedNodes;
	delete level;
}

//////////////////////////////////////////////////////////////////

void GraphTraversal::DepthFirstSearch(AdjacentList& list, Node& source)
{
	const Node* node;
	Stack stack(list.m_size);
	const SinglyLinkedList* linkedList;
	stack.push(source.m_adjacentVertex);
	bool* visitedNodes = new bool[list.m_size]();
	visitedNodes[source.m_adjacentVertex] = true;

	while (!stack.isEmpty())
	{
		int vertex = stack.peek();
		stack.pop();
		linkedList = list.getVertex(vertex);
		node = linkedList->getHead()->m_next;

		while( node != NULL)
		{
			if (!visitedNodes[node->m_adjacentVertex])
			{
				stack.push(node->m_adjacentVertex);
				visitedNodes[node->m_adjacentVertex] = true;
			}
			node = node->m_next;
		}
	}

}

//////////////////////////////////////////////////////////////////
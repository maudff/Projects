#include "GraphTraversal.h"

//////////////////////////////////////////////////////////////////

void GraphTraversal::BreadthFirstSearch(AdjacentList* list , Node* source)
{
	unsigned adjListSize = list->getSize();
	unsigned adjVertex = source->getVertex();

	NQueue queue;
	int* level = new int[adjListSize];
	bool* visitedNodes = new bool[adjListSize]();

	queue.enqueue(adjVertex);
	level[adjVertex] = 0;
	visitedNodes[adjVertex] = true;

	while (!queue.isEmpty())
	{
		unsigned vertex = queue.peek();
		queue.dequeue();
		const SinglyLinkedList* adjacentList = list->getVertex(vertex);
		const Node* head = adjacentList->getHead();
		head = head->getNext();

		while (head != NULL)
		{
			adjVertex = head->getVertex();

			if (!visitedNodes[adjVertex])
			{
				queue.enqueue(adjVertex);
				unsigned num = level[vertex] + 1;
				level[adjVertex] = num;
				visitedNodes[adjVertex] = true;
			}
			head = head->getNext();
		}
	}

	delete visitedNodes;
	delete level;
}

//////////////////////////////////////////////////////////////////

void GraphTraversal::DepthFirstSearch(AdjacentList& list, Node& source)
{
	const Node* node;
	unsigned size = list.getSize();
	const SinglyLinkedList* linkedList;
	unsigned adjVertex = source.getVertex();

	Stack stack(size);
	stack.push(adjVertex);
	bool* visitedNodes = new bool[size]();
	visitedNodes[adjVertex] = true;
	

	while (!stack.isEmpty())
	{
		int vertex = stack.peek();
		stack.pop();
		linkedList = list.getVertex(vertex);
		node = linkedList->getHead()->getNext();

		while( node != NULL)
		{
			adjVertex = node->getVertex();
			if (!visitedNodes[adjVertex])
			{
				stack.push(adjVertex);
				visitedNodes[adjVertex] = true;
			}
			node = node->getNext();
		}
	}

}

//////////////////////////////////////////////////////////////////
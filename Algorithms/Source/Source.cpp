#include "Queue.h"
#include "SinglyLL.h"
#include "BinarySearchAlgorithm.h"
#include "HashTable.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "AdjacentList.h"
#include "BST.h"
#include "Fibonacci.h"

int main()
{

	/* Fibonacci*/
	///////////////////////////////////////////////////////////////////

	Fibonacci::fibonacci(4);

	///////////////////////////////////////////////////////////////////


	/* AdjacentList Test*/
	//////////////////////////////////////////////////////////////////

	AdjacentList adjacent(8);
	adjacent.addEdge(0, 1);
	adjacent.addEdge(0, 2);
	adjacent.addEdge(0, 3);
	adjacent.addEdge(1, 4);
	adjacent.addEdge(2, 6);
	adjacent.addEdge(2, 7); 
	adjacent.addEdge(3, 7);
	
	/* Binary Search Tree*/
	//////////////////////////////////////////////////////////////////

	BST h;
	h.insert(new BST_Node(5));
	h.insert(new BST_Node(2));
	h.insert(new BST_Node(8));
	h.insert(new BST_Node(1));
	h.insert(new BST_Node(3));
	h.insert(new BST_Node(7));
	h.insert(new BST_Node(9));
	h.insert(new BST_Node(10));
	h.insert(new BST_Node(4));

	//////////////////////////////////////////////////////////////////

	/* Quicksort test*/
	///////////////////////////////////////////////////////////////////

	int QuickSortTest[] = { 27 , 2 ,5 , 28, 16 , 4 , 15 };
	Quicksort::quicksort(QuickSortTest, 0, 6);

	for (int i = 0; i < 7; i++)
	{
		std::cout << QuickSortTest[i] << " ,";
	}

	///////////////////////////////////////////////////////////////////

	/* Insertion Test*/
	////////////////////////////////////////////////////////////////////

	int insertionArr[] = { 14, 7 , 6 , 20 , 21 , 1 , 0 };

	InsertionSort::insertionSort(insertionArr, 7);
	

	//////////////////////////////////////////////////////////////////


	/* Linked List Test*/
	//////////////////////////////////////////////////////////////////

	int number = 0;
	std::string name = "jfjifjifjif";
	SinglyLinkedList list;
	list.addLink(new Node("A"));
	list.addLink(new Node("B"));
	list.addLink(new Node("C"));
	list.addLink(new Node("D"));
	list.addLink(new Node("E"));

	////////////////////////////////////////////////////////////////////

	/* Hash Table test */
	/////////////////////////////////////////////////////////////////////

	HashTable hash(10);
	hash.insert(new DataItem(27, 100));
	hash.insert(new DataItem(30, 120));
	hash.insert(new DataItem(37, 100));

	//////////////////////////////////////////////////////////////////////


	/* Binary Search Algorithm Test*/
	/////////////////////////////////////////////////////////////////////

	int numbers[] = { 12 , 16 , 18 , 20 , 21 , 23 , 25 , 30 , 32 , 41 , 46 };
	
	number = BSA::BinarySearchAlgorithm(numbers, 11, 30);
	number = BSA::BinarySearchAlgorithm(numbers, 11, 12);
	number = BSA::BinarySearchAlgorithm(numbers, 11, 18);
	number = BSA::BinarySearchAlgorithm(numbers, 11, 8);
	number = BSA::BinarySearchAlgorithm(numbers, 11, 22);

	///////////////////////////////////////////////////////////////////////

	/* Linked List Test*/
	///////////////////////////////////////////////////////////////

	Node* node = list.searchLink(3);
	Node* node1 = list.searchLink(6);

	list.removeLink(0);
	list.removeLink(3);
	list.addLink(new Node("adhe"));

	list.DisplayList();

	//////////////////////////////////////////////////////////////////


	/* Queue Test*/
	/////////////////////////////////////////////////////////////////////

	Queue queue(3);
	queue.enqueue(5);
	queue.enqueue(6);
	queue.enqueue(7);

	queue.peek();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();

	///////////////////////////////////////////////////////////////

	int x = 3 / 2;

std::cout << x << std::endl;

}
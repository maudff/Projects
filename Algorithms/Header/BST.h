#pragma once
#include "Node.h"

////////////////////////////////////////////////////////////

class BST
{
private:
	BST_Node* root;

	void insertElement(BST_Node* parent, BST_Node* node);

public:
	BST();
	void remove();
	void insert(BST_Node* node);
	BST_Node* search(int element);
};

////////////////////////////////////////////////////////////
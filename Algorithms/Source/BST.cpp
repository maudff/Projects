#include "BST.h"

//////////////////////////////////////////////////////////////////

BST::BST() : root(NULL)
{

}

//////////////////////////////////////////////////////////////////

void BST::insert(BST_Node* node)
{
	BST_Node* temp;

	if (root == NULL)
	{
		root = node;
		return;
	}

	 temp = root;

	if (temp->getElement() < node->getElement())
	{
		if (temp->getRightNode() != NULL)
		{
			temp = temp->getRightNode();
			insertElement(node, temp);
		}
		else
		{
			temp->setRight(node);
		}
	}
	else
	{		
		if (temp->getLeftNode() != NULL)
		{
			temp = temp->getLeftNode();
			insertElement(node, temp);
		}
		else
		{
			temp->setLeft(node);
		}
	}
}

//////////////////////////////////////////////////////////////////

void BST::insertElement( BST_Node* node, BST_Node* parent = NULL)
{

	while (true)
	{
		if (parent->getElement() < node->getElement())
		{
			if (parent->getRightNode() == NULL)
			{
				parent->setRight(node);
				break;
			}
			else
			{
				parent = parent->getRightNode();
				continue;
			}
		}
		else
		{
			if (parent->getLeftNode() == NULL)
			{
				parent->setLeft(node);
				break;
			}
			else
			{
				parent = parent->getLeftNode();
				continue;
			}
		}
	}
}


//////////////////////////////////////////////////////////////////
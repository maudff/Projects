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

	if (temp->m_element < node->m_element)
	{
		if (temp->m_right!= NULL)
		{
			temp = temp->m_right;
			insertElement(node, temp);
		}
		else
		{
			temp->m_right = node;
		}
	}
	else
	{
		if (temp->m_left != NULL)
		{
			temp = temp->m_left;
			insertElement(node, temp);
		}
		else
		{
			temp->m_left = node;
		}
	}
}

//////////////////////////////////////////////////////////////////

void BST::insertElement(BST_Node* node, BST_Node* parent = NULL)
{

	while (true)
	{
		if (parent->m_element < node->m_element)
		{
			if (parent->m_right == NULL)
			{
				parent->m_right = node;
				break;
			}
			else
			{
				parent = parent->m_right;
				continue;
			}
		}
		else
		{
			if (parent->m_left == NULL)
			{
				parent->m_left = node;
				break;
			}
			else
			{
				parent = parent->m_left;
				continue;
			}
		}
	}
}


//////////////////////////////////////////////////////////////////
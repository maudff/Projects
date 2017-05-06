#pragma once
#include <iostream>

/////////////////////////////////////////////////////////////

class BST_Node
{

private:
	BST_Node*		m_left;
	BST_Node*		m_right;
	int				m_element;

public:
	BST_Node(int element);
	int				getElement() const; 
	BST_Node*		getLeftNode() const;
	BST_Node*		getRightNode() const;  
	void			setLeft(BST_Node* node);
	void			setRight(BST_Node* node);
};

/////////////////////////////////////////////////////////////
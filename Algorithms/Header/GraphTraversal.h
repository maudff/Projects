#pragma once
#include "AdjacentList.h"
#include "NQueue.h"
#include "Stack.h"

//////////////////////////////////////////////////////////////////////

class GraphTraversal
{
public:
	static void DepthFirstSearch(AdjacentList& list, Node& source);
	static void BreadthFirstSearch(AdjacentList* list, Node* source);
};

//////////////////////////////////////////////////////////////////////
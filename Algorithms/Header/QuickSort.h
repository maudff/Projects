#pragma once

//////////////////////////////////////////////////////////////////////

class Quicksort
{
public:
	static void quicksort(int* a, int start, int end);

private:
	static int partition(int* a, int start, int end);
};

//////////////////////////////////////////////////////////////////////
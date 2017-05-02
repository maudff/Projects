#include "QuickSort.h"

//////////////////////////////////////////////////////////////////////////

void Quicksort::quicksort(int* a, int start, int end)
{
	int q;

	if (start < end)
	{
		q = Quicksort::partition(a, start, end);
		quicksort(a, start, q);
		quicksort(a, q + 1, end);
	}
}

//////////////////////////////////////////////////////////////////////////

int Quicksort::partition(int* a, int start, int end)
{
	int pivot = a[start];
	int i = start;
	int j = end;
	int temp;

	while (true)
	{
		while (a[i] < pivot && a[i] != pivot)
		{
			i++;
		}

		while (a[j] > pivot && a[j] != pivot)
		{
			j--;
		}
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		else
		{
			return j;
		}

	}
}

//////////////////////////////////////////////////////////////////////////
#include "InsertionSort.h"

void InsertionSort::insertionSort(int* arr, int size)
{
	unsigned currElement;
	unsigned lastElement;
	unsigned nextElement;
	unsigned subList = 0;
	int j = 0;
	unsigned targetElement = 0;

	for (int i = 0; i < size; i++)
	{
		if (i + 1 <= size - 1)
		{
			currElement = arr[i];
			nextElement = arr[i + 1];

			if (currElement > nextElement)
			{
				arr[i] = nextElement;
				arr[i + 1] = currElement;
				j = i;
				insertElementInSortedSubList(j, arr);
			}
		}
		else
		{
			currElement = arr[i];
			lastElement = arr[i - 1];

			if (currElement < lastElement)
			{
				arr[i] = lastElement;
				arr[i - 1] = currElement;
				j = i - 1;
				insertElementInSortedSubList(j, arr);
			}
		}
	}
}

void InsertionSort::insertElementInSortedSubList(int j, int* arr)
{
	unsigned nextElement;

	while (j - 1 >= 0)
	{
		if (arr[j] < arr[j - 1])
		{
			nextElement = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = nextElement;
			--j;
		}
		else
		{
			j = 0;
		}
	}
}
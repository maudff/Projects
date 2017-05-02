#include "BinarySearchAlgorithm.h"

int BSA::BinarySearchAlgorithm( const int* arr, unsigned n, int value )
{
	int midpoint = 0;
	int numberOfElements = n;
	int lowerBound = 0;
	int upperBound = n;
	int currValue = 0;

	while (numberOfElements > 0)
	{
		midpoint = ( lowerBound + upperBound) / 2;

		currValue = arr[midpoint];

		if (arr[midpoint] == value)
		{
			std::cout << arr[midpoint] << " is in the Array" << std::endl;
			return arr[midpoint];
		}
		else if( arr[midpoint] > value )
		{
			upperBound = midpoint - 1;
		}
		else
		{
			lowerBound = midpoint + 1;
		}

		if (numberOfElements % 2 == 0)
		{
			numberOfElements -= numberOfElements / 2;
		}
		else
		{
			numberOfElements -= ( numberOfElements / 2 ) + 1;
		}

		
	}

	std::cout << "Number isj not in Array" << std::endl;
	return 0;
}
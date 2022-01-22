#include "search_algos.h"
/**
* interpolation_search - Search Algorithms
* @array: Pointer to first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Description: A function that searches for a
* value in a sorted array of integers using the
* Interpolation search algorithm.
* Return: The first index where value is located
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int) size - 1, mid, numerator;

	while ((array[high] != array[low]) &&
		(value >= array[low]) && (value <= array[high]))
	{
		numerator = (value - array[low]) * (high - low);
		mid = low + (numerator / (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;

		else if (value < array[mid])
			high = mid - 1;

		else
			return (mid);
	}

	if (value == array[low])
		return (low);

	else
	{
		printf("Value checked array[%d] is out of range\n", numerator);
		return (-1);
	}
}

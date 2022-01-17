#include "search_algos.h"
/**
* linear_search - C - Search Algorithms
* @array: Pointer to first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Description: A function that searches for a
* value in an array of integers using the
* Linear search algorithm
* Return: The first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[i]);
		if (array[i] == value)
		{
			return (index);
		}
		index++;
	}

	return (-1);
}

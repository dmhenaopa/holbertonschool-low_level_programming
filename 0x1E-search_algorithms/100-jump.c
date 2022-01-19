#include "search_algos.h"
/**
* jump_search - Search Algorithms
* @array: Pointer to first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Description: function that searches for a
* value in a sorted array of integers using
* the Jump search algorithm.
* Return: The first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	double step = sqrt((int) size);
	size_t i, j;
	int lower, final_value;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i = i + step)
	{
		lower = i - (int) step;
		if (value == array[i])
		{
			printf("Value found between indexes [%d] and [%lu]\n", lower, i);
			for (j = i - step; j <= i; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
		else if (array[i] < value)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		else if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%lu]\n", lower, i);
			for (j = i - step; j <= i; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
	}
	final_value = i - (int) step;
	printf("Value found between indexes [%d] and [%lu]\n", final_value, i);
	printf("Value checked array[%d] = [%d]\n", final_value, array[final_value]);
	return (-1);
}

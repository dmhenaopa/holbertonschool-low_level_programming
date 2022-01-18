#include "search_algos.h"
/**
* binary_search - C - Search Algorithms
* @array: Pointer to first element of the array
* @size: the number of elements in array
* @value: the value to search for
*
* Description: A function that searches for a
* value in an array of integers using the
* Binary search algorithm
* Return: The first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t central, lower = 0, higher = size - 1;
	int central_value;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, lower, higher);
	while (lower <= higher)
	{
		/* Calculate central index */
		central = (lower + higher) / 2;
		central_value = array[central];

		if (value == central_value)
			return (central);

		else if (value < central_value)
			higher = central - 1;

		else
			lower = central + 1;

		if (lower <= higher)
			print_array(array, lower, higher);
	}
	return (-1);
}


/**
* print_array - C - Search Algorithms
* @array: Pointer to first element of the array
* @lower: lower index
* @higher: top index
*
* Description: A function that prints the array
*/

void print_array(int *array, size_t lower, size_t higher)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lower; i <= higher; i++)
	{
		printf("%d", array[i]);
		if (i < higher)
			printf(", ");
	}
	printf("\n");
}

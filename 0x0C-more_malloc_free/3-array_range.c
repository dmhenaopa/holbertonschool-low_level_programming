#include <stdlib.h>
#include "holberton.h"
/**
* array_range - C - More malloc, free
* @min: minimum value
* @max: maximum value
*
* Description: Write a function that creates
* an array of integers.
* Return: Pointer to the newly created array or
* NULL if min > max or malloc fails.
*/
int *array_range(int min, int max)
{
	int difference, *pointer, i;

	if (min > max)
	{
		return (NULL);
	}

	difference = (max - min) + 1;
	pointer = malloc(sizeof(int) * difference);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		*(pointer + i) = min;
	}

	return (pointer);
}

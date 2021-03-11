#include "function_pointers.h"
/**
* int_index - C - Function pointers
* @array: integers
* @size: number of elements in the array
* @cmp: pointer to the function
*
* Description: Write a function that searches for an integer.
* where size is the number of elements in the array array
* cmp is a pointer to the function to be used to compare values
* int_index returns the index of the first element for which
* the cmp function does not return 0.
* Return: Returns the index of the first element for which
* the cmp function does not return 0. If no element matches,
* return -1. If size <= 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int answer;

	/*Handling errors*/
	if (size <= 0 || array == NULL || cmp == NULL)
		answer = -1;

	/*
	* This must be done everytime with pointers
	* verificate pointers aren't NULL
	*/
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
			{
				answer = i;
				break;
			}
		}

		/* If not match between array and cmp*/
		if (i == size && answer == 0)
			answer = -1;
	}

	return (answer);
}

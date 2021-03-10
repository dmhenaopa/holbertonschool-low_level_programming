#include "function_pointers.h"
/**
* array_iterator - C - Function pointers
* @array: elements
* @size: size of array
* @action: pointer to function
*
* Description: A unction that executes a function
* given as a parameter on each element of an array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL) /*Handling possible errors*/
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}

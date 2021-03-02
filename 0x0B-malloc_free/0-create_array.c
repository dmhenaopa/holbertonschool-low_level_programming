#include <stdlib.h>
#include "holberton.h"
/**
* create_array - C - malloc, free
* @size: Size of array
* @c: Character to initialize array
*
* Description: Function that creates an array of chars,
* and initializes it with a specific char.
* Return: Char pointer or NULL if size = 0
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		array = NULL;
	}

	array = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	return (array);
}

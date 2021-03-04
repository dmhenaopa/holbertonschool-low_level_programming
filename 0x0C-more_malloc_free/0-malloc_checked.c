#include <stdlib.h>
#include "holberton.h"
/**
* malloc_checked - C - More malloc, free
* @b: number of bytes to be allocated
*
* Description: A function that allocates memory using
* malloc.
* Return: A pointer to the memory. If fails terminate
* with a status value of 98.
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	/*If array is NULL - return 98*/
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}

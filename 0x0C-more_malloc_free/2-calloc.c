#include <stdlib.h>
#include "holberton.h"
/**
* _calloc - C - More malloc, free
* @nmemb: number of items to be localized
* @size: size of the elements
*
* Description: Write a function that allocates
* memory for an array, using malloc.
* Return: A pointer to the allocated memory, NULL if
* input parameters are equal to zero or if malloc fails.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	/*Possible errors*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	/*If array is NULL -return NULL*/
	if (pointer == NULL)
	{
		return (NULL);
	}

	/*Zero-initialized memory block*/
	for (i = 0; i < nmemb * size; i++)
	{
		*(pointer + i) = 0;
	}
	return (pointer);
}

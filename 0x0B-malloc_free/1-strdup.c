#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - C - malloc, free
* @str: string given as a parameter.
*
* Description: A function that returns a pointer to a
* newly allocated space in memory, which contains a copy
* of the string given as a parameter.
* Return: A pointer to the duplicated string or NULL if
* insufficient memory was available.
*/
char *_strdup(char *str)
{
	int i;
	int counter;
	char *copied_string;

	counter = 0;

	/*Determine the lenght of the string*/
	for (i = 0; *(str + i) != '\0'; i++)
	{
		counter++;
	}

	/*Assign memory space with malloc*/
	copied_string = malloc(counter * sizeof(char));

	/*Copy the string to copied_string variable*/
	for (i = 0; i < counter; i++)
	{
		*(copied_string + i) = *(str + i);
	}

	return (copied_string);
}

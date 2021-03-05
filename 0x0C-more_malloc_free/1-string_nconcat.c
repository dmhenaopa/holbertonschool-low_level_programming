#include <stdlib.h>
#include "holberton.h"
/**
* arrayCounter - C - malloc, free
* @string: Input string
*
* Description: Function that found the size of string.
* Return: Size of the string.
*/
unsigned int arrayCounter(char *string)
{
	unsigned int i, counter;

	counter = 0;
	if (string == NULL)
		string = "";

	for (i = 0; *(string + i) != '\0'; i++)
		counter++;

	return (counter);
}

/**
* string_nconcat - C - More malloc, free
* @s1: String to concatenates
* @s2: String to concatenates
* @n: bytes of s2 to concatenate
*
* Description: Write a function that concatenates two strings.
* Return: Pointer to strings concatenates. NULL if function
* fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer_concat;
	unsigned int i, j, s1_size, s2_size;

	if (s1 == NULL)
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	s1_size = arrayCounter(s1);
	s2_size = arrayCounter(s2);

	/* + 1 for null character at the end of the array*/
	if (n < s2_size)
		pointer_concat = malloc((s1_size + n + 1) * sizeof(char));

	else if (n >= s2_size)
		pointer_concat = malloc((s1_size + s2_size) * sizeof(char));

	if (pointer_concat == NULL)
		return (NULL);

	/*Concatenates s1 and s2*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(pointer_concat + i) = *(s1 + i);

	if (n < s2_size)
	{
		for (j = 0; *(s2 + j) != '\0' && j < n; j++, i++)
			*(pointer_concat + i) = *(s2 + j);

		*(pointer_concat + i) = '\0';
	}

	else if (n >= s2_size)
		for (j = 0; *(s2 + j) != '\0'; j++, i++)
			*(pointer_concat + i) = *(s2 + j);

	return (pointer_concat);
}

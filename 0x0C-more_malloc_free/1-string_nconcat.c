#include <stdlib.h>
#include "holberton.h"
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
	unsigned int i, j, k, s1_size, s2_size;

	/*If NULL -> treat as an empty string*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*To know the size of the first string s1 and s2*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		s1_size = i;

	for (i = 0; *(s2 + i) != '\0'; i++)
		s2_size = i;

	/* + 1 for null character at the end of the array*/
	if (n < s2_size)
		pointer_concat = malloc((s1_size + n + 1) * sizeof(char));
	else if (n >= s2_size)
		pointer_concat = malloc((s1_size + s2_size + 1) * sizeof(char));

	if (pointer_concat == NULL)
		return (NULL);

	/*Concatenates s1 and s2*/
	for (j = 0; *(s1 + j) != '\0'; j++)
		*(pointer_concat + j) = *(s1 + j);

	if (n < s2_size)
		for (k = 0; *(s2 + k) != '\0' && k < n; k++, j++)
			*(pointer_concat + j) = *(s2 + k);

	else if (n >= s2_size)
		for (k = 0; *(s2 + k) != '\0'; k++, j++)
			*(pointer_concat + j) = *(s2 + k);

	*(pointer_concat + j) = '\0';
	return (pointer_concat);
}

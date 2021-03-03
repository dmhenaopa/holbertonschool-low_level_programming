#include <stdlib.h>
#include "holberton.h"
/**
* arraysCounter - C - malloc, free
* @s1: first string
* @s2: second string
*
* Description: Function that sums the size of two strings.
* Return: Sum of the size of the two strings.
*/
int arraysCounter(char *s1, char *s2)
{
	int i;
	int count1;
	int count2;
	int total_size;

	count1 = 0;
	count2 = 0;
	total_size = 0;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
		{
			s1 = "";
		}

		else if (s2 == NULL)
		{
			s2 = "";
		}
	}

	/*Determine the size of both strings*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		count1++;

	for (i = 0; *(s2 + i) != '\0'; i++)
		count2++;

	total_size = count1 + count2;
	return (total_size);
}

/**
* str_concat - C - malloc, free
* @s1: first string
* @s2: second string
*
* Description: A function that concatenates two strings.
* Return: Pointer to concatenated strings, or NULL if
* terminated
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int total_size;
	char *concat_string;

	total_size = arraysCounter(s1, s2);

	/*Assignation of memory*/
	concat_string = malloc(total_size * sizeof(char));

	/*If insufficient memory was available*/
	if (!concat_string)
	{
		return (NULL);
	}

	else
	{
		/*Copy both strings in the new array*/
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(concat_string + i) = *(s1 + i);
		}

		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			*(concat_string + (i + j)) = *(s2 + j);
		}
	}

	return (concat_string);
}

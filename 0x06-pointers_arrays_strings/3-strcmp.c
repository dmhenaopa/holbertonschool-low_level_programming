#include "holberton.h"
/**
* _strcmp - C - More pointers, arrays and strings
* @s1: Input character to compare.
* @s2: Input character to compare.
*
* Description: Write a function that compares two strings.
* Return: number with value of compare.
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int compare;

	compare = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			compare = 0;
		}

		else
		{
			compare = s1[i] - s2[i];
			break;
		}
	}
	return (compare);
}

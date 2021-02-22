#include "holberton.h"
/**
* _strchr - C - Even more pointers, arrays and strings
* @s: string in which character is searched
* @c: character that is searched in the string
*
* Description: Write a function that locates a character in a string.
* Return: A pointer to the first occurrence of the character c in
* the string s, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
	int i;
	int NULL = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			s += i;
			break;
		}

		else if (*(s + i) != c)
		{
			continue;
		}

	}

	if (*(s + i) == '\0')
	{
		*s = NULL;
	}
	return (s);
}

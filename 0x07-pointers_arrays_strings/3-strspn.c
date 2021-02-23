#include "holberton.h"
/**
* _strspn - C - Even more pointers, arrays and strings
* @s: Initial segment, to be scanned
* @accept: Characer containing the characters to match
*
* Description: Write a function that gets the length of a prefix substring.
* Return: Number of bytes in the initial segment of s which consist
* only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	if (*(s + i) == '\0' || *(accept + j) == '\0')
	{
		return (count);
	}

	else
	{
		for (i = 0; *(s + i) != ' '; i++)
		{
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
				{
					count++;
				}
			}
		}
	}
	return (count);
}

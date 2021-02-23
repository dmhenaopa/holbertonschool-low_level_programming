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
	int i;
	int j;
	unsigned int count;

	count = 0;
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
	return (count);
}

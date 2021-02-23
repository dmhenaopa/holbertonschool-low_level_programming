#include "holberton.h"
/**
* _strstr - C - Even more pointers, arrays and strings
* @haystack: Input string to be scanned
* @needle: Substring containing the characters to match
*
* Description: Write a function that searches a string
* for any of a set of bytes.
* Return: A pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				haystack += i;
			}
			break;
		}
	}

	return (haystack);
}

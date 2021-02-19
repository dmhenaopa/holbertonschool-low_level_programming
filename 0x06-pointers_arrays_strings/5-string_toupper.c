#include "holberton.h"
/**
* string_toupper -C - More pointers, arrays and strings
* @s: lowercase letters
*
* Description: Write a function that changes all lowercase
* letters of a string to uppercase.
* Return: String to uppercase.
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}

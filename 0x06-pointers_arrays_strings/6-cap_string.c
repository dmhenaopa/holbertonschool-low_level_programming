#include "holberton.h"
/**
* cap_string - C - More pointers, arrays and strings
* @s: Input string
*
* Description: Write a function that capitalizes all words of a string.
* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ",
* (, ), {, and }
* Return: String with all words capitalized
*/
char *cap_string(char *s)
{
	int i;
	int j;
	char separators[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (*(s + i) == separators[j])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				{
					*(s + i + 1) = *(s + i + 1) - 32;
				}

				else
				{
					continue;
				}
			}

			else if (*(s + i) != separators[j])
			{
				if (*(s + i + 2) >= 65 && *(s + i + 2) <= 90)
				{
					*(s + i + 2) = *(s + i + 2) + 32;
				}

				else
				{
					continue;
				}
			}
		}
	}
	return (s);
}

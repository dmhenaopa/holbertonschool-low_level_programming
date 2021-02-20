#include "holberton.h"
/**
* leet- C - More pointers, arrays and strings
* @s: Input string
*
* Description: Write a function that encodes a string into 1337.
* Return: string with switch characters.
*/
char *leet(char *s)
{
	int i;
	int j;
	char letter_array[] = {'a', 'A', 'e', 'E', 'o', 'O',
				't', 'T', 'l', 'L', '\0'};
	char number_array[] = {'4', '4', '3', '3', '0', '0',
				'7', '7', '1', '1', '\0'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(letter_array + j) != '\0'; j++)
		{
			if (*(s + i) == *(letter_array + j))
			{
				*(s + i) = *(number_array + j);
			}
		}
	}
	return (s);
}

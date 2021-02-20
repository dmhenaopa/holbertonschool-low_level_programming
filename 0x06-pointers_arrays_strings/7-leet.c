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
	int i = 0;
	int j = 0;
	char letter_array[] = {"aAeEoOtTlL"};
	char number_array[] = {"4433007711"};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(letter_array + j) != '\0'; j++)
		{
			if (*(s + i) == *(letter_array + j))
				*(s + i) = *(number_array + j);
		}
	}
	return (s);
}

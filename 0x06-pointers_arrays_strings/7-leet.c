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

	while (*(s + i) != '\0')
	{
		while (*(letter_array + j) != '\0')
		{
			if (*(s + i) == *(letter_array + j))
			{
				*(s + i) = *(number_array + j);
			}
			j++
		}
		i++;
	}
	return (s);
}

#include "holberton.h"
/**
* binary_to_uint - C - Bit manipulation
* @b: input binary number
*
* Description: A function that converts a binary number to an unsigned int.
* Return: The converted number, 0 if there is one or
* more chars in the string b that is not 0 or 1 or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	int i, length_string, index_array;
	unsigned int answer;

	length_string = 0;
	answer = 0;
	/*Step1: Check if b string are NULL*/
	if (b == NULL)
	{
		return (0);
	}

	/*Step2: Check if all the characters are only 0 or 1 */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		length_string++;
	}
	index_array = length_string - 1;

	/*Step3: Traverse the string and sum the operation*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			/*make the left shift (<<) operation -> a x 2^b*/
			answer += (0 << index_array);
		}
		else
		{
			answer += (1 << index_array);
		}
		index_array--;
	}
	return (answer);
}

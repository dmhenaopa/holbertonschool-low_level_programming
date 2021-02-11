#include "holberton.h"
/**
* _isupper - C - More functions, more nested loops
* @c: number of the character to solve
*
* Description: Write a function that checks for uppercase character
* Return: 1 if c is uppercase character. 0 otherwise.
*/
int _isupper(int c)
{
	int answer;

	if (c >= 65 && c <= 90)
	{
		answer = 1;
	}
	else
	{
		answer = 0;
	}

	return (answer);
}

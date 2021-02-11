#include "holberton.h"
/**
* _isdigit - C - More functions, more nested loops
* @c: input number
*
* Description: Write a function that checks for a digit (0 through 9).
* Return: Returns 1 if c is a digit. 0 otherwise.
*/
int _isdigit(int c)
{
	int answer;

	if (c >= 48 && c <= 57)
	{
		answer = 1;
	}
	else
	{
		answer = 0;
	}

	return (answer);
}

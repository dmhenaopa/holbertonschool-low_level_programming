#include "holberton.h"
/**
* _isalpha - C - Functions, nested loops
* @c: input character
*
* Description: Write a function that checks
* for alphabetic character.
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	int answer;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		answer = 1;
	}
	else
	{
		answer = 0;
	}
	return (answer);
}

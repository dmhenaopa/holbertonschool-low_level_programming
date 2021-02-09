#include "holberton.h"
/**
* _islower - C - Functions, nested loops task
* @c: Input character
*
* Description: Write a function that checks for
* lowercase character.
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
	int answer;

	if (c >= 65 && c <= 90)
	{
		answer = 0;
	}

	if (c >= 97 && c <= 122)
	{
		answer = 1;
	}
	return (answer);
	_putchar('\n');
}

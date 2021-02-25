#include "holberton.h"
/**
* _puts_recursion - C - Recursion
* @s: String to be printed
*
* Description: Write a function that prints a string, followed by a new line.
*/
void _puts_recursion(char *s)
{
	/*Can be done with 0 without ' or '\0'*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	/*Should be s+1 and not s++ -> segmentation fault*/
	_puts_recursion(s + 1);
}

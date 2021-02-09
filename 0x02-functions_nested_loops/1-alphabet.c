#include "holberton.h"
/**
* print_alphabet - C - Functions, nested loops task
*
* Description: Write a function that prints the alphabet,
* in lowercase, followed by a new line.
* Return: 0 if everything is Ok
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

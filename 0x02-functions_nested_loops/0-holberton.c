#include "holberton.h"
/**
* main - C - Functions, nested loops task
*
* Description: Print some characters without use of printf
* Return: 0 if everything is Ok
*/
int main(void)
{
	char ch[10] = { 'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(ch[i]);
	}
	return (0);
}

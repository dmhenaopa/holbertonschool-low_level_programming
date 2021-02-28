#include <stdio.h>
#include "holberton.h"
/**
* main - C - argc, argv
* @argc: arguments count
* @argv: arguments vector
*
* Description: A program that prints the
* number of arguments passed into it.
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int i;
	int counter;

	counter = -1;
	for (i = 0; argv[i] && i < argc; i++)
	{
		counter++;
	}

	printf("%d\n", counter);
	return (0);
}

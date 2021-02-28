#include <stdio.h>
#include "holberton.h"
/**
* main - C - argc, argv
* @argc: arguments count
* @argv: arguments vector
*
* Description: A program that prints
* all arguments it receives.
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

#include <stdio.h>
#include "holberton.h"
/**
* main - C - argc, argv
* @argc: arguments count
* @argv: arguments vector
*
* Description: A program that prints its name,
* followed by a new line.
* Return: 0 - success
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

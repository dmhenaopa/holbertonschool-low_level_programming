#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* main - C - argc, argv
* @argc: arguments count
* @argv: arguments vector
*
* Description: A program that multiplies two numbers.
* Return: 0 if everything is ok (success) or 1 if the
* program does not receive two arguments.
*/
int main(int argc, char **argv)
{
	int multiplication;
	int answer;

	if (argc == 3)
	{
		multiplication = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiplication);
		answer = 0;
	}

	else
	{
		printf("Error\n");
		answer = 1;
	}
	return (answer);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* main - C - argc, argv
* @argc: argument count
* @argv: argument vector
*
* Description: Write a program that
* adds positive numbers.
* Return: 0 - success or 1 if number contains
* symbols that are not digits.
*/
int main(int argc, char *argv[])
{
	int i;
	int answer;
	int sumatory;
	int counter;

	sumatory = 0;
	counter = 0;
	if (argc == 1)
	{
		printf("0\n");
	}

	else if (argc >= 1)
	{
		for (i = 1; argv[i] != '\0'; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				answer = 1;
				break;
			}

			else if (*argv[i] >= '0' || *argv[i] <= '9')
			{
				counter++;
			}
		}

		for (i = 1; argv[i] != '\0'; i++)
		{
			if (counter == (argc - 1))
			{
				sumatory += atoi(argv[i]);
				answer = 0;
			}
		}

		if (counter == (argc - 1))
		{	
			printf("%d\n", sumatory);
		}
	}
	return (answer);
}

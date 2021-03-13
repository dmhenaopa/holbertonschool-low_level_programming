#include "3-calc.h"

/**
* main - C - Function pointers
* @argc: Number of arguments
* @argv: Array of 2 pointers defined by user
*
* Description: Main function
* Return: integer 0 if everything is ok. 1 otherwise
*/
int main(int argc, char **argv)
{

	if (argc != 4 || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
		*argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

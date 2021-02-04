#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Print wheter the number stored in
* variable n is positive or negative
* Return: 0 if everything is OK
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}

	return (0);
}

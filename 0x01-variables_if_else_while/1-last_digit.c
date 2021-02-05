#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Print the last digit of the
* number stored in the variable n.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;
	if (last >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else
	{
		if (last < 6 && last != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}

	}
	return (0);
}

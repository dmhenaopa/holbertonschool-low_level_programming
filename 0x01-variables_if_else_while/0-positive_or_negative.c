#include <stdlib.h>
#include <time.h>
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
		printf("%d/n is zero", n);
	}

	else
	{
		if (n > 0)
		{
			printf("%d/n is negative", n);
		}
		else
		{
			printf("%d/n is negative", n);
		}
	}

	return (0);
}

#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Prints all single digit
* numbers of base 10 starting from 0.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == 57 && j == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

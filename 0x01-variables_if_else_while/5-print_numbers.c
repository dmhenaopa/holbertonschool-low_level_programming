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
	int number[10];
	int i;

	for (i = 0; i <= 9; i++)
	{
		number[i] = i;
		printf("%d", number[i]);
	}
	putchar('\n');
	return (0);
}

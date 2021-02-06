#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Prints all the numbers of
* base 16 in lowercase, followed by a new line.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

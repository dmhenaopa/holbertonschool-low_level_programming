#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Prints the alphabet in
* reverse, lowercase.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	int i;
	char start;
	char end;

	start = 'z';
	end = 'a';

	for (i = start ; i >= end ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

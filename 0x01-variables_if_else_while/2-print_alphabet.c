#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Prints the alphabet in
* lower case.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	char letter;

	for (letter = 'a' ; letter  <= 'z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

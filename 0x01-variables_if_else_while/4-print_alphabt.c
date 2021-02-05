#include <stdio.h>
/**
* main - Variables, if, else, while task
*
* Description: Prints the alphabet in
* lower case, all the letters except q and e.
* Return: 0 if everything is OK
*/
int main(void)
{
	/* Variables */
	char letter;

	for (letter = 'a' ; letter  <= 'z' ; letter++)
	{
		if (!(letter == 'e') && !(letter == 'q'))
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

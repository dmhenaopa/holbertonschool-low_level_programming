#include <stdio.h>
/**
* main - C - Preprocessor
*
* Description: A program that prints the name of
* the file it was compiled from, followed by a new line.
* Return: 0 if it is Ok. Otherwise 1.
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

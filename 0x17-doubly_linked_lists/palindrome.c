#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*/

int main()
{
	int palindrome, i, j, multiplication;
	char s[5];

	palindrome = 0;
	for (i = 999; i >= 910; i--)
	{
		for (j = 999; j >= 910; j--)
		{
			multiplication = i * j;
			sprintf(s, "%d", multiplication);
			if (s[0] == s[5] &&  s[1] == s[4] && s[2] == s[3])
			{
				palindrome = atoi(s);
			}
		}
	}
	printf("%d\n", palindrome);
	return (palindrome);
}

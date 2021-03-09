#include <stdio.h>
#include "dog.h"
/**
* print_dog - C - Structures, typedef
* @d: Pointer to dog struct
*
* Description: Write a function that prints a struct dog
*/
void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);

		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", (*d).age);

		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);

		else
			printf("Owner: (nil)\n");
	}
}

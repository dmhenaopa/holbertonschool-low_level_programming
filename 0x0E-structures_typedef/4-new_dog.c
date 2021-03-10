#include "dog.h"
#include <stdlib.h>
/**
* new_dog - C - Structures, typedef
* @name: Pointer to name of new dog
* @age: Age of new dog
* @owner: Pointer owner
*
* Description: A function that creates a new dog
* Return: Dog information
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_new_dog;
	int i, j;

	/*i = strlen(name)*/
	for (i = 0; *(name + i) != '\0'; i++)
	{
	}

	/*j = strlen(owner)*/
	for (j = 0; *(owner + j) != '\0'; j++)
	{
	}

	new_new_dog = malloc(sizeof(dog_t));
	(*new_new_dog).name = malloc((i + 1) * sizeof(char));
	(*new_new_dog).owner = malloc((j + 1) * sizeof(char));

	for (i = 0; *(name + i) != '\0'; i++)
		(*new_new_dog).name[i] = *(name + i);
	(*new_new_dog).name[i] = '\0';

	for (j = 0; *(owner + j) != '\0'; j++)
		(*new_new_dog).owner[j] = *(owner + j);
	(*new_new_dog).owner[j] = '\0';

        if ((*new_new_dog).name == NULL)
                free((*new_new_dog).name);

        if ((*new_new_dog).owner == NULL)
                free((*new_new_dog).owner);

	if (new_new_dog == NULL)
	{
		free(new_new_dog);
		return (NULL);
	}

	/*(*new_new_dog).name = name;*/
	(*new_new_dog).age = age;
	/*(*new_new_dog).owner = owner;*/
	return (new_new_dog);
}

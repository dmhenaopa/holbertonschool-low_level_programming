#include "dog.h"
/**
* init_dog - C - Structures, typedef
* @d: Pointer to my_dog
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
*
* Description: A function that initialize a
* variable of type struct dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		/*It's the same if use d->name, d->age and d->owner*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

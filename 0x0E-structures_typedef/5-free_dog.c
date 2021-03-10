#include "dog.h"
#include <stdlib.h>
/**
* free_dog - C - Structures, typedef
* @d: pointer of structure dog_t to be free
*
* Description: A function that frees dogs.
*/
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}

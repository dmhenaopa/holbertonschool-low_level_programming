#ifndef DOG_H
#define DOG_H
/**
* struct dog -C - Structures, typedef
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
*
* Description: A new type struct dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Define a new data type dog_t*/
typedef struct dog dog_t;

/*Prototype to initialize type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/*Prototypes*/
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

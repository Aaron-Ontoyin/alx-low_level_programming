#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes structure, dog
 * @d: pointer to dog struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

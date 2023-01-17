#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(d);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(d);
		free(name);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}


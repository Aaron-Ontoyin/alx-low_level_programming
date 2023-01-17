#ifndef DOG_H
#define DOG_H

/**
 * struct dog - blueprint for a puppy
 * @name: pointer to name
 * @age: age of puppy
 * @owner: pointer to owner of puppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

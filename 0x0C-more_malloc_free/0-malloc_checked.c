#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer the allocated memory, 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

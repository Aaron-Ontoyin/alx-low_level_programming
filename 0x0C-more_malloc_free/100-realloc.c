#include "main.h"
#include <stdlib.h>


/**
 * _realloc - reallocates memory using malloc and free
 *
 * * Description: allocates a new memory block for the pointer,
 * using the contents from the original pointer, copiyng up to the
 * minimum of the old and new sizes.
 * If new_size > old_size, the added memory should not be intialized
 * If new_size == old_size, returns the same pointer
 * If ptr == NULL, call is equivalent to malloc(new_size)
 * If new_size == 0 and ptr != NULL, call is equivalent to free(ptr),
 *  and return NULL.
 *
 * @ptr: pointer to memory block
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned char *temp_ptr = ptr;
	unsigned int n = (old_size > new_size ? old_size : new_size);
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = (char *) malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (nptr);

	for (i = 0; i < n; i++)
		temp_ptr[i] = nptr[i];

	free(temp_ptr);
	return (nptr);
}

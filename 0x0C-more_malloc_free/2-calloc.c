#include "main.h"
#include <stdlib.h>


/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: Pointer to memory, NULL if fails or nmemb = 0 or size = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arrmem;
	unsigned int a = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arrmem = malloc(nmemb * size);
	if (arrmem == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		arrmem[a] = 0;

	return (arrmem);
}

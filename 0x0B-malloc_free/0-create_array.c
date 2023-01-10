#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: number of chars to be contained
 * @c: char to be used to fill array
 * Return: pointer to array created; NULL if failed or size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

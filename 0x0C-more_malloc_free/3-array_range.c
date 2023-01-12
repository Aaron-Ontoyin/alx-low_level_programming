#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: least element in the array
 * @max: largest element in the array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (max >= min)
		arr[i++] = min++;

	return (arr);
}

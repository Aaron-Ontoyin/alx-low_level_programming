#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - creates a two dimensional array of ints; array init with 0's
 * @width: with of array
 * @height: height of array
 * Return: pointer to the array; NULL on failure or either
 * width or height os neg or 0
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;
	
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);

			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

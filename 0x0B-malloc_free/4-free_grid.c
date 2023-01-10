#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees memory created by alloc_grid
 * @grid: a 2d array created by alloc_grid
 * @height: hight of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}

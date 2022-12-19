#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints first n elements of an array of
 * integers sep by commas, ended by a new line
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int idx;

	if (n > 0)
	{
		for (idx = 0; idx < n - 1; idx++)
		{
			printf("%d, ", *(a + idx));
		}
		printf("%d\n", *(a + n - 1));
	} else
	{
		_putchar('\n');
	}

}

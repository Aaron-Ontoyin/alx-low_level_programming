#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of the two diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int  j = 0;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size)
	{
		sum1 += a[i + j];
		sum2 += a[i + size - j - 1];

		j++;
	}

	printf("%d, %d\n", sum1, sum2);
}

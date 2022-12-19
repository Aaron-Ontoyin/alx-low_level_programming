#include "main.h"

/**
 * swap_int - Swaps the values of two ints
 * @a: pointer to first int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

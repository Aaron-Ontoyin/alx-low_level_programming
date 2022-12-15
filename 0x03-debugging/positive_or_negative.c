#include <stdio.h>
#include "main.h"

/**
 * positive_or_negatvie - number checker
 * Description: Checks if a number is positive, negative or zero
 * @n: Number to be checked
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}

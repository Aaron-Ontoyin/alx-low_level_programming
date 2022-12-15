#include "main.h"

/**
 * print_number - Prints a number
 * @n: Number to print
 */
void print_number(int n)
{
	int ll = 10;
	int num_dgits = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / ll > 0)
	{
		ll *= 10;
		num_dgits++;
	}

	if (num_dgits == 1)
	{
		_putchar(n + '0');
	} else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}

#include "main.h"

/**
 * print_formatted_digits - Prints digits of an int that has more than 1 digit
 * This function in't organise for general use
 *@val: The inter with more than 1 digit
 */
void print_formatted_digits(int val)
{
	int rmder1 = val % 10;
	int rmder2 = val % 100;

	/* first digit if it's 2 digit num */
	int fdg2 = ((val - rmder1) / 10) + '0';

	/* second digit if it's 3 digit num */
	int sdg3 = ((rmder2 - rmder1) / 10) + '0';
	/* first digit if it's 3 digit num */
	int fdg3 = ((val - rmder2) / 100) + '0';

	if (val > 99) /* If it's 3 digits */
	{
		_putchar(fdg3);
		_putchar(sdg3);
	} else /* Then it's 2 digits */
	{
		_putchar(fdg2);
	}

	/* Last digit always common */
	_putchar(rmder1 + '0');

}

/**
 * print_zeros - Printss first row zeros of a time table
 *@n: limti of time table
 */
void print_zeros(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		if (a < n)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print_appropriate_space - Prints a a comma ans a number of space due
 * to how many didits a number is
 *@val: The used to determine number of spaces
 */
void print_appropriate_space(int val)
{
	_putchar(',');
	if (val > 9)
	{
		_putchar(' ');

		if (val <= 99)
		{
			_putchar(' ');
		}

	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}

}

/**
 * print_times_table - prints times table from 0 to n
 *@n: limit of times table
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int a;
		int b;

		print_zeros(n);
		for (a = 1; a <= n; a++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			for (b = 1; b <= n; b++)
			{
				int val = a * b;

				if (val > 9) /* If more than 1 digit */
				{
					print_formatted_digits(val);

				} else
				{
					_putchar(val + '0');
				}
				if (b < n)
				{
					print_appropriate_space(val);
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * times_table -prints times table from 0 to 9
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		if (a < 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	for (a = 1; a < 10; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 1; b < 10; b++)
		{
			if ((a * b) > 9)
			{
				int rmder = (a * b) % 10;

				_putchar((((a * b) - rmder) / 10) + '0');
				_putchar(rmder + '0');
			} else {
				_putchar(' ');
				_putchar((a * b) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

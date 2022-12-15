#include "main.h"

/**
 * more_numbers - prints first 14 numbers 10 times
 */
void more_numbers(void)
{
	int i;
	int cntr;

	for (cntr = 0; cntr < 10; cntr++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}

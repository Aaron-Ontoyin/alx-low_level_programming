#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a < 24)
	{
		while (b < 60)
		{
			_putchar(((a - (a % 10)) / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar(((b - (b % 10)) / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		b = 0;
		a++;
	}

}

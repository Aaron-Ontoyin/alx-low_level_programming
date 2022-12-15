#include "main.h"

/**
 * print_diagonal - prints a diagonal of height n
 * @n: height of diagonal
 */
void print_diagonal(int n)
{
	int line_at = 0;
	int cntr;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (n > 0)
		{
			for (cntr  = line_at; cntr > 0; cntr--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

			line_at++;
			n--;
		}
	}
}

#include "main.h"

/**
 * print_square - prints a square of side size
 * @size: side legnth of square
 */
void print_square(int size)
{
	int cntr, size_str = size;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (size > 0)
		{
			for (cntr = 0; cntr < size_str; cntr++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
		}
	}
}

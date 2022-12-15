#include "main.h"

/**
 * print_triangle - prints a triangle of size 'size'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int cntr1, cntr2, num_spaces;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (cntr1 = 1; cntr1 <= size; cntr1++)
		{
			num_spaces = size - cntr1;

			for (cntr2 = 0; cntr2 < size; cntr2++)
			{
				if (cntr2 < num_spaces)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

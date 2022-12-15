#include "main.h"

/**
 * print_line - prints a line of a given lenght
 * @n: lenght of line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

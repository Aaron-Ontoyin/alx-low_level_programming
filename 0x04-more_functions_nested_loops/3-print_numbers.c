#include "main.h"

/**
 * print_numbers - prints the 10 digits
 */
void print_numbers(void)
{
	int i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

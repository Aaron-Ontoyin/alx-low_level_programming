#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	len--; /* indexing len, not actual len */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

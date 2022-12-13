#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case followed by new line
 * Return: 0 on success
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}

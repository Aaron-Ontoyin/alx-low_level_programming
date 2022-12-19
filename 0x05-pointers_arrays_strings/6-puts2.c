#include "main.h"

/**
 * puts2 - prints a string at a step of 2 starting from 1st char
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	len--; /* indexing len */
	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

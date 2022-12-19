#include "main.h"

/**
 * puts2 - prints a string to at a step of 2 starting from 1st char
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

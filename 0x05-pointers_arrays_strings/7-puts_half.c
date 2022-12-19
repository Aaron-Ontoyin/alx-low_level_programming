#include "main.h"

/**
 * puts_half - prints second halve of a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int len = 0;
	int str_opr;

	while (str[len] != '\0')
		len++;

	str_opr = len / 2;

	if (len % 2 != 0)
		str_opr++;

	for (str_opr = str_opr; str_opr < len; str_opr++)
		_putchar(str[str_opr]);

	_putchar('\n');
}

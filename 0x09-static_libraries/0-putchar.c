#include "main.h"

/**
 * main - prints _putchar followed by new line
 * Return: 0 on success
 */
int main(void)
{
	char *word = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(*(word + i));
	}
	_putchar('\n');

	return (0);
}

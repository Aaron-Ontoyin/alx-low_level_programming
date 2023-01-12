#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two ints
 * @argc: number of cmd args passed
 * @argv: array of passed in arguments as strings
 * Return: 0;
 */
int main(int argc, char **argv)
{
	unsigned long  num1, num2;

	char *e = "Error";

	if (argc != 3)
	{
		while (*e != '\0')
		{
			_putchar(*e);
			e++;
		}
		_putchar('\n');
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%lu\n", num1 * num2);

	return (0);
}

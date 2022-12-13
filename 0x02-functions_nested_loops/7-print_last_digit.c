#include "main.h"

/**
 * print_last_digit - prints the lasst digit of a number
 *@n: number whose last digit is to be printed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ld = (n % 10);

	_putchar(ld);
	return (ld);
}

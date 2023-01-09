#include "main.h"

/**
 * _isdigit - Checks if a char is a digit or not
 * @c: Char to be checked
 * Return: 1 for digit, 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

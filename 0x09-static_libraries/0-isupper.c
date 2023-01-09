#include "main.h"

/**
 * _isupper - Checks if a letter is upper case
 * @c: Letter to be checked
 * Return: 1 for upper case, 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

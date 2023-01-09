#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 *@c: character to be checked
 * Return: 1 for lowercase 0 for other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

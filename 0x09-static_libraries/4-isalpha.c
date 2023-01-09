#include "main.h"

/**
 * _isalpha - checks if a letter is an alphabet
 *@c: character to be checked
 * Return: 1 for alpha 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

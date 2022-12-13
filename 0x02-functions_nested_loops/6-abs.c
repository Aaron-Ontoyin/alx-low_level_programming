#include "main.h"

/**
 * _abs - produces absolute value of an int
 *@i: integer to find absolute value of
 * Return: absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	return (i);
}

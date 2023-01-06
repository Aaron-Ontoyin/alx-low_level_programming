#include "main.h"

/**
 * _pow_recursion - returns x to the power y; -1 if y is negative
 * @x: base number
 * @y: power
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}

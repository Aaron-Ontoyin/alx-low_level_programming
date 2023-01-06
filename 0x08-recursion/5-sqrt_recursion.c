#include "main.h"

/**
 * _sqrt - finds the natural square root of n; N shoud be greather than 1
 * @n: number to find square root
 * @psqrt: minimum implicit square root of n
 * Return: Square root of n; -1 if n does not have square root
 */
int _sqrt(int n, int psqrt)
{
	int m = psqrt * psqrt;

	if (m == n)
		return (psqrt);
	else if (m < n)
		return (_sqrt(n, ++psqrt));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number to find square root of
 * Return: natural square root of n; -1 if n does not have square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 2));

}

#include "main.h"

/**
 * find_factors - checks if there's a number from 2 to
 * n / 2 that is a factor of n
 * @n: number to check for it's factors
 * @m: a possible factor of n (a number from 2 to n/2)
 * Return: if a there's a factor else 0
 */
int find_factors(int n, int m)
{
	if (m == 2)
		return (1);

	if (n % m != 0)
		return (find_factors(n, m - 1));
	else
		return (0);
}

/**
 * is_prime_number - computes if a number is prime or not
 * @n: number
 * Return: 1 for prime, 0 for non prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (find_factors(n, n / 2));

}

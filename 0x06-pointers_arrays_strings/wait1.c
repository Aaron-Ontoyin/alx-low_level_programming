#include "main.h"

/**
 * len - finds indexing len of string
 * @s: pointer to string
 * Return: len of string
 */
int len(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	return (--i);
}


/**
 * infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: result storage buffer
 * @size_r: size of storage buffer
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int j, tsum, i = 0, leftover = 0, n1len = 0, n2len = 0;
	char r_reverse[500];

	n1len = len(n1);
	n2len = len(n2);

	while (n1len >= 0 || n2len >= 0)
	{
		if (n1len < 0)
			tsum = (n2[n2len] - '0') + leftover;
		else if (n2len < 0)
			tsum = (n1[n1len] - '0') + leftover;
		else
			tsum = (n1[n1len] - '0') + (n2[n2len] - '0') + leftover;
		
		if (tsum > 9)
		{
			r_reverse[i] = (tsum % 10) + '0';
			leftover = 1;
		} else
		{
			r_reverse[i] = tsum + '0';
			leftover = 0;
		}
		i++;

		n1len--;
		n2len--;
	}
	r_reverse[i] = '\0';
	
	if (i > size_r)
		return (0);

	i--;
	for (j = 0;  j < i; j++)
		r[j] = r_reverse[i - j];

	r[j] = '\0';

	return (r);
}

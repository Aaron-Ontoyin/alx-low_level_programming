#include "main.h"


/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: integer repping the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}


/**
 * recursive_compare_chars - recursively compare ending
 * pairs of chars in a string
 * @s: pointer to the string
 * @i1: index of left pair of current pairs being compared
 * @i2: index of right pair of current pairs being compared
 * Return: 1 if all pairs match else 0
 */
int recursive_compare_chars(char *s, int i1, int i2)
{
	if (i1 == i2 || i1 > i2)
		return (1);

	if (s[i1] != s[i2])
		return (0);

	return (recursive_compare_chars(s, ++i1, --i2));
}


/**
 * wildcmp - checks if two strings are equal considering the spcial char, '*'
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 for strings being comparable, 0 for otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	return (0);
}


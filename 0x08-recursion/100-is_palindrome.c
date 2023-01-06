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
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to the string
 * Return: 1 for palindrome, 0 for non palindrome
 */
int is_palindrome(char *s)
{
	int i1 = 0;
	int i2 = _strlen_recursion(s) - 1; /* last index of the string */

	if (s[0] == '\0')
		return (0);

	return (recursive_compare_chars(s, i1, i2));

}

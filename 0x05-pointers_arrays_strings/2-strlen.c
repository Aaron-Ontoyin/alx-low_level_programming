#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

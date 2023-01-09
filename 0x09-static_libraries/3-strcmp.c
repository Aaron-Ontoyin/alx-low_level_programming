#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2: second str
 * Return: -1, 0, or 1 if s1 is less than, equal to or greather than s2 resp.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (0);
}

#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char c in string s
 * @s: string
 * @c: char c
 * Return: pointer to loc of c in s or NULL on absence of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *re = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			re = s + i;
			break;
		}
		i++;
	}

	if (c == '\0')
		return (s + i);

	return (re);
}

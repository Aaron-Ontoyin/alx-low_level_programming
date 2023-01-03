#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - finds first occurrenceof a byte of accept in s
 * @s: string to search in
 * @accept: bytes of accept are searched for
 * Return: pointer to first accept byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}

		j = 0;
		i++;
	}

	if (accept[0] == '\0')
		return (s + i);

	return (NULL);
}

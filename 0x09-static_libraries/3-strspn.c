#include "main.h"

/**
 * _strspn - calculates number of bytes in initial segment of s which has only
 * bytes from accept
 * @s: string to search in
 * @accept: string to search for
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int re = 0;

	while (s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				re++;
				break;
			}
			j++;
		}

		j = 0;
		i++;
	}

	return (re);
}

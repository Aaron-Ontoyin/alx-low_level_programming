#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds first occurence of substring needle in haystaaack
 * @needle: substring searched for
 * @haystack: string searched in
 * Return: pointer to beginning of substring or NULL for unfound case
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			while (1)
			{
				if (needle[j] == '\0')
					return (haystack);

				if (needle[j] != *(haystack + j))
					break;

				j++;
			}
			j = 0;
		}

		haystack++;
	}

	return (NULL);
}

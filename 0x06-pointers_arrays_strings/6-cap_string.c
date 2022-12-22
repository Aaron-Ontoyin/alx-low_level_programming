#include "main.h"

/**
 * cap_string - Capitalizes first letter of all words in a string
 * @s: pointer to string
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j, k;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			k = i + 1;
			if (s[i] == sep[j] && (s[k] >= 'a' && s[k] <= 'z'))
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}

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
		k = i + 1;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && s[k] != '\0')
			{
				if (s[k] >= 'a' && s[k] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
					break;
				}
			}
		}

		i++;
	}
	return (s);
}

#include "main.h"

/**
 * leet - encode the given string
 * a and A are replaced by 4
 * e and E are replaced by 3
 * o and O are replaced by 0
 * t and T are replaced by 7
 * l and L are replaced by 1
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *leet(char *s)
{
	char ecdChars[] = "aAeEoOtTlL";
	char ecdVals[] = "43071";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; ecdChars[j] != '\0'; j++)
		{
			if (s[i] == ecdChars[j] && j % 2 == 0)
			{
				s[i] = ecdVals[j / 2];
				break;
			} else if (s[i] == ecdChars[j])
			{
				s[i] = ecdVals[(j - 1) / 2];
				break;
			};
		}

		i++;
	}

	return (s);
}

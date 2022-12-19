#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = 0;
	int n_opr, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	n_opr = len / 2;

	len--; /* indexing len */
	for (i = 0; i < n_opr; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
}

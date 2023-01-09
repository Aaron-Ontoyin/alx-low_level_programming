#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts a string to integer
 * @s: pointer to string
 * Return: the int value
 */
int _atoi(char *s)
{
	unsigned int int_val = 0;
	int i = 0;
	int neg = 1; /* reverse sign if i see - */

	while (s[i] != '\n')
	{
		if (s[i] == '-')
		{
			neg *= -1;
		} else if (s[i] >= '0' && s[i] <= '9')
		{
			int_val = int_val * 10 + (s[i] - '0');
		}

		if (int_val > 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;

		i++;
	}

	return (int_val * neg);
}

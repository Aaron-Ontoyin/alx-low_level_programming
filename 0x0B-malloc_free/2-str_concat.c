#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Adds two strings together to a new address
 * @s1: string one to be added
 * @s2: string two to be added
 * Return: Pointer to the new string; NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, l;
	int i2 = 0, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	l = l1 + l2 + 1;

	new_str = (char *) malloc(sizeof(char) * l);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		new_str[i] = s1[i];

	for (; i < l - 1; i++, i2++)
		new_str[i] = s2[i2];


	return (new_str);
}

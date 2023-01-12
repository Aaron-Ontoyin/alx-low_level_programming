#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to from s2 to add to s1
 * Return: pointer to new string, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str12;
	unsigned int ls1 = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;

	str12 = (char *) malloc(1 + n + sizeof(str12));
	if (str12 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		str12[a] = s1[a];

	for (b = 0; s2[b] != '\0' && n > b; b++)
		str12[a++] = s2[b];

	str12[a] = '\0';

	return (str12);
}

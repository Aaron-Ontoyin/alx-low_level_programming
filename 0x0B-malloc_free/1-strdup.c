#include "main.h"
#include <stdlib.h>


/**
 * _strdup - copies a string to a new address
 * @str:pointer to the string
 * Return: pointer to new address copied to; NULL if failed or *str is NULL
 */
char *_strdup(char *str)
{
	int s = 0;
	int i;
	char *new_adrr;

	if (str == NULL)
		return (NULL);

	while (str[s] != '\0')
		s++;
	s++;
	new_adrr = (char *) malloc(sizeof(char) * s);
	if (new_adrr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		new_adrr[i] = str[i];

	return (new_adrr);
}

#include "main.h"

/**
 * _strcpy - copies one string to another and retuns pointer to new str
 * @dest: destination string
 * @src : source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len_src = 0;

	while (src[len_src] != '\0')
		len_src++;

	for (i = 0; i <= len_src; i++) /* <= to include null char */
	{
		dest[i] = src[i];
	}

	return (dest);
}

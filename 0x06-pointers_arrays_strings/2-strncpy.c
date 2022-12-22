#include "main.h"

/**
 * _strncpy - Copies n bytes of first str to second str
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: pointer to second string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

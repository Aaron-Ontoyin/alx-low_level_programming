#include "main.h"

/**
 * _strcat - Adds one str to another
 * @dest: first string
 * @src: second string
 * Return: pointer to second string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (dest[dest_len] !=  '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	return (dest);
}

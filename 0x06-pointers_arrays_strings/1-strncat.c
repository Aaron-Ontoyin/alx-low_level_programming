#include "main.h"

/**
 * _strncat - Adds n bytes of first str to the second
 * @dest: first string
 * @src: second string
 * @n: number of bytes to add
 * Return: pointer to second string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] !=  '\0')
		dest_len++;

	while (i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
		if (src[i]  == '\0')
			break;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

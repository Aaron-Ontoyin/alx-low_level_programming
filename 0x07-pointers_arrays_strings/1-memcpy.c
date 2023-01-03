#include "main.h"

/**
 * _memcpy - copies n bytes of mem from src to dest
 * @dest: destination of copied bytes
 * @src: source of copied bytes
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}

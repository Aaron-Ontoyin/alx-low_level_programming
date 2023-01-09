#include <stdio.h>

/**
 * main - prints number of cmdline args passed to it
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	/* a waay of ignoring unused argv */
	if (argv[0])
	{
	}

	printf("%d\n", argc - 1);
	return (0);
}

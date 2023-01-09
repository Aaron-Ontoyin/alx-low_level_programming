#include <stdio.h>

/**
 * main - prints all args it recieved
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}

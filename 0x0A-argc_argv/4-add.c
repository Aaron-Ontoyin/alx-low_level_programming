#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds args passed to it
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: 0 for success; 1 for error if an arg is not a digit
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		while (*(++argv))
		{
			if (isdigit(**argv))
			{
				sum += atoi(*argv);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}

	}
	printf("%d\n", sum);

	return (0);
}

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
	/*to avoid unused argc*/
	if (argc)

	while (*(++argv))
	{
		if (**argv == '-')
		{
			if (isdigit(*(*argv + 1)))
			{
				sum -= atoi(*argv + 1);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		} else if (isdigit(**argv))
		{
			sum += atoi(*argv);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

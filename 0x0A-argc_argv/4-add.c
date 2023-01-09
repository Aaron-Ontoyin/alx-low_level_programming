#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds args passed to it
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: 0 for success; 1 for error if an arg is not a digit
 */
int main(int argc, char *argv[])
{
	int i, j, length;
	int sum = 0;
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		length = strlen(ptr);

		for (j = 0; j < length; j++)
		{
			if (isdigit(*(ptr + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

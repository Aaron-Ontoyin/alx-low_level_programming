#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * main - Generates random password valid password for 102-crack me
 * Return: Always 0
 */
int main(void)
{
	int i, c, j = 0;
	srand(time(NULL));

	/* my wicked password */
	for (i = 0; i < 10; i++)
	{
		while (j < 10000)
		{
			c = (rand() % 90) + 37;
			j  += c;
			write(1, &c, 1);
		}
		j = 0;
	}

	return (0);
}

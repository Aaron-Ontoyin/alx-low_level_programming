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
	int i = 0, c;
	srand(time(NULL));

	while (i <= 2646)
	{
		c = (rand() % 127) + 1;
		write(1, &c, 1);
		i += c;
	}

	c = 2772 - i;
	write(1, &c, 1);

	return (0);
}

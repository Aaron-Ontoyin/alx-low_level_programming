#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 5 and 3 below 1024
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int i = 1;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		sum += i;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

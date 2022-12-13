#include <stdio.h>

/**
 * main - finds sum of even fibo numbers not exceeding 4000000
 * Return: 0 on success
 */
int main(void)
{
	long sum;
	long temp;
	long p1 = 0;
	long p2 = 1;

	while (p2 < 4000000)
	{
		if (((p1 + p2) % 2) == 0)
			sum += (p1 + p2);

		temp = p1;
		p1 = p2;
		p2 = temp + p2;
	}

	printf("%lu\n", sum);

	return (0);
}

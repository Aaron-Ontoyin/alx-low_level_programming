#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 5 and 3 below 1024
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int cval3 = 3;
	int cval5 = 5;

	while (cval3 < 1024)
	{
		sum += cval3;
		cval3 += 3;
	}

	while (cval5 < 1024)
	{
		sum += cval5;
		cval5 += 5;
	}

	printf("%d\n", sum);

	return (0);
}

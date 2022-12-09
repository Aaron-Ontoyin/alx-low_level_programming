#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld  = n % 10;

	printf("The last digit of %d is %d and is ", n, ld);
	if (ld > 5)
	{
		printf("greater than 5\n");
	}
	else if (ld == 0)
	{
		printf("zero\n");
	}
	else if (ld < 6)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

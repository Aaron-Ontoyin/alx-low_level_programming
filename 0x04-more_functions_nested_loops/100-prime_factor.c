#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of program
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long sq= sqrt(num);
	long iter = 1;
	long lpf = 1; /* Note one is not prime */

	while (iter <= sq)
	{
		if ((num % iter == 0) && (iter > lpf))
			lpf = iter;

		iter++;
	}
	printf("%lu\n", lpf);

	return (0);
}


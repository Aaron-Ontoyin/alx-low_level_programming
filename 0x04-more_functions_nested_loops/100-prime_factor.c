#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of program
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long lpf, low_fctr = 2;

	while (num != 0)
	{
		if (num % low_fctr != 0)
		{
			low_fctr++;
		} else
		{
			lpf = num;
			num = num / low_fctr;

			if (num == 1)
				break;
		}
	}

	printf("%lu\n", lpf);

	return (0);
}


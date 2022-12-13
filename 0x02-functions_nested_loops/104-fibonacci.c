#include <stdio.h>

/**
 * main - prints first 98 fibo numbers satrting with 1 and 2
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long p1 = 0, p2 = 1, temp;
	long p1_half1, p1_half2, p2_half1, p2_half2;
	long half1, half2;

	for (i = 0; i < 92; i++)
	{
		printf("%lu, ", p1 + p2);
		temp = p1;
		p1 = p2;
		p2 += temp;
	}

	p1_half1 = p1 / 10000000000;
	p2_half1 = p2 / 10000000000;
	p1_half2 = p1 % 10000000000;
	p2_half2 = p2 % 10000000000;
	for (i = 92; i < 98; i++)
	{
		half1 = p1_half1 + p2_half1;
		half2 = p1_half2 + p2_half2;
		if (p1_half2 + p2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i < 97)
			printf(", ");
		p1_half1 = p2_half1;
		p1_half2 = p2_half2;
		p2_half1 = half1;
		p2_half2 = half2;
	}
	printf("\n");
	return (0);
}

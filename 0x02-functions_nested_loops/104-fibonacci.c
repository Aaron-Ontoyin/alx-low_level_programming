#include <stdio.h>

/**
 * main - prints first 98 fibo numbers satrting with 1 and 2
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long temp;
	long p1 = 0;
	long p2 = 1;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", p1 + p2);
		temp = p1;
		p1 = p2;
		p2 = temp + p2;
		if (i < 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}
